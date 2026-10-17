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
import bisect
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from port_argcheck import DECL_RE, DEF_RE, nparams  # noqa: E402

ROOT = Path(__file__).resolve().parent.parent
BASIC = {"u8", "s8", "u16", "s16", "u32", "s32", "int", "char", "short", "long", "unsigned", "signed", "bool",
         "int8_t", "uint8_t", "int16_t", "uint16_t", "int32_t", "uint32_t", "BOOL", "size_t", "intptr_t", "uintptr_t",
         "const", "volatile", "register", "float", "double", "void"}
STATS = {"real": 0, "zero": 0, "decls": 0, "calls": 0, "defs": 0}


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


DECL2_RE = re.compile(DECL_RE.pattern.replace("^", "(?:^|(?<=;))", 1), re.M)  # also a 2nd/3rd declaration on one line
NOTDECL = ("return", "else", "if", "while", "case", "default", "do", "for", "goto", "switch")
NAME_RE = re.compile(r"\b((?:func|__sinit)_\w+)")
_A = None


def _nocomment(t: str) -> str:
    """Comments blanked (same length, newlines kept) so offsets stay valid."""
    return re.sub(r"/\*.*?\*/|//[^\n]*", lambda m: re.sub(r"[^\n]", " ", m[0]), t, flags=re.S)


def scan(text: str):
    """Structure of one TU: defs, decls, calls (with enclosing def) and by-value uses of func_X names."""
    t = _nocomment(text)
    s = {"cpp": "-lang c++" in text[:200], "defs": [], "decls": [], "calls": [], "values": set()}
    skip = set()
    for m in DEF_RE.finditer(t):
        pre = re.findall(r"[A-Za-z_]\w*", t[m.start():m.start(1)])
        ps = split_args(m[2])
        s["defs"].append(dict(name=m[1], pos=m.start(1), span=(m.start(2), m.end(2)), params=[] if ps == ["void"] else ps,
                              static="static" in pre, method=t[m.start(1) - 1] == ":", variadic=nparams(m[2]) is None))
        skip.add(m.start(1))
    for m in DECL2_RE.finditer(t):
        head = t[m.start():m.start(1)]
        pre = re.findall(r"[A-Za-z_]\w*", head)
        if not pre or set(pre) & set(NOTDECL) or not re.fullmatch(r'[\w\s*"]*', head):
            continue  # a call statement or label, not a declaration
        ps = split_args(m[2])
        s["decls"].append(dict(name=m[1], span=(m.start(2), m.end(2)), params=[] if ps == ["void"] else ps,
                               empty=not ps, variadic=nparams(m[2]) is None, method=t[m.start(1) - 1] == ":"))
        skip.add(m.start(1))
    starts = [d["pos"] for d in s["defs"]]
    for m in NAME_RE.finditer(t):
        pos = m.start(1)
        if pos in skip:
            continue
        mm = re.match(r"\s*\(", t[m.end():])
        if not mm:
            line = t[t.rfind("\n", 0, pos) + 1:pos]
            if "extern" not in line and not line.rstrip().endswith((".", "->")):
                s["values"].add(m[1])
            continue
        op = m.end() + mm.end() - 1
        cl = _close(t, op)
        if cl < 0 or re.match(r"\s*\{", t[cl + 1:cl + 40]):
            continue
        i = bisect.bisect_left(starts, pos) - 1
        s["calls"].append(dict(name=m[1], pos=pos, close=cl, k=len(split_args(t[op + 1:cl])),
                               encl=s["defs"][i] if i >= 0 else None))
    return s


def analysis():
    """Global effective register-param counts: E[f] (>= definition's count), and which extra positions feed pointers."""
    global _A
    if _A is not None:
        return _A
    gdefs, cpp_value, any_value, hdr, scans = {}, set(), set(), set(), []
    for h in sorted((ROOT / "include").rglob("*.h")):
        for m in DECL2_RE.finditer(_nocomment(h.read_text(errors="replace"))):
            hdr.add(m[1])
    for c in sorted((ROOT / "src").rglob("*.c")):
        rel = str(c.relative_to(ROOT))
        s = scan(c.read_text(errors="replace"))
        scans.append((rel, s))
        any_value |= s["values"]
        if s["cpp"]:
            cpp_value |= s["values"]
        for d in s["defs"]:
            if not d["method"] and not d["variadic"]:
                gdefs[d["name"]] = dict(rel=rel, params=d["params"], variadic=d["variadic"], static=d["static"])
    blocked = {f for f, d in gdefs.items() if d["variadic"] or f in cpp_value or f in hdr or (d["static"] and f in any_value)}
    E = {f: len(d["params"]) for f, d in gdefs.items()}
    L = dict(E)
    ptrpos = {f: set() for f in gdefs}
    A = dict(gdefs=gdefs, E=E, L=L, ptrpos=ptrpos, blocked=blocked, hdr=hdr, cpp_value=cpp_value, rounds=0)

    def kind(g, i):
        ps = gdefs[g]["params"]
        return param_info(ps[i])[1] if i < len(ps) else ("ptr" if i in ptrpos[g] else "int")

    A["kind"] = kind
    edges = []
    for rel, s in scans:
        for c in s["calls"]:
            e, g = c["encl"], c["name"]
            if e and not e["method"] and g in gdefs and not gdefs[g]["variadic"] and e["name"] in gdefs \
                    and gdefs[e["name"]]["rel"] == rel and e["name"] not in blocked:
                edges.append((e["name"], g, c["k"]))
    edges = sorted(set(edges))
    changed = True
    while changed:
        changed = False
        A["rounds"] += 1
        for f, g, k in edges:
            t = min(E[g], 4)
            if k >= t:
                continue
            if E[f] < t:
                E[f] = t
                changed = True
            for i in range(max(k, L[f]), t):
                if kind(g, i) == "ptr" and i not in ptrpos[f]:
                    ptrpos[f].add(i)
                    changed = True
    _A = A
    return A


def _pad_params(A, f, lo, hi):
    return [("void * " if A["kind"](f, i) == "ptr" else "int ") + "__pad%d" % i for i in range(lo, hi)]


def pad_text(text: str, rel: str, handled=None) -> str:
    A = analysis()
    gdefs, E, L = A["gdefs"], A["E"], A["L"]
    s = scan(text)
    edits = []  # (start, end, replacement)
    ext = {}  # name of def in this TU -> its extended parameter list
    for d in s["defs"]:
        f = d["name"]
        if d["method"] or f not in gdefs or gdefs[f]["rel"] != rel:
            ext[f] = d["params"]
            continue
        ps = d["params"] + _pad_params(A, f, len(d["params"]), E[f])
        ext[f] = ps
        if E[f] > len(d["params"]):
            edits.append((d["span"][0], d["span"][1], ", ".join(ps)))
            STATS["defs"] += 1
    own = {d["name"] for d in s["defs"]}
    tu_decl = set()
    for d in s["decls"]:
        f = d["name"]
        if d["method"] or d["variadic"] or f not in gdefs:
            continue
        tu_decl.add(f)
        n = len(d["params"])
        if (d["empty"] and not s["cpp"]) or n >= E[f] or (s["cpp"] and f in s["values"]):
            continue
        extra = ["void * " if A["kind"](f, i) == "ptr" else "int " for i in range(n, E[f])]
        edits.append((d["span"][0], d["span"][1], ", ".join(d["params"] + extra)))
        STATS["decls"] += 1
        if handled is not None:
            handled.add((rel, f))
    for c in s["calls"]:
        g = c["name"]
        if g not in gdefs or gdefs[g]["variadic"] or c["k"] >= E[g]:
            continue
        if (s["cpp"] and g in s["values"]) or (g in A["hdr"] and g not in tu_decl):
            continue
        e = c["encl"]
        eps = ext.get(e["name"], e["params"]) if e else []
        add = []
        for i in range(c["k"], E[g]):
            a = "0"
            if i < 4 and i < len(eps):
                name, kd = param_info(eps[i])
                if name and kd in ("ptr", "int"):
                    a = f"({'void *' if A['kind'](g, i) == 'ptr' else 'int'}){name}"
            STATS["zero" if a == "0" else "real"] += 1
            add.append(a)
        STATS["calls"] += 1
        edits.append((c["close"], c["close"], (", " if c["k"] else "") + ", ".join(add)))
        if handled is not None:
            handled.add((rel, g))
    for st, en, r in sorted(edits, key=lambda x: (x[0], x[1]), reverse=True):
        text = text[:st] + r + text[en:]
    return text


def report(out: Path):
    entries = []
    chk = ROOT / "work" / "port_argcheck.txt"
    if chk.exists():
        entries = [l.split("\t")[:2] for l in chk.read_text().splitlines() if l.strip()]
    handled, changed = set(), 0
    tus = {str(c.relative_to(ROOT)) for c in (ROOT / "src").rglob("*.c")}
    for rel in sorted(tus):
        t = (ROOT / rel).read_text(errors="replace")
        if pad_text(t, rel, handled) != t:
            changed += 1
    miss = [f"{r}\t{f}" for r, f in entries if (r, f) not in handled]
    out.parent.mkdir(exist_ok=True)
    out.write_text("".join(l + "\n" for l in miss))
    A = analysis()
    print(f"{len(entries)} argcheck entries; {len(tus)} TUs scanned, {changed} changed; fixpoint rounds {A['rounds']}; "
          f"defs extended {sum(1 for f in A['E'] if A['E'][f] > A['L'][f])} (rewritten {STATS['defs']}); {STATS['decls']} decls rewritten; "
          f"{STATS['calls']} calls padded ({STATS['real']} args from caller params, {STATS['zero']} args zero); "
          f"{len(miss)} entries unhandled -> {out}")


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--report", action="store_true")
    ap.add_argument("--out", type=Path, default=ROOT / "work" / "port_argpad.txt")
    ap.add_argument("--emit", type=Path, help="write padded copies of all argcheck TUs under this dir")
    a = ap.parse_args()
    if a.emit:
        for r in sorted(str(c.relative_to(ROOT)) for c in (ROOT / "src").rglob("*.c")):
            t = (ROOT / r).read_text(errors="replace")
            n = pad_text(t, r)
            if n != t:
                (a.emit / r).parent.mkdir(parents=True, exist_ok=True)
                (a.emit / r).write_text(n)
    if a.report or not a.emit:
        report(a.out)


if __name__ == "__main__":
    main()
