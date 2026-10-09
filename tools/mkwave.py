#!/usr/bin/env python3
"""tools/mkwave.py <tier> <count> [--module M] [--min-diff N] -> prints JSON items for a Workflow wave.
Each item: {func, tier, prompt}. Picks todo functions by ascending difficulty and marks them `queued`."""
import argparse
import csv
import json
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

ROOT = ffclib.ROOT
QUEUE = ROOT / "queue.csv"
ap = argparse.ArgumentParser()
ap.add_argument("tier")
ap.add_argument("count", type=int)
ap.add_argument("--module")
ap.add_argument("--min-diff", type=int, default=0)
ap.add_argument("--status", default="todo")
ap.add_argument("--dry", action="store_true")
a = ap.parse_args()


def prototypes():
    out = {}
    for h in (ROOT / "include").rglob("*.h"):
        for line in h.read_text().splitlines():
            m = re.search(r"\b(func_\w+)\s*\(", line)
            if m and line.rstrip().endswith(";"):
                out.setdefault(m[1], line.strip().removeprefix("extern "))
    return out


PROTOS = prototypes()

TEMPLATE = """Match one C function to the target bytes (Fossil Fighters: Champions, mwccarm -O4,p, {mode}).

Target `{func}` ({size:#x} bytes, {mode}):
```
{asm}
```
Referenced symbols:
{refs}

Rules:
- Write your C to `work/{func}/a.c` (you may use b.c, c.c ...). Only touch `work/{func}/`.
- Check with: `tools/try {func} work/{func}/a.c` — prints MATCH or a diff (target vs yours).
- Hard cap: {cap} runs of tools/try. Stop at the first MATCH.
- File layout: `#include "ffc/types.h"` (uint8_t..uint32_t, int8_t..int32_t), then `extern` prototypes for every referenced symbol (guess types from usage), then the function `{func}` (non-static, exactly that name). Define nothing else non-static; no string literals or static data.
- Compiled as C99 Thumb by default{armnote}. Do not read other repo files, asm dumps, or headers.
- Tips: mwcc often reuses loads, prefers `if (x) return;` early exits; register/ordering diffs usually mean statement order or types (signed/unsigned, u8/u16) differ. Use struct pointer offsets via casts or a local struct typedef.
{extra}
Return: matched (bool), best_pct (number from tools/try, 100 if MATCH), file (path of best attempt), note (one line: what blocks a match, or empty)."""


def build(func, tier, extra=""):
    sym = ffclib.symbols()[func]
    asm = "\n".join(ffclib.func_asm(sym))
    refs = []
    for kind, name in ffclib.callees(sym):
        if name in [r.split(" ")[0] for r in refs]:
            continue
        s = ffclib.symbols().get(name)
        desc = PROTOS.get(name) or (f"{s.kind}" + (f" ({s.mode})" if s and s.mode else "") if s else "unknown")
        refs.append(f"{name} : {desc}")
    cap = 6 if tier == "haiku" else 15
    armnote = ". This function is ARM: put `/* cflags: -nothumb */` as the very first line" if sym.mode == "arm" else ""
    return TEMPLATE.format(func=func, size=sym.size, mode=sym.mode, asm=asm,
                           refs="\n".join(f"- {r}" for r in refs) or "- none", cap=cap,
                           armnote=armnote, extra=extra)


def main():
    rows = list(csv.DictReader(QUEUE.open()))
    pick = [r for r in rows if r["status"] == a.status and r["tier"] == a.tier
            and (not a.module or r["tu"] == a.module) and int(r["difficulty"]) >= a.min_diff
            and "unaligned" not in r["note"]]
    pick.sort(key=lambda r: int(r["difficulty"]))
    pick = pick[:a.count]
    items = []
    for r in pick:
        extra = ""
        m = re.search(r"(work/v54/\S+\.c)", r["note"])
        if m and (ROOT / m[1]).exists():
            extra = f"A previous behavioural (non-matching) attempt exists at {m[1]}; you may start from it.\n"
        items.append({"func": r["func"], "tier": a.tier, "prompt": build(r["func"], a.tier, extra)})
        r["status"] = "queued"
    if not a.dry:
        with QUEUE.open("w", newline="") as f:
            w = csv.DictWriter(f, fieldnames=list(rows[0]))
            w.writeheader()
            w.writerows(rows)
    json.dump(items, sys.stdout)


if __name__ == "__main__":
    main()
