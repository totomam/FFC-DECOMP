"""Shared helpers for tools/try, tools/integrate, tools/triage: symbols, target bytes,
compiling with the project flags, and relocation-aware comparison."""
import os
import re
import struct
import subprocess
from functools import lru_cache
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
VERSION = os.environ.get("FFC_VERSION", "usa")
CONFIG = ROOT / "config" / VERSION / "arm9"
EXTRACT = ROOT / "extract" / VERSION
MWCC = os.environ.get("FFC_MWCC", "1.2p2")
WIBO = ROOT / "tools" / "bin" / "wibo"
CC = ROOT / "tools" / "mwccarm" / MWCC / "mwccarm.exe"
LICENSE = ROOT / "tools" / "mwccarm" / "license.dat"

# Keep in sync with configure.py (it imports these).
CC_FLAGS = [
    "-O4,p", "-enum", "int", "-lang", "c99", "-Cpp_exceptions", "off", "-gccext,on",
    "-proc", "arm946e", "-gccinc", "-ipa", "file", "-interworking", "-inline", "on,noauto",
    "-char", "signed", "-thumb", "-w", "off", "-sym", "on", "-nolink", "-msgstyle", "gcc",
]


def file_flags(path: Path) -> list[str]:
    """First-line `/* cflags: -nointerworking */` overrides. `-noX` drops `-X`."""
    try:
        first = Path(path).read_text(errors="replace").split("\n", 1)[0]
    except FileNotFoundError:
        return []
    if "cflags:" not in first:
        return []
    return first.split("cflags:", 1)[1].split("*/", 1)[0].split()


def cc_flags_for(path: Path) -> list[str]:
    extra = file_flags(path)
    flags = list(CC_FLAGS)
    for tok in extra:
        if tok.startswith("-no") and ("-" + tok[3:]) in flags:
            flags.remove("-" + tok[3:])
    return flags + extra


def module_dirs():
    yield "main", CONFIG
    for d in sorted((CONFIG / "overlays").iterdir()):
        yield d.name, d
    for name in ("itcm", "dtcm"):
        yield name, CONFIG / name


SYM_RE = re.compile(r"^(\S+) kind:(\w+)(?:\(([^)]*)\))? addr:(0x[0-9a-f]+)")


class Sym:
    __slots__ = ("name", "kind", "mode", "size", "addr", "module")

    def __init__(self, name, kind, attrs, addr, module):
        self.name, self.kind, self.addr, self.module = name, kind, addr, module
        self.mode, self.size = None, None
        for a in (attrs or "").split(","):
            a = a.strip()
            if a in ("arm", "thumb"):
                self.mode = a
            elif a.startswith("size="):
                self.size = int(a[5:], 16)


@lru_cache(None)
def symbols() -> dict:
    out = {}
    for mod, d in module_dirs():
        f = d / "symbols.txt"
        if not f.exists():
            continue
        for line in f.read_text().splitlines():
            m = SYM_RE.match(line)
            if m:
                s = Sym(m[1], m[2], m[3], int(m[4], 16), mod)
                out.setdefault(s.name, s)
    return out


@lru_cache(None)
def module_ranges() -> dict:
    """module -> (start, end) from the module header sections of delinks.txt."""
    out = {}
    for mod, d in module_dirs():
        lo, hi = None, None
        for line in (d / "delinks.txt").read_text().splitlines():
            if not line.startswith("    ."):
                if line.strip():
                    break
                continue
            m = re.search(r"start:(0x[0-9a-f]+) end:(0x[0-9a-f]+) kind:(\w+)", line)
            if m and m[3] != "bss":
                a, b = int(m[1], 16), int(m[2], 16)
                lo = a if lo is None else min(lo, a)
                hi = b if hi is None else max(hi, b)
        out[mod] = (lo, hi)
    return out


def module_bin(mod: str) -> Path:
    if mod == "main":
        return EXTRACT / "arm9" / "arm9.bin"
    if mod in ("itcm", "dtcm"):
        return EXTRACT / "arm9" / f"{mod}.bin"
    return EXTRACT / "arm9_overlays" / f"{mod}.bin"


@lru_cache(None)
def _bin(mod):
    return module_bin(mod).read_bytes()


def target_bytes(sym: Sym) -> bytes:
    start = module_ranges()[sym.module][0]
    off = sym.addr - start
    return _bin(sym.module)[off:off + sym.size]


def compile_c(src: Path, out_dir: Path) -> tuple[Path | None, str]:
    out_dir.mkdir(parents=True, exist_ok=True)
    obj = out_dir / (Path(src).stem + ".o")
    if obj.exists():
        obj.unlink()
    env = dict(os.environ, LM_LICENSE_FILE=str(LICENSE))
    cmd = [str(WIBO), str(CC), *cc_flags_for(src), "-i", str(ROOT / "include"),
           "-d", VERSION, "-c", str(src), "-o", str(obj)]
    p = subprocess.run(cmd, capture_output=True, text=True, env=env)
    msg = (p.stdout + p.stderr).strip()
    return (obj if p.returncode == 0 and obj.exists() else None), msg


# ---- minimal ELF32 reader (mwcc objects) ----
class Elf:
    def __init__(self, path: Path):
        d = self.data = Path(path).read_bytes()
        shoff, = struct.unpack_from("<I", d, 0x20)
        shentsize, shnum, shstrndx = struct.unpack_from("<HHH", d, 0x2E)
        self.sh = []
        for i in range(shnum):
            name, typ, flags, addr, off, size, link, info, align, entsize = struct.unpack_from(
                "<10I", d, shoff + i * shentsize)
            self.sh.append(dict(name=name, type=typ, off=off, size=size, link=link, info=info))
        strtab = self.sh[shstrndx]
        for s in self.sh:
            s["name"] = self._str(strtab, s["name"])
        self.syms = []
        for s in self.sh:
            if s["type"] == 2:
                st = self.sh[s["link"]]
                for j in range(s["size"] // 16):
                    n, val, size, info, other, shndx = struct.unpack_from("<IIIBBH", d, s["off"] + j * 16)
                    self.syms.append(dict(name=self._str(st, n), value=val, size=size,
                                          type=info & 15, bind=info >> 4, shndx=shndx))

    def _str(self, sec, off):
        b = self.data[sec["off"] + off:]
        return b[:b.index(0)].decode()

    def section_bytes(self, idx):
        s = self.sh[idx]
        return self.data[s["off"]:s["off"] + s["size"]]

    def relocs(self, sec_idx):
        out = []
        for s in self.sh:
            if s["type"] in (4, 9) and s["info"] == sec_idx:
                ent = 12 if s["type"] == 4 else 8
                for j in range(s["size"] // ent):
                    if ent == 12:
                        off, info, add = struct.unpack_from("<IIi", self.data, s["off"] + j * 12)
                    else:
                        (off, info), add = struct.unpack_from("<II", self.data, s["off"] + j * 8), 0
                    out.append((off, info & 0xFF, self.syms[info >> 8], add))
        return out


def _thumb_bl(p, s, to_arm):
    if to_arm:
        s &= ~3
        off = s - ((p + 4) & ~3)
    else:
        off = s - (p + 4)
    hi = 0xF000 | ((off >> 12) & 0x7FF)
    lo = (0xE800 if to_arm else 0xF800) | ((off >> 1) & 0x7FF)
    if to_arm:
        lo &= ~1
    return struct.pack("<HH", hi, lo)


def _arm_bl(p, s, to_thumb, cond_word):
    off = s - (p + 8)
    if to_thumb:
        return struct.pack("<I", 0xFA000000 | (((off >> 1) & 1) << 24) | ((off >> 2) & 0xFFFFFF))
    return struct.pack("<I", (cond_word & 0xFF000000) | ((off >> 2) & 0xFFFFFF))


def resolve_func(obj: Path, name: str, addr: int):
    """Returns (bytes with relocations applied at `addr`, list of (offset, len, note) unresolved)."""
    e = Elf(obj)
    cand = [s for s in e.syms if s["name"] == name and s["shndx"] not in (0, 0xFFF1, 0xFFF2)]
    if not cand:
        return None, [(0, 0, f"symbol {name} not defined in object")]
    fs = cand[0]
    sec = fs["shndx"]
    raw = bytearray(e.section_bytes(sec))
    start, size = fs["value"] & ~1, fs["size"]
    syms = symbols()
    bad = []
    for off, typ, rs, add in e.relocs(sec):
        if not (start <= off < start + size):
            continue
        p = addr + (off - start)
        tgt = syms.get(rs["name"])
        if tgt is None or rs["shndx"] not in (0,):
            # local symbol (string literal, static) or unknown extern
            if rs["name"] == name:
                tgt_addr, tgt_mode = addr, None
            else:
                bad.append((off - start, 4, f"unresolved {rs['name'] or 'local'}"))
                continue
        else:
            tgt_addr, tgt_mode = tgt.addr, tgt.mode
        if typ == 2:  # ABS32
            v = tgt_addr + add + (1 if tgt_mode == "thumb" and tgt.kind == "function" else 0)
            raw[off:off + 4] = struct.pack("<I", v & 0xFFFFFFFF)
        elif typ == 10:  # THM_CALL
            raw[off:off + 4] = _thumb_bl(p, tgt_addr + add + 4, tgt_mode == "arm")
        elif typ in (1, 28, 29):  # PC24, CALL, JUMP24
            w, = struct.unpack_from("<I", raw, off)
            raw[off:off + 4] = _arm_bl(p, tgt_addr + add + 8, tgt_mode == "thumb" and typ != 29, w)
        else:
            bad.append((off - start, 4, f"reloc type {typ} -> {rs['name']}"))
    return bytes(raw[start:start + size]), bad


@lru_cache(None)
def _cs(mode):
    import capstone
    md = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB if mode == "thumb" else capstone.CS_MODE_ARM)
    return md


def pool_offsets(b: bytes, addr: int, mode: str) -> set:
    """Offsets of literal-pool words referenced by pc-relative loads."""
    md = _cs(mode)
    pools, off, step = set(), 0, 2 if mode == "thumb" else 4
    while off < len(b):
        if off in pools:
            off += 4
            continue
        ins = next(md.disasm(b[off:off + 4], addr + off), None)
        if ins is None:
            off += step
            continue
        m = re.match(r"\[pc, #(-?0x[0-9a-f]+|-?\d+)\]", ins.op_str.split(", ", 1)[-1]) if ins.mnemonic.startswith("ldr") else None
        if m:
            base = ((addr + off + 4) & ~3) if mode == "thumb" else addr + off + 8
            t = base + int(m[1], 0) - addr
            if 0 <= t < len(b):
                pools.add(t)
        off += ins.size
    return pools


def disasm(b: bytes, addr: int, mode: str, pools: set | None = None):
    """[(offset, size, text)], falls back to .word/.hword for undecodable bytes."""
    md = _cs(mode)
    if pools is None:
        pools = pool_offsets(b, addr, mode)
    out, off, step = [], 0, 2 if mode == "thumb" else 4
    while off < len(b):
        if off in pools and off + 4 <= len(b):
            out.append((off, 4, f".word {int.from_bytes(b[off:off+4], 'little'):#010x}"))
            off += 4
            continue
        ins = next(md.disasm(b[off:off + 4], addr + off), None)
        if ins is not None:
            m = re.search(r"#(0x[0-9a-f]+)$", ins.op_str)
            if ins.mnemonic.startswith("b") and m and addr <= int(m[1], 16) < addr + len(b):
                ins_text = f"{ins.mnemonic} L{int(m[1], 16) - addr:04x}"
            else:
                ins_text = f"{ins.mnemonic} {ins.op_str}".strip()
        if ins is None:
            n = min(step, len(b) - off)
            out.append((off, n, f".{'hword' if n == 2 else 'word'} {int.from_bytes(b[off:off+n], 'little'):#x}"))
            off += n
        else:
            out.append((off, ins.size, ins_text))
            off += ins.size
    return out


def match_pct(a: bytes, b: bytes) -> float:
    n = max(len(a), len(b))
    if n == 0:
        return 100.0
    same = sum(1 for i in range(min(len(a), len(b))) if a[i] == b[i])
    return 100.0 * same / n


@lru_cache(None)
def addr_names() -> dict:
    """(module, addr) -> name"""
    return {(s.module, s.addr): s.name for s in symbols().values()}


RELOC_RE = re.compile(r"^from:(0x[0-9a-f]+) kind:(\w+) to:(0x[0-9a-f]+)(?: add:(-?0x[0-9a-f]+))? module:(\S+)")


@lru_cache(None)
def relocs(mod: str) -> dict:
    """from_addr -> (kind, to_addr, to_module_or_None)"""
    out = {}
    d = dict(module_dirs())[mod]
    for line in (d / "relocs.txt").read_text().splitlines():
        m = RELOC_RE.match(line)
        if m:
            tm = m[5]
            if tm.startswith("overlay("):
                tm = "ov%03d" % int(tm[8:-1])
            elif tm in ("none", "overlays") or tm.startswith("overlays"):
                tm = None
            out[int(m[1], 16)] = (m[2], int(m[3], 16), tm)
    return out


def ref_name(mod, kind, to, tmod):
    names = addr_names()
    for cand in ([tmod] if tmod else []) + [mod, "main", "itcm", "dtcm"]:
        n = names.get((cand, to)) or names.get((cand, to & ~1))
        if n:
            return n
    return f"{to:#010x}"


def func_asm(sym: Sym) -> list[str]:
    """Annotated target disassembly lines for prompts."""
    b = target_bytes(sym)
    rel = relocs(sym.module)
    mode = sym.mode or "thumb"
    out = []
    pool_val = {}
    for off in pool_offsets(b, sym.addr, mode):
        r = rel.get(sym.addr + off)
        pool_val[off] = ref_name(sym.module, *r) if r else f"{int.from_bytes(b[off:off+4], 'little'):#x}"
    for off, size, text in disasm(b, sym.addr, mode):
        m = re.search(r"\[pc, #(0x[0-9a-f]+|\d+)\]", text) if text.startswith("ldr") else None
        if m:
            base = ((off + 4) & ~3) if mode == "thumb" else off + 8
            v = pool_val.get(base + int(m[1], 0))
            if v:
                text = re.sub(r"\[pc, #[^\]]+\]", f"={v}", text)
        a = sym.addr + off
        r = rel.get(a)
        if r:
            nm = ref_name(sym.module, *r)
            if text.startswith(".word"):
                text = f".word {nm}"
            elif " #0x" in text and text.split()[0].startswith("bl"):
                text = f"{text.split()[0]} {nm}"
            else:
                text = f"{text} ; {nm}"
        out.append(f"{off:04x}: {text}")
    return out


def callees(sym: Sym) -> list[str]:
    rel = relocs(sym.module)
    seen = []
    for a, (kind, to, tmod) in rel.items():
        if sym.addr <= a < sym.addr + sym.size:
            seen.append((kind, ref_name(sym.module, kind, to, tmod)))
    return seen
