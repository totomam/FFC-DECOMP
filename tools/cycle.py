#!/usr/bin/env python3
"""tools/cycle.py <N> <wave N task .output> ... [--next 240] [--next-n M] [--tier haiku] [--bg] [--no-push]
One matching cycle, ~3 lines of output:
  1. mkwave for wave N+1 (unless --next 0): <count> dedup names -> work/wave<N+1>_<i>.json, 60 per Workflow
  2. wave N results + clone pass (wave matches serve as donors) -> ONE tools/integrate (one link)
  3. queue update under the lock, commit, push
--bg runs steps 2-3 detached (log: work/cycle_<N>.log) so wave N+1 can match meanwhile;
wait with `pgrep -f "^python3 tools/cycle"`."""
import argparse
import json
import re
import subprocess
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import clone  # noqa: E402
import ffclib  # noqa: E402
import wave_done  # noqa: E402

ROOT = ffclib.ROOT
PER_WORKFLOW = 60


def mkwave(n, count, tier):
    out = subprocess.run([sys.executable, str(ROOT / "tools/mkwave.py"), tier, str(count), "--dedup", "--names"],
                         cwd=ROOT, capture_output=True, text=True, check=True).stdout
    names = json.loads(out)
    (ROOT / "work" / f"wave{n}.json").write_text(json.dumps(names))
    files = []
    for i in range(0, len(names), PER_WORKFLOW):
        p = ROOT / "work" / f"wave{n}_{i // PER_WORKFLOW}.json"
        p.write_text(json.dumps(names[i:i + PER_WORKFLOW]))
        files.append(str(p.relative_to(ROOT)))
    print(f"wave {n}: {len(names)} {tier} names -> {' '.join(files)}")


def git(*a):
    return subprocess.run(["git", *a], cwd=ROOT, capture_output=True, text=True)


def push():
    br = git("rev-parse", "--abbrev-ref", "HEAD").stdout.strip()
    for delay in (0, 2, 4, 8, 16):
        time.sleep(delay)
        if git("push", "-q", "-u", "origin", br).returncode == 0:
            return "pushed"
    return "PUSH FAILED"


def integrate_and_commit(n, outputs, do_push):
    res = [r for o in outputs for r in wave_done.load(o)]
    matched = wave_done.accept(res)
    made, cpairs = clone.find(extra=matched)
    pairs = [*matched.items(), *[(f, str(p)) for f, p in cpairs]]
    status = {}
    if pairs:
        p = subprocess.run([str(ROOT / "tools/integrate"), *[str(x) for fp in pairs for x in fp]],
                           cwd=ROOT, capture_output=True, text=True)
        status = wave_done.integrate_status(p.stdout)
        if not re.search(r"^integrated ", p.stdout, re.M):
            print("integrate failed:", (p.stdout + p.stderr).strip().splitlines()[-1:])
    ok = {f for f, (st, _) in status.items() if st == "OK"}
    with ffclib.queue_update() as rows:
        tally = wave_done.update(rows, res, matched, status, False)
        clone.record(rows, ok, made)
    tiers = {t: sum(r.get("tier") == t for r in res) for t in ("haiku", "sonnet", "fail")}
    nclone = len(ok & set(made))
    msg = (f"Wave {n}: {tally.get('done', 0)}/{len(res)} ({tiers['haiku']} Haiku, {tiers['sonnet']} Sonnet); "
           f"clone +{nclone}")
    print(f"{msg}; integrated {len(ok)}/{len(pairs)}; queue {tally}")
    git("add", "src", "config", "queue.csv", *(["pending"] if (ROOT / "pending").exists() else []))
    c = git("commit", "-q", "-m", msg + "\n\nCo-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>\n"
            "Claude-Session: https://claude.ai/code/session_01MxzUxpKioECXbCip1EC4vm")
    head = git("rev-parse", "--short", "HEAD").stdout.strip()
    print(f"commit {head}" + ("" if c.returncode == 0 else " (nothing committed)")
          + (f", {push()}" if do_push and c.returncode == 0 else ""))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("n", type=int)
    ap.add_argument("outputs", nargs="*")
    ap.add_argument("--next", type=int, default=240)
    ap.add_argument("--next-n", type=int, help="number of the next wave (default N+1)")
    ap.add_argument("--tier", default="haiku")
    ap.add_argument("--bg", action="store_true")
    ap.add_argument("--no-push", action="store_true")
    ap.add_argument("--integrate-only", action="store_true", help=argparse.SUPPRESS)
    a = ap.parse_args()
    if not a.integrate_only:
        if a.next:
            mkwave(a.next_n or a.n + 1, a.next, a.tier)
        if a.bg:
            log = ROOT / "work" / f"cycle_{a.n}.log"
            argv = ["python3", "tools/cycle.py", str(a.n), *a.outputs, "--integrate-only",
                    *(["--no-push"] if a.no_push else [])]
            subprocess.Popen(argv, cwd=ROOT, stdout=log.open("w"), stderr=subprocess.STDOUT,
                             start_new_session=True)
            print(f"wave {a.n}: integrating in background -> {log.relative_to(ROOT)}")
            return
    integrate_and_commit(a.n, a.outputs, not a.no_push)


if __name__ == "__main__":
    main()
