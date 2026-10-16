#!/usr/bin/env python3
"""Recover functions dsd never symbolized (code reached only via vtables / function pointers / tail calls).

Candidates: targets of relocs.txt entries (any module) that land in a module's code outside every known function,
plus arcnid/ffc-decomp's ov002 manifest starts. Each candidate's end is found by a Thumb linear sweep (last return
past every forward branch, then its literal pool and alignment padding), capped at the next known start.
Thumb only; ARM candidates are reported, not added.

Writes (with --apply): symbols.txt entries, thumb_call/thumb_call_arm relocs for BL/BLX inside the new functions,
and queue.csv todo rows. Without --apply it only prints a report.

usage: recover_funcs.py [--arcnid /home/user/arcnid/ffc-decomp] [--apply]
"""
import argparse
import bisect
import csv
import re
import struct
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402


def code_ranges(mod):
    d = dict(ffclib.module_dirs())[mod]
    out = []
    for line in (d / "delinks.txt").read_text().splitlines():
        if not line.startswith("    ."):
            if line.strip():
                break
            continue
        m = re.search(r"start:(0x[0-9a-f]+) end:(0x[0-9a-f]+) kind:(\w+)", line)
        if m and m[3] == "code":
            out.append((int(m[1], 16), int(m[2], 16)))
    return out


def mod_of_addr(addr, prefer):
    """Module whose code contains addr; `prefer` first (overlays overlap)."""
    hits = [m for m, _ in ffclib.module_dirs() if any(a <= addr < b for a, b in code_ranges(m))]
    if prefer in hits:
        return prefer
    return hits[0] if len(hits) == 1 else None


def thumb_end(b: bytes, base: int, start: int, limit: int):
    """End address of the Thumb function at `start` (exclusive), <= limit, or None if it doesn't look like code."""
    off, far, pools = start - base, start, set()
    lim = limit - base
    while off + 2 <= lim:
        a = base + off
        if off in pools:
            off += 4
            continue
        hw, = struct.unpack_from("<H", b, off)
        nxt = off + 2
        ret = False
        if hw & 0xF800 == 0xF000 and off + 4 <= lim:  # BL/BLX prefix
            lo, = struct.unpack_from("<H", b, off + 2)
            if lo & 0xE800 not in (0xE800, 0xF800) and lo & 0xF800 not in (0xE800, 0xF800):
                return None
            nxt = off + 4
        elif hw & 0xF800 == 0x4800:  # ldr rX, [pc, #imm]
            p = ((a + 4) & ~3) + (hw & 0xFF) * 4 - base
            if p < lim:
                pools.add(p)
        elif hw & 0xF000 == 0xD000 and (hw >> 8) & 0xF < 14:  # b<cond>
            t = a + 4 + (((hw & 0xFF) ^ 0x80) - 0x80) * 2
            far = max(far, t)
        elif hw & 0xF800 == 0xE000:  # b
            t = a + 4 + (((hw & 0x7FF) ^ 0x400) - 0x400) * 2
            far = max(far, t)
            ret = True
        elif hw & 0xFF00 == 0xBD00 or hw & 0xFF87 == 0x4700:  # pop {..pc} / bx rX
            ret = True
        elif hw == 0x46F7 or hw & 0xFF80 == 0x4680 and hw & 0x87 == 0x87:  # mov pc, rX
            ret = True
        off = nxt
        if ret and base + off > far:
            # extend over the literal pool and alignment padding
            # padding (0000 or nop 46c0) is part of the function only when a pool follows it (dsd convention)
            while off in pools or (off % 4 and off + 2 in pools and b[off:off + 2] in (b"\0\0", b"\xc0\x46")):
                off += 4 if off in pools else 2
            return base + off
    return None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--arcnid", type=Path, default=Path("/home/user/arcnid/ffc-decomp"))
    ap.add_argument("--apply", action="store_true")
    a = ap.parse_args()

    syms = ffclib.symbols()
    funcs = defaultdict(list)  # module -> [(start, end)]
    names = set()
    for s in syms.values():
        names.add(s.name)
        if s.kind == "function" and s.module != "abs":
            funcs[s.module].append((s.addr, s.addr + (s.size or 2)))
    for m in funcs:
        funcs[m].sort()

    def inside(mod, addr):
        fl = funcs[mod]
        i = bisect.bisect_right(fl, (addr, 1 << 40)) - 1
        return i >= 0 and fl[i][0] <= addr < fl[i][1]

    cands = defaultdict(dict)  # mod -> addr -> source
    for mod, _ in ffclib.module_dirs():
        for frm, (kind, to, tmod) in ffclib.relocs(mod).items():
            tm = tmod or mod_of_addr(to & ~1, mod)
            if tm is None:
                continue
            if kind == "load" and not to & 1:
                continue  # even pointers are mostly data
            t = to & ~1
            if not any(x <= t < y for x, y in code_ranges(tm)) or inside(tm, t):
                continue
            cands[tm].setdefault(t, f"{kind} from {mod}:{frm:#x}" + ("" if to & 1 or "thumb" in kind else " ARM"))
    man = a.arcnid / "config/ov002/manifest.csv"
    asize = {}  # arcnid's split sizes win over the sweep (they agree on 529/559 C+asm; the rest are asm)
    if man.exists():
        for r in csv.DictReader(man.open()):
            t = int(r["address"], 16)
            if not inside("ov002", t):
                cands["ov002"].setdefault(t, "arcnid")
                asize[t] = int(r["size"])

    new = []  # (mod, start, end, src)
    rejected = []
    for mod, cs in sorted(cands.items()):
        b = ffclib._bin(mod)
        base = ffclib.module_ranges()[mod][0]
        starts = sorted(set(cs) | {f[0] for f in funcs[mod]})
        for t in sorted(cs):
            if cs[t].endswith("ARM"):
                rejected.append((mod, t, "arm target"))
                continue
            i = bisect.bisect_right(starts, t)
            limit = starts[i] if i < len(starts) else next(y for x, y in code_ranges(mod) if x <= t < y)
            e = thumb_end(b, base, t, limit)
            if mod == "ov002" and t in asize and t + asize[t] <= limit:
                e = t + asize[t]
            if e is None:
                rejected.append((mod, t, "no thumb return before next start"))
                continue
            new.append((mod, t, e, cs[t]))

    by = defaultdict(int)
    for mod, t, e, src in new:
        by[mod] += 1
    print(f"{len(new)} new functions ({sum(e - t for _, t, e, _ in new)} bytes):", dict(by))
    print(f"{len(rejected)} rejected:", dict((k, sum(1 for r in rejected if r[2] == k))
                                             for k in {r[2] for r in rejected}))
    rep = ffclib.ROOT / "work" / "recover_funcs.txt"
    rep.parent.mkdir(exist_ok=True)
    rep.write_text("".join(f"{m} {t:#010x} {e:#010x} {s}\n" for m, t, e, s in new) +
                   "".join(f"REJECT {m} {t:#010x} {why}\n" for m, t, why in rejected))
    if not a.apply:
        return

    dirs = dict(ffclib.module_dirs())
    sym_add, rel_add, rows = defaultdict(list), defaultdict(list), []
    for mod, t, e, src in new:
        prefix = "func_" if mod == "main" else f"func_{mod}_"
        nm = f"{prefix}{t:08x}"
        if nm in names:
            continue
        sym_add[mod].append(f"{nm} kind:function(thumb,size={e - t:#x}) addr:{t:#010x}")
        b = ffclib._bin(mod)
        base = ffclib.module_ranges()[mod][0]
        rel = ffclib.relocs(mod)
        pools = ffclib.pool_offsets(b[t - base:e - base], t, "thumb")
        off = 0
        while t + off + 4 <= e:
            if off in pools:
                off += 4
                continue
            hi, lo = struct.unpack_from("<HH", b, t - base + off)
            if hi & 0xF800 == 0xF000 and lo & 0xE800 == 0xE800 and t + off not in rel:
                v = ((hi & 0x7FF) << 12 | (lo & 0x7FF) << 1)
                v = (v ^ 0x400000) - 0x400000
                to = t + off + 4 + v
                blx = lo & 0xF800 == 0xE800
                if blx:
                    to &= ~3
                tm = mod_of_addr(to, mod)
                if tm is None:
                    prev = [r for r in rel.values() if r[1] == to and r[2]]
                    tm = prev[0][2] if prev else None
                if tm:
                    mt = "main" if tm == "main" else tm if tm in ("itcm", "dtcm") else f"overlay({int(tm[2:])})"
                    rel_add[mod].append(f"from:{t + off:#010x} kind:{'thumb_call_arm' if blx else 'thumb_call'} "
                                        f"to:{to:#010x} module:{mt}")
                off += 4
                continue
            off += 2
        rows.append(nm)
    for mod, lines in sym_add.items():
        with (dirs[mod] / "symbols.txt").open("a") as f:
            f.write("".join(l + "\n" for l in lines))
    for mod, lines in rel_add.items():
        with (dirs[mod] / "relocs.txt").open("a") as f:
            f.write("".join(l + "\n" for l in lines))
    ffclib.symbols.cache_clear()
    import triage
    with ffclib.queue_update() as q:
        have = {r["func"] for r in q}
        for nm in rows:
            if nm in have:
                continue
            s = ffclib.symbols()[nm]
            n, calls, br, loops, jt = triage.stats(s)
            diff = n + 3 * calls + 2 * br + 10 * loops + (40 if jt else 0)
            tier = "haiku" if n <= 40 and not jt else "sonnet" if n <= 250 else "opus"
            q.append(dict(func=nm, tu=s.module, size=f"{s.size:#x}", difficulty=diff, status="todo", tier=tier,
                          attempts=0, best_pct="", note="recovered (recover_funcs.py)"))
    print(f"applied: {sum(map(len, sym_add.values()))} symbols, {sum(map(len, rel_add.values()))} relocs, "
          f"{len(rows)} queue rows")


if __name__ == "__main__":
    main()
