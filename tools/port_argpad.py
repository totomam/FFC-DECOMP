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
STATS = {"real": 0, "zero": 0, "decls": 0, "calls": 0, "defs": 0, "voidval": 0, "voidex": {}, "tailret": 0}


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


def _ret(head: str) -> str:
    """Return type text of a declaration/definition head (storage words dropped)."""
    h = re.sub(r"\b(extern|static|inline|__inline|__inline__)\b|\"C\"", " ", head)
    return re.sub(r"\s*\*\s*", " *", " ".join(h.split())).strip()


def scan(text: str):
    """Structure of one TU: defs, decls, calls (with enclosing def) and by-value uses of func_X names."""
    t = _nocomment(text)
    s = {"cpp": "-lang c++" in text[:200], "defs": [], "decls": [], "calls": [], "values": set()}
    skip = set()
    for m in DEF_RE.finditer(t):
        pre = re.findall(r"[A-Za-z_]\w*", t[m.start():m.start(1)])
        ps = split_args(m[2])
        s["defs"].append(dict(ret=_ret(t[m.start():m.start(1)]), name=m[1], pos=m.start(1), span=(m.start(2), m.end(2)), params=[] if ps == ["void"] else ps,
                              head=(m.start(), m.start(1)), body=(m.end(), _close(t, m.end() - 1)),
                              static="static" in pre, method=t[m.start(1) - 1] == ":", variadic=nparams(m[2]) is None))
        skip.add(m.start(1))
    for m in DECL2_RE.finditer(t):
        head = t[m.start():m.start(1)]
        pre = re.findall(r"[A-Za-z_]\w*", head)
        if not pre or set(pre) & set(NOTDECL) or not re.fullmatch(r'[\w\s*"]*', head):
            continue  # a call statement or label, not a declaration
        ps = split_args(m[2])
        s["decls"].append(dict(ret=_ret(head), name=m[1], span=(m.start(2), m.end(2)), params=[] if ps == ["void"] else ps,
                               head=(m.start(), m.start(1)),
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
                gdefs[d["name"]] = dict(void=d["ret"] == "void", rel=rel, params=d["params"], variadic=d["variadic"], static=d["static"])
    # Functions no src/ TU defines (lifted from the ROM by port_lift, which reads r0-r3): a pseudo-def with as many
    # params as the ROM code reads registers on entry, so short C calls to them get the caller's passthrough args.
    import port_r0
    over = set()
    for c in sorted((ROOT / "port" / "src").glob("*.c")):
        over |= set(re.findall(r"^\w[\w\s*]*\b(func_\w+)\s*\(", c.read_text(), re.M))
    called = {c["name"] for _, s in scans for c in s["calls"]} - set(gdefs) - over
    for f in sorted(called):
        n = port_r0.live_args(f)
        if n:
            gdefs[f] = dict(void=False, rel=None, params=[f"unsigned int __r{i}" for i in range(n)], variadic=False, static=False)
    # Header-declared functions are extendable too: port_configure compiles against pad_header() copies of include/.
    blocked = {f for f, d in gdefs.items() if d["variadic"] or f in cpp_value or (d["static"] and f in any_value)}
    # r0-value defs: a `void` def whose ROM code leaves an earlier call's result in r0 (port_r0.py; e.g. OS_TryLockByWord,
    # an allocator `if (!(p = try(n))) p = other(n);`). The port gives it an `unsigned int` return of the last call made.
    tailret = set()
    for rel, sc in scans:
        for d in sc["defs"]:
            f = d["name"]
            if f in gdefs and gdefs[f]["rel"] == rel and gdefs[f]["void"] and f not in blocked and not d["method"]:
                k = port_r0.classify(f)
                if "call" in k and k <= {"call", "arg0"}:
                    tailret.add(f)
    for f in tailret:
        gdefs[f]["void"] = False
    E = {f: len(d["params"]) for f, d in gdefs.items()}
    L = dict(E)
    ptrpos = {f: set() for f in gdefs}
    A = dict(gdefs=gdefs, E=E, L=L, ptrpos=ptrpos, blocked=blocked, hdr=hdr, cpp_value=cpp_value, rounds=0, tailret=tailret)

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


def _void_head(text, head):
    m = list(re.finditer(r"\bvoid\b", text[head[0]:head[1]]))[-1]
    return (head[0] + m.start(), head[0] + m.end(), "unsigned int")


def _r0_edits(text, s, d, ps):
    """`void f(...) {...}` -> `unsigned int f(...) { unsigned int __r0 = arg0; ... __r0 = g(...) ...; return __r0; }`:
    each outermost call to a value-returning function (per this TU's declarations) updates __r0, as r0 on ARM."""
    t = _nocomment(text)
    b0, b1 = d["body"]
    rets = {x["name"]: x["ret"] for x in s["decls"]}
    A = analysis()
    name, kd = param_info(ps[0]) if ps else (None, None)
    ed = [_void_head(text, d["head"]),
          (b0, b0, f" unsigned int __r0 = (unsigned int)({name if name and kd in ('ptr', 'int') else 0});"),
          (b1, b1, " return __r0; ")]
    for m in re.finditer(r"\breturn\s*;", t[b0:b1]):
        ed.append((b0 + m.start(), b0 + m.end(), "return __r0;"))
    calls = [c for c in s["calls"] if c["encl"] is d]
    last = -1
    for c in sorted(calls, key=lambda c: c["pos"]):
        if c["pos"] < last:
            continue  # nested in an earlier call's arguments
        last = c["close"]
        g = c["name"]
        r = rets.get(g)
        gv = (g in A["gdefs"] and not A["gdefs"][g]["void"]) or g in A["tailret"]
        if r is None or not ((r != "void" and _scalar(r)) or (r == "void" and gv)):
            continue
        if _bare_statement(t, c["pos"], c["close"]):
            ed.append((c["pos"], c["pos"], "__r0 = (unsigned int)"))
        elif r != "void":
            ed.append((c["pos"], c["pos"], "({ __auto_type __v = "))
            ed.append((c["close"] + 1, c["close"] + 1, "; __r0 = (unsigned int)__v; __v; })"))
    return ed


def pad_header(text: str) -> str:
    """A header of include/ with each extended function's prototype padded to its effective parameter count."""
    A = analysis()
    edits = []
    for d in scan(text)["decls"]:
        f = d["name"]
        if d["method"] or d["variadic"] or f not in A["gdefs"] or d["empty"] or len(d["params"]) >= A["E"][f]:
            continue
        extra = ["void * " if A["kind"](f, i) == "ptr" else "int " for i in range(len(d["params"]), A["E"][f])]
        edits.append((d["span"][0], d["span"][1], ", ".join(d["params"] + extra)))
    for d in scan(text)["decls"]:
        if d["ret"] == "void" and d["name"] in A["tailret"]:
            edits.append(_void_head(text, d["head"]))
    for st, en, r in sorted(edits, reverse=True):
        text = text[:st] + r + text[en:]
    return text


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
        if f in A["tailret"] and gdefs[f]["rel"] == rel:
            edits += _r0_edits(text, s, d, ps)
            STATS["tailret"] += 1
    r0tu = any(d["name"] in A["tailret"] and gdefs.get(d["name"], {}).get("rel") == rel for d in s["defs"])
    for d in s["decls"]:
        g = d["name"]
        if d["ret"] == "void" and (g in A["tailret"] or (r0tu and g in gdefs and not gdefs[g]["void"])):
            edits.append(_void_head(text, d["head"]))
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
        if s["cpp"] and g in s["values"]:
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
    return void_values(text, A)


def _scalar(ret: str) -> bool:
    w = re.findall(r"[A-Za-z_]\w*", ret)
    return "*" in ret or (bool(w) and all(x in BASIC for x in w) and not {"float", "double"} & set(w))


def void_names():
    """Functions defined in src/ with a `void` return (ARM leaves r0 = first argument, the host eax is garbage)."""
    return {f for f, d in analysis()["gdefs"].items() if d["void"] and not d["static"]}


def _bare_statement(t: str, pos: int, cl: int) -> bool:
    k = cl + 1
    while k < len(t) and t[k] in " \t\r\n":
        k += 1
    if k >= len(t) or t[k] != ";":
        return False
    j = pos - 1
    while j >= 0 and t[j] in " \t\r\n":
        j -= 1
    if j < 0 or t[j] in ";{}":
        return True
    if t[j] == ":":
        return "?" not in t[max(t.rfind(";", 0, j), t.rfind("{", 0, j), t.rfind("}", 0, j)) + 1:j]
    if t[j] == ")":
        depth = 0
        while j >= 0:
            depth += t[j] == ")"
            depth -= t[j] == "("
            if depth == 0:
                break
            j -= 1
        w = re.search(r"(\w+)\s*$", t[:j])
        return bool(w) and w[1] in ("if", "while", "for", "switch")
    w = re.search(r"(\w+)\s*$", t[:j + 1])
    return bool(w) and w[1] in ("else", "do")


def void_values(text: str, A=None) -> str:
    """Calls whose value is used but whose src/ definition returns void: keep r0 (the first argument), as the ARM does."""
    A = A or analysis()
    vs = {f for f, d in A["gdefs"].items() if d["void"]}
    if not any(m[1] in vs for m in NAME_RE.finditer(text)):
        return text
    for _ in range(500):
        sc = scan(text)
        t = _nocomment(text)
        ret = {d["name"]: d["ret"] for d in sc["decls"] if not d["method"] and not (d["params"] and param_info(d["params"][0])[1] == "other")}
        cand = [c for c in sc["calls"] if c["name"] in vs and ret.get(c["name"], "void") != "void"
                and _scalar(ret[c["name"]])
                and (not A["gdefs"][c["name"]]["params"] or param_info(A["gdefs"][c["name"]]["params"][0])[1] != "other")
                and not _bare_statement(t, c["pos"], c["close"])]
        if not cand:
            break
        c = cand[-1]
        g = c["name"]
        op = text.index("(", c["pos"] + len(g))
        args = split_args(text[op + 1:c["close"]])
        a0 = args[0] if args else "0"
        rest = ", ".join(["__rv"] + args[1:]) if args else ""
        text = (text[:c["pos"]] + f"({{ __typeof__(1 ? ({a0}) : ({a0})) __rv = ({a0}); {g}({rest}); ({ret[g]})__rv; }})"
                + text[c["close"] + 1:])
        STATS["voidval"] += 1
        STATS["voidex"].setdefault(g, 0)
        STATS["voidex"][g] += 1
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
    ex = sorted(STATS["voidex"].items(), key=lambda x: -x[1])
    print(f"{STATS['voidval']} void-def calls with used value rewritten, {len(ex)} distinct callees; e.g. "
          + ", ".join(f"{g} x{n}" for g, n in ex[:6]))


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
