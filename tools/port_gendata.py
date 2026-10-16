#!/usr/bin/env python3
"""P2: generate the host-side data and stand-ins for the port link, as LLVM IR (one file per module).

Every section of every module (main, itcm, dtcm, ov000-ov018) becomes one blob with the ROM bytes; .bss is zero.
Pointer words in non-code sections (relocs.txt `load` entries) become relocated pointers: to a function symbol
when the target is a function start, else to the target module's blob + offset. Each non-function symbol becomes
an alias into its blob unless a host object already defines it. Every function no host object defines gets a
trap stand-in (`ffc_trap(name)`, port/src/runtime.c). Code-section blobs stay inert bytes.

LLVM IR keeps this target-neutral (i386 ELF, wasm32, i686 COFF all accept the aliases).

usage: port_gendata.py --objs build/port/host/objs.txt [--out build/port/gen]
"""
import argparse
import bisect
import re
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

SEC_RE = re.compile(r"^\s+(\S+)\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+) kind:(\w+)")
RELOC_RE = re.compile(r"^from:(0x[0-9a-f]+) kind:(\w+) to:(0x[0-9a-f]+)(?: add:(-?0x[0-9a-f]+))? module:(\S+)")


RENAME = {"main": "ffc_main"}  # the game's main(); port_configure.py compiles src/ with -Dmain=ffc_main


def q(name: str) -> str:
    name = RENAME.get(name, name)
    return "@" + (name if re.fullmatch(r"[A-Za-z_.$][\w.$]*", name) else '"' + name.replace('"', "\\22") + '"')


def sections(d: Path):
    out = []
    for line in (d / "delinks.txt").read_text().splitlines():
        if not line.startswith("    ."):
            if line.strip():
                break
            continue
        m = SEC_RE.match(line)
        if m:
            out.append((m[1], int(m[2], 16), int(m[3], 16), m[4]))
    return out


def module_syms(d: Path, mod):
    out = []
    f = d / "symbols.txt"
    for line in f.read_text().splitlines():
        m = ffclib.SYM_RE.match(line)
        if m:
            out.append(ffclib.Sym(m[1], m[2], m[3], int(m[4], 16), mod))
    return out


def nm_defined(objs):
    defined, undef = set(), set()
    for i in range(0, len(objs), 500):
        r = subprocess.run(["nm", "-A", "--format=posix"] + objs[i:i + 500], capture_output=True, text=True)
        for line in r.stdout.splitlines():
            p = line.rsplit(" ", 3)
            parts = line.split()
            if len(parts) < 3:
                continue
            name, typ = parts[1], parts[2]
            if typ == "U":
                undef.add(name)
            elif typ not in ("a", "N", "n"):
                defined.add(name)
    return defined, undef - defined


def ir_bytes(b: bytes) -> str:
    return "c\"" + "".join(chr(x) if 32 <= x < 127 and x not in (34, 92) else f"\\{x:02X}" for x in b) + "\""


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--objs", type=Path, required=True)
    ap.add_argument("--out", type=Path, default=ffclib.ROOT / "build" / "port" / "gen")
    a = ap.parse_args()
    a.out.mkdir(parents=True, exist_ok=True)
    objs = [l for l in a.objs.read_text().split() if l]
    defined, undef = nm_defined(objs)
    print(f"host objects: {len(objs)}, {len(defined)} defined symbols, {len(undef)} undefined", file=sys.stderr)

    mods = list(ffclib.module_dirs())
    secs = {m: sections(d) for m, d in mods}
    syms = {m: module_syms(d, m) for m, d in mods}
    funcs = {m: {s.addr & ~1: s.name for s in syms[m] if s.kind == "function"} for m in syms}
    abs_syms = {}
    for line in (ffclib.CONFIG / "abs_symbols.txt").read_text().splitlines():
        m = ffclib.SYM_RE.match(line)
        if m:
            abs_syms[int(m[4], 16) & ~1] = m[1]
    blob = lambda m, s: f"ffc_blob_{m}{s}".replace(".", "_")  # noqa: E731
    used_blobs = set()

    def sec_of(m, addr):
        for name, lo, hi, kind in secs.get(m, ()):
            if lo <= addr < hi or (kind == "bss" and addr == hi):
                return name, lo, kind
        return None

    def target(mod, to, tm):
        """-> IR constant for a pointer to `to`"""
        cands = []
        if tm.startswith("overlays("):
            cands = ["ov%03d" % int(x) for x in tm[9:-1].split(",") if x.strip()]
        elif tm.startswith("overlay("):
            cands = ["ov%03d" % int(tm[8:-1])]
        elif tm in ("main", "itcm", "dtcm"):
            cands = [tm]
        for c in cands:
            if (to & ~1) in funcs.get(c, {}):
                return q(funcs[c][to & ~1]), funcs[c][to & ~1]
        for c in cands:
            s = sec_of(c, to)
            if s:
                used_blobs.add(blob(c, s[0]))
                return f"getelementptr (i8, ptr {q(blob(c, s[0]))}, i32 {to - s[1]})", None
        if (to & ~1) in abs_syms:
            return q(abs_syms[to & ~1]), abs_syms[to & ~1]
        return f"inttoptr (i32 {to} to ptr)", None

    emitted = set()
    need_func = set()
    stats = defaultdict(int)
    for m, d in mods:
        rng = ffclib.module_ranges()[m]
        data = ffclib._bin(m)
        rel = {}
        for line in (d / "relocs.txt").read_text().splitlines():
            r = RELOC_RE.match(line)
            if r and r[2] == "load":
                rel[int(r[1], 16)] = (int(r[3], 16) + (int(r[4], 16) if r[4] else 0), r[5])
        L = [f"; generated by tools/port_gendata.py: module {m}", ""]
        file_funcs = set()
        used_blobs.clear()
        own_blobs = {blob(m, n) for n, *_ in secs[m]}
        sec_syms = defaultdict(list)
        for s in syms[m]:
            if s.kind != "function":
                sc = sec_of(m, s.addr)
                if sc:
                    sec_syms[sc[0]].append(s)
        for name, lo, hi, kind in secs[m]:
            bn = blob(m, name)
            if kind == "bss":
                L.append(f"{q(bn)} = global [{hi - lo} x i8] zeroinitializer, align 32")
            else:
                raw = data[lo - rng[0]:hi - rng[0]]
                fields, vals, pos = [], [], 0
                ptrs = sorted(o for o in rel if lo <= o < hi and (o - lo) % 4 == 0 and kind != "code")
                for o in ptrs:
                    off = o - lo
                    if off < pos:
                        continue
                    if off > pos:
                        fields.append(f"[{off - pos} x i8]")
                        vals.append(f"[{off - pos} x i8] {ir_bytes(raw[pos:off])}")
                    to, tm = rel[o]
                    c, fn = target(m, to, tm)
                    if fn:
                        need_func.add(fn)
                        file_funcs.add(fn)
                    if to & 1 and fn is None and not c.startswith("inttoptr"):
                        c = f"getelementptr (i8, ptr {c}, i32 0)"
                    fields.append("ptr")
                    vals.append(f"ptr {c}")
                    stats["ptr"] += 1
                    pos = off + 4
                if pos < len(raw):
                    fields.append(f"[{len(raw) - pos} x i8]")
                    vals.append(f"[{len(raw) - pos} x i8] {ir_bytes(raw[pos:])}")
                const = "constant" if kind in ("code", "rodata") else "global"
                L.append(f"{q(bn)} = {const} <{{ {', '.join(fields) or '[0 x i8]'} }}> "
                         f"<{{ {', '.join(vals) or '[0 x i8] zeroinitializer'} }}>, align 32")
            emitted.add(bn)
            for s in sec_syms[name]:
                if s.name in defined or s.name in emitted:
                    stats["owned"] += 1
                    continue
                emitted.add(s.name)
                L.append(f"{q(s.name)} = alias i8, getelementptr (i8, ptr {q(bn)}, i32 {s.addr - lo})")
                stats["alias"] += 1
        L += [f"declare void {q(fn)}()" for fn in sorted(file_funcs)]
        L += [f"{q(b)} = external global i8" for b in sorted(used_blobs - own_blobs)]
        (a.out / f"{m}.ll").write_text("\n".join(L) + "\n")

    allfuncs = {s.name for m in syms for s in syms[m] if s.kind == "function"} | set(abs_syms.values())
    stand = sorted((need_func | (undef & allfuncs)) - defined - emitted)
    libc = {"memcpy", "memset", "memmove", "memcmp", "strlen", "_GLOBAL_OFFSET_TABLE_"}
    unknown = sorted(undef - allfuncs - emitted - defined - libc)
    stand += [n for n in unknown if n.startswith("_Z")]  # C++ helpers a TU declares but never defines
    unknown = [n for n in unknown if not n.startswith("_Z")]
    L = ["; generated by tools/port_gendata.py: trap stand-ins", "declare void @ffc_trap(ptr)", ""]
    for i, n in enumerate(stand):
        L.append(f"@.s{i} = private constant [{len(n) + 1} x i8] c\"{n}\\00\"")
        L.append(f"define void {q(n)}() {{\n  call void @ffc_trap(ptr @.s{i})\n  unreachable\n}}")
    L.append("; undefined, not in symbols.txt: zero-filled data")
    for n in unknown:
        L.append(f"{q(n)} = global [64 x i8] zeroinitializer, align 4")
    (a.out / "standins.ll").write_text("\n".join(L) + "\n")
    (a.out / "standins.txt").write_text("".join(n + "\n" for n in stand))
    (a.out / "unknown_undef.txt").write_text("".join(n + "\n" for n in unknown))
    print(f"aliases {stats['alias']}, owned by TUs {stats['owned']}, data pointers {stats['ptr']}, "
          f"stand-ins {len(stand)}, unknown undefined {len(unknown)} -> {a.out}", file=sys.stderr)


if __name__ == "__main__":
    main()
