#!/usr/bin/env python3
"""tools/wave_done.py [--dry] <result.json | workflow task .output> ... — consume one or more match_wave.js
results: integrate all matched functions in one tools/integrate run, then update queue.csv
(status done / fail_haiku / fail_sonnet / skip_integrate -> source kept in pending/, attempts, best_pct, note). Prints a summary.
--dry: no integrate (every accepted match counts as OK), no pending/ copies; prints the queue diff instead of writing."""
import csv
import json
import re
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

ROOT = ffclib.ROOT


STUB_RE = re.compile(r"(svc #\w+|bx lr|movs r\d, #\w+|adds r\d, r\d, #0)$")


def swi_stub(func):
    """BIOS call stubs (svc + register shuffles) are the only functions allowed to match via asm."""
    sym = ffclib.symbols().get(func)
    lines = [ln.split(": ", 1)[1] for ln in ffclib.func_asm(sym)] if sym else []
    return any(ln.startswith("svc") for ln in lines) and all(STUB_RE.match(ln) for ln in lines)


def load(path):
    data = json.load(open(path))
    return [r for r in (data["result"] if isinstance(data, dict) else data) if r]


def main():
    dry = "--dry" in sys.argv
    res = [r for a in sys.argv[1:] if a != "--dry" for r in load(a)]
    matched = {}
    for r in res:
        best = r.get("sonnet") or r.get("haiku")
        if r.get("tier") in ("haiku", "sonnet") and best:
            if re.search(r"\basm\b|__asm", (ROOT / best["file"]).read_text()) and not swi_stub(r["func"]):
                r["tier"] = "fail"  # inline asm is not a decompilation
                best["note"] = "asm-only match rejected; " + best["note"]
                continue
            matched[r["func"]] = best["file"]
    status = {}
    if dry:
        status = {f: ("OK", "") for f in matched}
    elif matched:
        argv = [x for f, p in matched.items() for x in (f, p)]
        p = subprocess.run([str(ROOT / "tools/integrate"), *argv], cwd=ROOT, capture_output=True, text=True)
        print(p.stdout.strip().splitlines()[-1] if p.stdout.strip() else p.stderr)
        for line in p.stdout.splitlines():
            m = re.match(r"(OK|SKIP|REVERT) (\w+)(?:: (.*))?", line)
            if m:
                status[m[2]] = (m[1], m[3] or "")
    with ffclib.queue_update() as rows:
        before = {r["func"]: dict(r) for r in rows}
        tally = update(rows, res, matched, status, dry)
        if dry:
            w = csv.writer(sys.stdout, lineterminator="\n")
            for r in rows:
                if r != before[r["func"]]:
                    sys.stdout.write("- "), w.writerow(before[r["func"]].values())
                    sys.stdout.write("+ "), w.writerow(r.values())
            rows.clear()  # queue_update writes nothing for an empty list
    print("tiers:", {t: sum(r.get("tier") == t for r in res) for t in ("haiku", "sonnet", "fail")}, "queue:", tally)


def update(rows, res, matched, status, dry):
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
            if st == "SKIP" and why == "already integrated":  # e.g. a clone pass got there first
                st = "OK"
            q["status"] = "done" if st == "OK" else "skip_integrate"
            keep = ""
            if st != "OK" and not dry:  # work/ is gitignored: keep the matching source in pending/
                (ROOT / "pending").mkdir(exist_ok=True)
                keep = f"pending/{r['func']}.c"
                (ROOT / keep).write_bytes((ROOT / matched[r["func"]]).read_bytes())
            q["note"] = f"matched by {r['tier']}" + ("" if st == "OK" else f"; integrate: {why}; file {keep}")
        else:
            q["status"] = "fail_sonnet" if s else "fail_haiku"
            q["note"] = ((best or {}).get("note") or "")[:150]
        tally[q["status"]] = tally.get(q["status"], 0) + 1
    return tally


if __name__ == "__main__":
    main()
