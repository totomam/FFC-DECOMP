#!/usr/bin/env python3
"""Ports reference/v54 C into per-function candidates and checks each with try's comparator.
  tools/port_v54.py headers   -> include/ffc/*.h (renamed to dsd symbol names)
  tools/port_v54.py check     -> work/v54/<func>.c + work/v54/results.csv"""
import csv
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

V54 = ffclib.ROOT / "reference" / "v54"
OUT = ffclib.ROOT / "work" / "v54"
# V54 source-unit policy (config/toolchain.json)
FILE_FLAGS = {"src/arm9/nonleaf.c": "-nointerworking"}


def rename(text: str) -> str:
    text = re.sub(r"\bffc_arm9_([0-9a-fA-F]{8})\b", lambda m: "func_" + m[1].lower(), text)
    text = re.sub(r"\bffc_ov02_([0-9a-fA-F]{8})\b", lambda m: "func_ov002_" + m[1].lower(), text)
    text = re.sub(r"\bffc_ov11_([0-9a-fA-F]{8})\b", lambda m: "func_ov011_" + m[1].lower(), text)
    return re.sub(r"\bffc_mar_entry\b", "func_02052d90", text)


def strip_comments(s: str) -> str:
    s = re.sub(r"/\*.*?\*/", " ", s, flags=re.S)
    return re.sub(r"//[^\n]*", "", s)


def chunks(src: str):
    """Top-level chunks: ('pp'|'decl'|'func', text, name)."""
    i, n, out = 0, len(src), []
    while i < n:
        while i < n and src[i].isspace():
            i += 1
        if i >= n:
            break
        if src[i] == "#":
            j = i
            while True:
                e = src.find("\n", j)
                e = n if e < 0 else e
                if src[e - 1] == "\\":
                    j = e + 1
                    continue
                break
            out.append(("pp", src[i:e], None))
            i = e
            continue
        j, depth, paren = i, 0, 0
        kind = "decl"
        while j < n:
            c = src[j]
            if c == '"' or c == "'":
                k = j + 1
                while k < n and src[k] != c:
                    k += 2 if src[k] == "\\" else 1
                j = k
            elif c == "(":
                paren += 1
            elif c == ")":
                paren -= 1
            elif c == "{":
                if depth == 0 and paren == 0 and src[i:j].rstrip().endswith(")"):
                    kind = "func"
                depth += 1
            elif c == "}":
                depth -= 1
                if depth == 0 and kind == "func":
                    j += 1
                    break
            elif c == ";" and depth == 0 and paren == 0:
                j += 1
                break
            j += 1
        text = src[i:j]
        name = None
        if kind == "func":
            head = text[:text.index("{")]
            m = re.search(r"(\w+)\s*\([^()]*(?:\([^()]*\)[^()]*)*\)\s*$", head.strip())
            name = m[1] if m else None
        out.append((kind, text, name))
        i = j
    return out


def headers():
    dst = ffclib.ROOT / "include" / "ffc"
    dst.mkdir(parents=True, exist_ok=True)
    for h in sorted((V54 / "include" / "ffc").glob("*.h")):
        (dst / h.name).write_text(rename(h.read_text()))
        print("wrote", dst / h.name)


def check():
    OUT.mkdir(parents=True, exist_ok=True)
    rows = list(csv.DictReader(open(V54 / "functions.csv")))
    parsed = {}
    results = []
    for r in rows:
        rel = r["source"]
        if rel not in parsed:
            parsed[rel] = chunks(rename(strip_comments((V54 / rel).read_text())))
        cs = parsed[rel]
        func = rename(r["symbol"])
        defs = [t for k, t, nm in cs if k == "func" and nm == func]
        status, note = "", ""
        sym = ffclib.symbols().get(func)
        if sym is None:
            status, note = "nosym", "not in symbols.txt"
        elif not defs:
            status, note = "nodef", "definition not found"
        if status:
            results.append(dict(func=func, v54_status=r["status"], result=status, pct="", note=note))
            continue
        pre = [t for k, t, nm in cs if k != "func"]
        flags = FILE_FLAGS.get(rel, "")
        if sym.mode == "arm":
            flags = (flags + " -nothumb").strip()
        text = (f"/* cflags: {flags} */\n" if flags else "") + "\n".join(pre) + "\n\n" + defs[0] + "\n"
        path = OUT / f"{func}.c"
        path.write_text(text)
        obj, msg = ffclib.compile_c(path, OUT / "obj")
        if obj is None:
            results.append(dict(func=func, v54_status=r["status"], result="compile_error", pct="",
                                note=msg.splitlines()[0][:120] if msg else ""))
            continue
        got, bad = ffclib.resolve_func(obj, func, sym.addr)
        if got is None:
            results.append(dict(func=func, v54_status=r["status"], result="error", pct="", note=bad[0][2]))
            continue
        want = ffclib.target_bytes(sym)
        ok = got == want and not bad
        results.append(dict(func=func, v54_status=r["status"], result="match" if ok else "nomatch",
                            pct=f"{ffclib.match_pct(got, want):.1f}", note="; ".join(b[2] for b in bad[:2])))
    with open(OUT / "results.csv", "w", newline="") as f:
        w = csv.DictWriter(f, fieldnames=list(results[0]))
        w.writeheader()
        w.writerows(results)
    from collections import Counter
    print(Counter(r["result"] for r in results))


if __name__ == "__main__":
    {"headers": headers, "check": check}[sys.argv[1]]()
