#!/usr/bin/env python3
"""tools/strip_weak.py <obj.o> — empty unreferenced out-of-line copies of C++ inline functions.

mwcc emits every used inline member (e.g. an empty dtor that was inlined everywhere) as a weak
(MW binding 13) function in its own .text section. The original link dead-stripped those; ours
runs -nodead (unreferenced matched TUs would vanish), so they would shift the ROM. This zeroes the
size of such sections (and their relocations) when nothing in the object references them."""
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

WEAK_BINDS = (2, 13)  # STB_WEAK, MW multi-def


def strip(path: Path) -> int:
    e = ffclib.Elf(path)
    d = bytearray(e.data)
    shoff, = struct.unpack_from("<I", d, 0x20)
    shentsize, = struct.unpack_from("<H", d, 0x2E)
    symtab = next((i for i, s in enumerate(e.sh) if s["type"] == 2), None)
    if symtab is None:
        return 0
    # sections whose symbols are referenced by a relocation in some other (non-debug) section
    used = set()
    for i, s in enumerate(e.sh):
        if s["type"] in (4, 9) and not e.sh[s["info"]]["name"].startswith(".debug"):
            for _, _, sym, _ in e.relocs(s["info"]):
                if sym["shndx"] != s["info"]:
                    used.add(sym["shndx"])
    n = 0
    for i, s in enumerate(e.sh):
        if s["type"] != 1 or not s["name"].startswith(".text") or not s["size"] or i in used:
            continue
        funcs = [y for y in e.syms if y["shndx"] == i and y["type"] == 2 and y["name"] != "$t" and y["name"] != "$a"]
        if not funcs or any(y["bind"] not in WEAK_BINDS for y in funcs):
            continue
        struct.pack_into("<I", d, shoff + i * shentsize + 0x14, 0)  # sh_size
        for j, r in enumerate(e.sh):
            if r["type"] in (4, 9) and r["info"] == i:
                struct.pack_into("<I", d, shoff + j * shentsize + 0x14, 0)
        st = e.sh[symtab]
        for k in range(st["size"] // 16):
            o = st["off"] + k * 16
            if struct.unpack_from("<H", d, o + 14)[0] == i:
                struct.pack_into("<I", d, o + 8, 0)  # st_size
        n += 1
    if n:
        path.write_bytes(bytes(d))
    return n


if __name__ == "__main__":
    for p in sys.argv[1:]:
        strip(Path(p))
