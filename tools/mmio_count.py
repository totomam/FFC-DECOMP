#!/usr/bin/env python3
"""Count literal-pool references to I/O space (0x04000000-0x04ffffff) per function.
usage: mmio_count.py [--sdk-map docs/sdk_map.txt] -> per-module totals, game vs SDK (if a map is given)."""
import argparse
import struct
import sys
from collections import Counter
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

ap = argparse.ArgumentParser()
ap.add_argument("--sdk-map", type=Path)
ap.add_argument("--list", type=Path, help="write per-function hits here")
a = ap.parse_args()
sdk = set()
if a.sdk_map and a.sdk_map.exists():
    sdk = {l.split()[0] for l in a.sdk_map.read_text().splitlines() if l.strip()}
words, funcs, regs = Counter(), Counter(), Counter()
lines = []
for s in ffclib.symbols().values():
    if s.kind != "function" or not s.size or s.module == "abs":
        continue
    b = ffclib.target_bytes(s)
    hits = []
    for off in ffclib.pool_offsets(b, s.addr, s.mode or "thumb"):
        v, = struct.unpack_from("<I", b, off)
        if 0x04000000 <= v < 0x05000000:
            hits.append(v)
    if hits:
        grp = "sdk" if s.name in sdk else "game"
        words[(s.module, grp)] += len(hits)
        funcs[(s.module, grp)] += 1
        for v in hits:
            regs[(grp, v & ~0xFF if v < 0x04100000 else v)] += 1
        lines.append(f"{s.name} {s.module} {grp} {' '.join(hex(v) for v in sorted(set(hits)))}")
for k in sorted(words):
    print(f"{k[0]:6} {k[1]:4} funcs={funcs[k]:4} pool_words={words[k]}")
for g in ("game", "sdk"):
    print(g, "total funcs", sum(v for k, v in funcs.items() if k[1] == g),
          "words", sum(v for k, v in words.items() if k[1] == g))
print("top game regs:", [(hex(r), n) for (g, r), n in regs.most_common() if g == "game"][:15])
if a.list:
    a.list.write_text("\n".join(lines) + "\n")
