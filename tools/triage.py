#!/usr/bin/env python3
"""Scripted difficulty triage of every function -> queue.csv (preserves status/attempts/best_pct/note)."""
import csv
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

FIELDS = ["func", "tu", "size", "difficulty", "status", "tier", "attempts", "best_pct", "note"]
QUEUE = ffclib.ROOT / "queue.csv"


def stats(sym):
    b = ffclib.target_bytes(sym)
    mode = sym.mode or "thumb"
    lines = ffclib.disasm(b, sym.addr, mode)
    ins = [t for _, _, t in lines if not t.startswith(".")]
    calls = sum(1 for t in ins if t.split()[0] in ("bl", "blx"))
    branches = sum(1 for t in ins if t.startswith("b") and t.split()[0] not in ("bl", "blx", "bic", "bics"))
    loops = 0
    for off, _, t in lines:
        m = re.match(r"b\w* L([0-9a-f]{4})$", t)
        if m and int(m[1], 16) <= off:
            loops += 1
    jt = any(re.match(r"(add|mov)s? pc|ldr pc|lsls?.*\n", t) for t in ins)
    return len(ins), calls, branches, loops, jt


def main():
    old = {}
    if QUEUE.exists():
        old = {r["func"]: r for r in csv.DictReader(QUEUE.open())}
    v54 = {}
    res = ffclib.ROOT / "work" / "v54" / "results.csv"
    if res.exists():
        v54 = {r["func"]: r for r in csv.DictReader(res.open())}
    rows = []
    for s in sorted(ffclib.symbols().values(), key=lambda s: (s.module != "main", s.module, s.addr)):
        if s.kind != "function" or not s.size:
            continue
        n, calls, br, loops, jt = stats(s)
        diff = n + 3 * calls + 2 * br + 10 * loops + (40 if jt else 0)
        tier = "haiku" if n <= 40 and not jt else "sonnet" if n <= 250 else "opus"
        done = (ffclib.ROOT / "src" / s.module / f"{s.name}.c").exists()
        notes = []
        if s.addr % 4:
            notes.append("unaligned")
        if jt:
            notes.append("jumptable")
        if s.name in v54 and not done:
            notes.append(f"v54 {v54[s.name]['pct']}% work/v54/{s.name}.c")
        r = dict(func=s.name, tu=s.module, size=f"{s.size:#x}", difficulty=diff,
                 status="done" if done else "todo", tier=tier, attempts=0, best_pct="", note=" ".join(notes))
        if s.name in old and not done:
            o = old[s.name]
            r.update(status=o["status"] if o["status"] != "done" else "todo", attempts=o["attempts"],
                     best_pct=o["best_pct"], note=o["note"] or r["note"])
            if o["tier"] != r["tier"] and o["status"].startswith("fail"):
                r["tier"] = o["tier"]
        rows.append(r)
    with QUEUE.open("w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=FIELDS)
        w.writeheader()
        w.writerows(rows)
    from collections import Counter
    print(len(rows), Counter(r["tier"] for r in rows if r["status"] != "done"),
          Counter(r["status"] for r in rows))


if __name__ == "__main__":
    main()
