#!/usr/bin/env python3
"""tools/clone.py — match functions by cloning an already-matched sibling of the same asm shape.

Shape = target asm with every immediate, literal-pool value and symbol operand replaced by `@`.
For a todo function whose shape equals a done function's (donor), the donor's C is rewritten by
mapping donor atoms -> target atoms (symbol renames + integer literal substitution), checked with
the same compare as tools/try, then integrated in one batch.

  tools/clone.py stats              shape groups among todo functions
  tools/clone.py run [--dry]        clone all todo functions that have a donor; integrate; update queue
  tools/clone.py reps               (library) used by mkwave --dedup: one representative per todo shape
"""
import csv
import json
import re
import subprocess
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

ROOT = ffclib.ROOT
QUEUE = ROOT / "queue.csv"
CACHE = ROOT / "work" / "shapes.json"
ATOM_RE = re.compile(r"(=\S+|\.word \S+|#-?(?:0x[0-9a-f]+|\d+)|\b(?:bl|blx|b) (?!L[0-9a-f]{4}\b)\S+|; \S+$)")


def split(lines):
    """-> (shape string, [atoms])"""
    atoms, shape = [], []
    for ln in lines:
        body = ln.split(": ", 1)[1]
        found = []

        def sub(m):
            t = m[0]
            for pre in ("=", ".word ", "#", "bl ", "blx ", "b ", "; "):
                if t.startswith(pre):
                    found.append(t[len(pre):])
                    return pre + "@"
            return t
        shape.append(ATOM_RE.sub(sub, body))
        atoms += found
    return "\n".join(shape), atoms


def shapes():
    if CACHE.exists():
        return json.loads(CACHE.read_text())
    out = {}
    for name, s in ffclib.symbols().items():
        if s.kind != "function" or not s.size:
            continue
        try:
            sh, atoms = split(ffclib.func_asm(s))
        except Exception:  # noqa: BLE001
            continue
        out[name] = [sh, atoms]
    CACHE.parent.mkdir(exist_ok=True)
    CACHE.write_text(json.dumps(out))
    return out


def as_int(t):
    try:
        return int(t, 0)
    except ValueError:
        return None


INT_RE = re.compile(r"\b(0[xX][0-9a-fA-F]+|\d+)([uUlL]*)\b")


def rewrite(src, donor, target, da, ta):
    """Rewrite donor C into target C. Returns None if the atom mapping is inconsistent."""
    names, nums = {donor: target}, {}
    for a, b in zip(da, ta):
        ia, ib = as_int(a), as_int(b)
        if ia is not None and ib is not None:
            if nums.setdefault(ia, ib) != ib:
                return None
        elif ia is None and ib is None:
            if names.setdefault(a, b) != b:
                return None
        elif a != b:
            return None
    nums = {k: v for k, v in nums.items() if k != v}
    names = {k: v for k, v in names.items() if k != v}
    # also map negatives / small immediates through as-is; ambiguous small numbers are caught by verify
    if names:
        src = re.sub(r"\b(" + "|".join(map(re.escape, names)) + r")\b", lambda m: names[m[1]], src)

    def num(m):
        v = int(m[1], 0) if not (len(m[1]) > 1 and m[1][0] == "0" and m[1][1] not in "xX") else int(m[1], 8)
        if v not in nums:
            return m[0]
        n = nums[v]
        if n < 0:
            return m[0]
        return (f"{n:#x}" if m[1].lower().startswith("0x") else str(n)) + m[2]
    if nums:
        # don't touch numbers inside identifiers (func_0200..), handled by \b + names first
        out, last = [], 0
        for m in re.finditer(r"[A-Za-z_]\w*|" + INT_RE.pattern, src):
            out.append(src[last:m.start()])
            out.append(m[0] if m[0][0].isalpha() or m[0][0] == "_" else num(re.match(INT_RE.pattern, m[0])))
            last = m.end()
        out.append(src[last:])
        src = "".join(out)
    return src


def verify(func, path):
    p = subprocess.run([str(ROOT / "tools/try"), func, str(path)], capture_output=True, text=True)
    return p.returncode == 0


def donor_src(func, note):
    sym = ffclib.symbols()[func]
    p = ROOT / "src" / sym.module / f"{func}.c"
    if p.exists():
        return p
    m = re.search(r"file (pending/\S+\.c)", note or "")
    return ROOT / m[1] if m and (ROOT / m[1]).exists() else None


def run(dry):
    sh = shapes()
    rows = list(csv.DictReader(QUEUE.open()))
    donors = defaultdict(list)
    for r in rows:
        if r["status"] in ("done", "skip_integrate") and r["func"] in sh:
            d = donor_src(r["func"], r["note"])
            if d:
                donors[sh[r["func"]][0]].append((r["func"], d))
    made, pairs = {}, []
    for r in rows:
        f = r["func"]
        if r["status"] not in ("todo", "fail_haiku", "fail_sonnet") or f not in sh or "unaligned" in r["note"]:
            continue
        for d, dpath in donors.get(sh[f][0], []):
            new = rewrite(dpath.read_text(), d, f, sh[d][1], sh[f][1])
            if new is None:
                continue
            out = ROOT / "work" / f / "clone.c"
            out.parent.mkdir(parents=True, exist_ok=True)
            out.write_text(new)
            if verify(f, out):
                made[f] = d
                pairs.append((f, out))
                break
    print(f"cloned {len(made)} functions")
    if dry or not pairs:
        return
    p = subprocess.run([str(ROOT / "tools/integrate"), *[str(x) for fp in pairs for x in fp]],
                       cwd=ROOT, capture_output=True, text=True)
    ok = set(re.findall(r"^OK (\w+)", p.stdout, re.M))
    print(p.stdout.strip().splitlines()[-1] if p.stdout.strip() else p.stderr[-500:])
    for r in rows:
        if r["func"] in ok:
            r["status"], r["best_pct"], r["note"] = "done", "100", f"cloned from {made[r['func']]}"
    with QUEUE.open("w", newline="") as fh:
        w = csv.DictWriter(fh, fieldnames=list(rows[0]))
        w.writeheader()
        w.writerows(rows)


def stats():
    sh = shapes()
    rows = list(csv.DictReader(QUEUE.open()))
    g = defaultdict(list)
    for r in rows:
        if r["status"] == "todo" and r["func"] in sh:
            g[sh[r["func"]][0]].append(r["func"])
    sizes = sorted((len(v) for v in g.values()), reverse=True)
    print(f"todo {sum(sizes)} in {len(sizes)} shapes; groups>1: {sum(1 for s in sizes if s > 1)} "
          f"covering {sum(s for s in sizes if s > 1)}; top: {sizes[:15]}")


if __name__ == "__main__":
    cmd = sys.argv[1] if len(sys.argv) > 1 else "stats"
    if cmd == "run":
        run("--dry" in sys.argv)
    else:
        stats()
