#!/usr/bin/env python3
"""Port: pad short callee declarations/calls so ARM register passthrough works on the host.

port_argcheck.py lists callers that declare a callee with fewer parameters than its definition has. On ARM the missing
arguments are still in r1-r3 (the caller's own arguments). pad_text() rewrites a TU's text so that
  1. the short declaration gets the definition's full parameter list (extra params are `void *` or `int`), and
  2. every call with k < m arguments is padded: argument i (i < 4) is the enclosing function's own parameter i when it
     has one (cast to the declared type; 0 for struct-by-value / unnamed), else 0; i >= 4 is 0.

usage: port_argpad.py --report [--out work/port_argpad.txt]
"""
import argparse
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from port_argcheck import DECL_RE, DEF_RE, nparams  # noqa: E402

ROOT = Path(__file__).resolve().parent.parent
BASIC = {"u8", "s8", "u16", "s16", "u32", "s32", "int", "char", "short", "long", "unsigned", "signed", "bool",
         "int8_t", "uint8_t", "int16_t", "uint16_t", "int32_t", "uint32_t", "BOOL", "size_t", "intptr_t", "uintptr_t",
         "const", "volatile", "register", "float", "double", "void"}
STATS = {"real": 0, "zero": 0, "decls": 0, "calls": 0}
_INDEX = None


def _strip(p: str) -> str:
    return re.sub(r"/\*.*?\*/", "", p, flags=re.S).strip()


def split_args(s: str):
    """Top-level comma split of an argument/parameter list."""
    s = _strip(s)
    if s == "":
        return []
    out, depth, cur = [], 0, []
    for ch in s:
        if ch in "([{":
            depth += 1
        elif ch in ")]}":
            depth -= 1
        if ch == "," and depth == 0:
            out.append("".join(cur))
            cur = []
        else:
            cur.append(ch)
    out.append("".join(cur))
    return [a.strip() for a in out]


def param_info(p: str):
    """(name or None, kind) with kind 'ptr' | 'int' | 'other' (struct by value, function pointer, float...)."""
    if "(" in p or "..." in p:
        return None, "ptr" if "(*" in p else "other"
    m = re.search(r"([A-Za-z_]\w*)\s*(\[[^\]]*\])*\s*$", p)
    name = m[1] if m else None
    typ = p[:m.start()] if m else p
    if "[" in p or "*" in p:
        return name, "ptr"
    words = re.findall(r"[A-Za-z_]\w*", typ)
    if name and not words:  # unnamed param whose single word is the type
        name, words = None, [name]
    if words and all(w in BASIC for w in words) and not {"float", "double", "void"} & set(words):
        return name, "int"
    return name, "other"


def index():
    global _INDEX
    if _INDEX is None:
        defs = {}
        for c in sorted((ROOT / "src").rglob("*.c")):
            t = c.read_text(errors="replace")
            rel = str(c.relative_to(ROOT))
            for m in DEF_RE.finditer(t):
                defs[m[1]] = (rel, nparams(m[2]), split_args(m[2]))
        _INDEX = defs
    return _INDEX


def extra_params(defparams, k):
    return ["void * " if param_info(p)[1] == "ptr" else "int " for p in defparams[k:]]


def _close(text, i):
    """Index of the ')' matching the '(' at text[i]."""
    depth = 0
    for j in range(i, len(text)):
        c = text[j]
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
            if depth == 0:
                return j
    return -1


def pad_text(text: str, rel: str, handled=None) -> str:
    defs = index()
    edits = []  # (start, end, replacement)
    decl_spans = []
    short = {}  # callee -> (m, defparams)
    for m in DECL_RE.finditer(text):
        f = m[1]
        if f not in defs or defs[f][1] is None or defs[f][0] == rel:
            continue
        pre = re.findall(r"[A-Za-z_]\w*", m[0][:m.start(1) - m.start()])
        if not [w for w in pre if w not in ("return", "else", "if", "while")] or m[0].lstrip().startswith(("return", "if", "else")):
            continue  # a call statement, not a declaration
        decl_spans.append((m.start(), m.end()))
        dn, dp = defs[f][1], defs[f][2]
        ps = split_args(m[2])
        if not ps:
            continue  # `f()`: unspecified params, left alone (as port_argcheck)
        if ps == ["void"]:
            ps = []
        n = nparams(m[2])
        if n is None or n >= dn:
            continue
        if "-lang c++" in text[:200] and re.search(r"\b" + f + r"\b(?!\s*\()", DECL_RE.sub("", text)):
            continue  # C++: also used as a function pointer, a wider prototype breaks that conversion
        short[f] = (dn, dp)
        new = ", ".join(ps + extra_params(dp, len(ps))) if ps else ", ".join(extra_params(dp, 0))
        edits.append((m.start(2), m.end(2), new))
        STATS["decls"] += 1
        if handled is not None:
            handled.add((rel, f))
    if not short:
        return text
    funcs = [(m.start(), split_args(m[2])) for m in DEF_RE.finditer(text)]
    for f, (dn, dp) in short.items():
        for m in re.finditer(r"\b" + f + r"\s*\(", text):
            pos = m.start()
            if any(a <= pos < b for a, b in decl_spans):
                continue
            op = m.end() - 1
            cl = _close(text, op)
            if cl < 0:
                continue
            if re.match(r"\s*\{", text[cl + 1:cl + 40]):
                continue  # a definition
            args = split_args(text[op + 1:cl])
            k = len(args)
            if k >= dn:
                continue
            encl = [fp for fs, fp in funcs if fs < pos]
            eps = encl[-1] if encl else []
            if eps == ["void"]:
                eps = []
            add = []
            for i in range(k, dn):
                a = "0"
                if i < 4 and i < len(eps):
                    name, kind = param_info(eps[i])
                    if name and kind in ("ptr", "int"):
                        want = param_info(dp[i])[1]
                        a = f"({'void *' if want == 'ptr' else 'int'}){name}"
                        STATS["real"] += 1
                        add.append(a)
                        continue
                STATS["zero"] += 1
                add.append(a)
            STATS["calls"] += 1
            edits.append((cl, cl, (", " if k else "") + ", ".join(add)))
    for s, e, r in sorted(edits, key=lambda x: (x[0], x[1]), reverse=True):
        text = text[:s] + r + text[e:]
    return text


def report(out: Path):
    entries = []
    chk = ROOT / "work" / "port_argcheck.txt"
    if chk.exists():
        entries = [l.split("\t")[:2] for l in chk.read_text().splitlines() if l.strip()]
    handled, changed = set(), 0
    tus = {r for r, _ in entries}
    for rel in sorted(tus):
        t = (ROOT / rel).read_text(errors="replace")
        if pad_text(t, rel, handled) != t:
            changed += 1
    miss = [f"{r}\t{f}" for r, f in entries if (r, f) not in handled]
    out.parent.mkdir(exist_ok=True)
    out.write_text("".join(l + "\n" for l in miss))
    print(f"{len(entries)} argcheck entries in {len(tus)} TUs; {changed} TUs changed; {STATS['decls']} decls rewritten; "
          f"{STATS['calls']} calls padded ({STATS['real']} args from caller params, {STATS['zero']} args zero); "
          f"{len(miss)} entries unhandled -> {out}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--report", action="store_true")
    ap.add_argument("--out", type=Path, default=ROOT / "work" / "port_argpad.txt")
    ap.add_argument("--emit", type=Path, help="write padded copies of all argcheck TUs under this dir")
    a = ap.parse_args()
    if a.emit:
        for r in sorted({l.split("\t")[0] for l in (ROOT / "work" / "port_argcheck.txt").read_text().splitlines()}):
            t = (ROOT / r).read_text(errors="replace")
            n = pad_text(t, r)
            if n != t:
                (a.emit / r).parent.mkdir(parents=True, exist_ok=True)
                (a.emit / r).write_text(n)
    if a.report or not a.emit:
        report(a.out)


if __name__ == "__main__":
    main()
