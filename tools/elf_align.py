#!/usr/bin/env python3
"""tools/elf_align.py <align> <obj.o>... — set sh_addralign of the objects' .text sections.

mwcc/dsd align .text to 4, so a TU starting on a 2-byte boundary (thumb) would be placed 2 bytes
late. configure runs this (align 2) for complete TUs that start unaligned and for every dsd gap
object; the lcf keeps ALIGNALL(4) except around unaligned objects (tools/lcf_post.py)."""
import struct
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

align = int(sys.argv[1])
for p in sys.argv[2:]:
    path = Path(p)
    e = ffclib.Elf(path)
    d = bytearray(e.data)
    shoff, = struct.unpack_from("<I", d, 0x20)
    shentsize, = struct.unpack_from("<H", d, 0x2E)
    changed = False
    for i, s in enumerate(e.sh):
        off = shoff + i * shentsize + 0x20
        if s["name"].startswith(".text") and struct.unpack_from("<I", d, off)[0] == 4:
            struct.pack_into("<I", d, off, align)
            changed = True
    if changed:
        path.write_bytes(bytes(d))
