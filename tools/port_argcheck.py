#!/usr/bin/env python3
"""Port: find calls that only work through ARM register passthrough.

A matched TU may declare a callee with fewer parameters than the callee's definition uses (`func_X(object)` while
func_X reads r1/r2 the caller never set: on the ARM they still hold the caller's own arguments). On the host those
arguments are garbage. Lists every (caller TU, callee) where a declaration has fewer parameters than the defining
TU's (non-`void`) parameter list, or is `()`-less K&R style is skipped.

usage: port_argcheck.py [--out work/port_argcheck.txt]
"""
import argparse
import re
import sys
from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
FN = r"((?:func|__sinit)_\w+)"
DECL_RE = re.compile(r"^[^\n;{}()#=]*?\b" + FN + r"\s*\(([^;{}()]*(?:\([^()]*\)[^;{}()]*)*)\)\s*;", re.M)
DEF_RE = re.compile(r"^[A-Za-z_][^;\n{}()=]*?\b" + FN + r"\s*\(([^;{}()]*(?:\([^()]*\)[^;{}()]*)*)\)\s*\{", re.M)


def nparams(p: str):
    p = re.sub(r"/\*.*?\*/", "", p).strip()
    if p in ("", "void"):
        return 0
    if "..." in p:
        return None
    depth, n = 0, 1
    for ch in p:
        depth += ch == "("
        depth -= ch == ")"
        n += ch == "," and depth == 0
    return n


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", type=Path, default=ROOT / "work" / "port_argcheck.txt")
    a = ap.parse_args()
    defs, decls = {}, defaultdict(list)
    for c in sorted((ROOT / "src").rglob("*.c")):
        t = c.read_text(errors="replace")
        rel = str(c.relative_to(ROOT))
        for m in DEF_RE.finditer(t):
            defs[m[1]] = (rel, nparams(m[2]))
        body = DECL_RE.sub("", t)
        for m in DECL_RE.finditer(t):
            if not m[0].lstrip().startswith(("return", "if", "else")) and re.search(r"\b" + m[1] + r"\s*\(", body):
                decls[m[1]].append((rel, nparams(m[2]), m[2].strip()))
    out = []
    for f, ds in sorted(decls.items()):
        if f not in defs or defs[f][1] is None:
            continue
        dn = defs[f][1]
        for rel, n, txt in ds:
            if n is not None and n < dn and txt != "":
                out.append(f"{rel}\t{f}\tdecl {n} < def {dn} ({defs[f][0]})")
    a.out.parent.mkdir(exist_ok=True)
    a.out.write_text("".join(l + "\n" for l in out))
    callers = {l.split("\t")[0] for l in out}
    print(f"{len(out)} short declarations in {len(callers)} TUs -> {a.out}", file=sys.stderr)


if __name__ == "__main__":
    main()
