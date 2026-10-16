#!/usr/bin/env python3
"""SDK side-map coverage per address range. usage: sdk_cov.py [map] (default docs/sdk_map.txt)"""
import sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

RANGES = [("main SDK", 0x02077000, 0x02090000), ("main MSL/rt", 0x02090000, 0x0209d2b4)]


def main():
    mp = Path(sys.argv[1] if len(sys.argv) > 1 else ffclib.ROOT / "docs" / "sdk_map.txt")
    tag = {l.split()[0]: l.split()[5].rstrip("0123456789") for l in mp.read_text().splitlines() if l.strip()}
    fs = [s for s in ffclib.symbols().values() if s.kind == "function" and s.module == "main"]
    for name, lo, hi in RANGES:
        r = [s for s in fs if lo <= s.addr < hi]
        c = {k: sum(1 for s in r if tag.get(s.name) == k) for k in ("unique", "layout", "fuzzy", "trivial", "ambiguous")}
        print(f"{name} {lo:#x}-{hi:#x}: {len(r)} funcs, unique {c['unique']} ({100 * c['unique'] / max(1, len(r)):.0f}%), "
              f"layout {c["layout"]}, fuzzy {c["fuzzy"]}, trivial {c["trivial"]}, ambiguous {c['ambiguous']}, none {len(r) - sum(c.values())}")


if __name__ == "__main__":
    main()
