#!/usr/bin/env python3
"""tools/progress_csv.py [out] -> CSV (datetime,commit,done,fail,todo,total,pct) from queue.csv git history (one row per commit)."""
import subprocess, sys
from collections import Counter
out = sys.argv[1] if len(sys.argv) > 1 else "work/ffc_progress.csv"
log = subprocess.run(["git", "log", "--reverse", "--format=%H %cI", "--", "queue.csv"], capture_output=True, text=True).stdout.split("\n")
rows = {}
for line in filter(None, log):
    h, d = line.split()
    txt = subprocess.run(["git", "show", f"{h}:queue.csv"], capture_output=True, text=True).stdout
    c = Counter(l.split(",")[4] for l in txt.splitlines()[1:] if l.count(",") >= 4)
    tot = sum(c.values())
    fail = sum(v for k, v in c.items() if k.startswith("fail"))
    rows[d] = (h[:10], c["done"], fail, c["todo"], tot, round(100 * c["done"] / tot, 2) if tot else 0)
with open(out, "w") as f:
    f.write("datetime,commit,done,fail,todo,total,pct\n")
    for d, r in rows.items():
        f.write(",".join(map(str, (d,) + r)) + "\n")
print(f"{len(rows)} rows -> {out}")
