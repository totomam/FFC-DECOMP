#!/usr/bin/env python3
"""tools/merge_queue.py <ref>:<group> [...] [--dry]
Merge child-session branches (one module group each, see ffclib.GROUPS) into the current branch.
Per ref: refuse if it changed src/ or config/ outside its group, or tools/ / docs/; `git merge --no-commit`
(delinks.txt merges with the union driver, .gitattributes; duplicate TU blocks are then dropped);
queue.csv merged per row, 3-way against the merge base (a row changed on both sides: the ref wins inside its
group, HEAD outside); commit.
Prints the queue status totals; the row count must stay 19,410. After all merges: ninja (22/22), clone pass."""
import csv
import io
import re
import subprocess
import sys
from collections import Counter
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

ROOT = ffclib.ROOT
ROWS = 19410


def git(*a, check=True):
    p = subprocess.run(["git", *a], cwd=ROOT, capture_output=True, text=True)
    if check and p.returncode:
        sys.exit(f"git {' '.join(a)}: {p.stderr.strip()}")
    return p.stdout


def rows_at(ref):
    return list(csv.DictReader(io.StringIO(git("show", f"{ref}:queue.csv"))))


def module_of(path):
    m = re.match(r"src/(\w+)/|config/usa/arm9/(?:overlays/)?(ov\d{3}|itcm|dtcm)/", path)
    if m:
        return m[1] or m[2]
    return "main" if path.startswith("config/usa/arm9/") else None


def out_of_scope(ref, group):
    base = git("merge-base", "HEAD", ref).strip()
    bad = []
    for path in git("diff", "--name-only", base, ref).split():
        if path.startswith(("tools/", "docs/", ".claude/")):
            if git("diff", "--name-only", "HEAD", ref, "--", path).strip():  # same as ours (a synced tool) is fine
                bad.append(path)
        elif path.startswith(("src/", "config/")):
            mod = module_of(path)
            if mod is None or mod not in ffclib.GROUPS[group]:
                bad.append(path)
    return bad


def merged_rows(base, ours, theirs, group):
    if not [r["func"] for r in base] == [r["func"] for r in ours] == [r["func"] for r in theirs]:
        sys.exit("queue.csv row sets/order differ; refusing")
    out = []
    for b, o, t in zip(base, ours, theirs):
        if o == b or (t != b and o["tu"] in ffclib.GROUPS[group]):
            out.append(t)
        else:
            out.append(o)
    return out


def dedupe_delinks():
    """Union merges can duplicate a TU block (both sides integrated the same clone): keep the first."""
    for _, d in ffclib.module_dirs():
        p = d / "delinks.txt"
        if not p.exists():
            continue
        head, *blocks = re.split(r"\n(?=src/)", p.read_text().rstrip("\n"))
        seen, keep = set(), []
        for blk in blocks:
            name = blk.split(":", 1)[0]
            if name not in seen:
                seen.add(name)
                keep.append(blk.rstrip("\n"))
        new = "\n\n".join([head.rstrip("\n"), *keep]) + "\n"
        if new != p.read_text():
            p.write_text(new)
            git("add", str(p.relative_to(ROOT)))


def write(rows):
    with (ROOT / "queue.csv").open("w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=list(rows[0]))
        w.writeheader()
        w.writerows(rows)


def main():
    args = [a for a in sys.argv[1:] if not a.startswith("--")]
    dry = "--dry" in sys.argv
    if not args:
        sys.exit(__doc__)
    for spec in args:
        ref, _, group = spec.rpartition(":")
        if group not in ffclib.GROUPS:
            sys.exit(f"{spec}: group must be one of {list(ffclib.GROUPS)}")
        bad = out_of_scope(ref, group)
        if bad:
            sys.exit(f"{ref}: changes outside group {group}: {bad[:10]}")
        rows = merged_rows(rows_at(git("merge-base", "HEAD", ref).strip()), rows_at("HEAD"), rows_at(ref), group)
        if len(rows) != ROWS:
            sys.exit(f"{ref}: {len(rows)} rows != {ROWS}")
        print(f"{ref} ({group}): {dict(Counter(r['status'] for r in rows).most_common())}")
        if dry:
            continue
        m = subprocess.run(["git", "merge", "--no-commit", "--no-ff", ref], cwd=ROOT, capture_output=True, text=True)
        conflicts = set(git("diff", "--name-only", "--diff-filter=U").split())
        if conflicts - {"queue.csv"}:
            git("merge", "--abort", check=False)
            sys.exit(f"{ref}: unexpected conflicts {sorted(conflicts)}: {m.stdout[-300:]}")
        write(rows)
        git("add", "queue.csv")
        dedupe_delinks()
        git("commit", "-q", "-m", f"Merge {ref} ({group}); queue row-keyed by module group\n\n"
            "Co-Authored-By: Claude Opus 5.5 <noreply@anthropic.com>\n"
            "Claude-Session: https://claude.ai/code/session_01369oz2VXkq14Gku21PdNnK")
        print(f"merged -> {git('rev-parse', '--short', 'HEAD').strip()}")


if __name__ == "__main__":
    main()
