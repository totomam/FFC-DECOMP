#!/usr/bin/env python3
"""tools/wave_done.py <result.json> — consume a match_wave.js result:
integrate matched functions (tools/integrate), then update queue.csv
(status done / fail_haiku / fail_sonnet / skip_integrate -> source kept in pending/, attempts, best_pct, note). Prints a summary."""
import csv
import json
import re
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

ROOT = ffclib.ROOT
QUEUE = ROOT / "queue.csv"


def main():
    res = [r for r in json.load(open(sys.argv[1])) if r]
    matched = {}
    for r in res:
        best = r.get("sonnet") or r.get("haiku")
        if r.get("tier") in ("haiku", "sonnet") and best:
            matched[r["func"]] = best["file"]
    status = {}
    if matched:
        argv = [x for f, p in matched.items() for x in (f, p)]
        p = subprocess.run([str(ROOT / "tools/integrate"), *argv], cwd=ROOT, capture_output=True, text=True)
        print(p.stdout.strip().splitlines()[-1] if p.stdout.strip() else p.stderr)
        for line in p.stdout.splitlines():
            m = re.match(r"(OK|SKIP|REVERT) (\w+)(?:: (.*))?", line)
            if m:
                status[m[2]] = (m[1], m[3] or "")
    rows = list(csv.DictReader(QUEUE.open()))
    by = {r["func"]: r for r in rows}
    tally = {}
    for r in res:
        q = by.get(r["func"])
        if q is None:
            continue
        h, s = r.get("haiku"), r.get("sonnet")
        q["attempts"] = str(int(q["attempts"] or 0) + 1 + (s is not None))
        best = s or h
        q["best_pct"] = str(best["best_pct"]) if best else q["best_pct"]
        if r["func"] in matched:
            st, why = status.get(r["func"], ("SKIP", "no integrate result"))
            q["status"] = "done" if st == "OK" else "skip_integrate"
            keep = ""
            if st != "OK":  # work/ is gitignored: keep the matching source in pending/
                (ROOT / "pending").mkdir(exist_ok=True)
                keep = f"pending/{r['func']}.c"
                (ROOT / keep).write_bytes((ROOT / matched[r["func"]]).read_bytes())
            q["note"] = f"matched by {r['tier']}" + ("" if st == "OK" else f"; integrate: {why}; file {keep}")
        else:
            q["status"] = "fail_sonnet" if s else "fail_haiku"
            q["note"] = ((best or {}).get("note") or "")[:150]
        tally[q["status"]] = tally.get(q["status"], 0) + 1
    with QUEUE.open("w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=list(rows[0]))
        w.writeheader()
        w.writerows(rows)
    print("tiers:", {t: sum(r.get("tier") == t for r in res) for t in ("haiku", "sonnet", "fail")}, "queue:", tally)


if __name__ == "__main__":
    main()
