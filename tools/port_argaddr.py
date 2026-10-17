#!/usr/bin/env python3
"""Port: parameters whose address is taken (`*(Pair *)&a`, `u32 *args = &second; args[1]`).

mwcc spills r0-r3 next to the stack arguments (`push {r0-r3}`), so &param + k reaches the following parameters, as
in a va_list. clang copies an address-taken parameter into its own local, so the neighbours read garbage. A def
that takes &param gets its parameters copied into one local struct of 4-byte-aligned slots, laid out like the ARM
spill area, and every use of a parameter in the body goes through it: `__a.name`.

rewrite(text) -> text (a TU's source, after port_argpad.pad_text).
"""
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import port_argpad as pa  # noqa: E402

STATS = {"defs": 0}


def _name(p: str):
    m = re.search(r"\(\s*\*\s*([A-Za-z_]\w*)\s*\)", p)
    return m[1] if m else pa.param_info(p)[0]


def rewrite(text: str) -> str:
    t = pa._nocomment(text)
    edits = []
    for d in pa.scan(text)["defs"]:
        if d["method"] or d["body"][1] < 0:
            continue
        b0, b1 = d["body"][0], d["body"][1]
        body = t[b0:b1]
        names = [_name(p) for p in d["params"] if p.strip() != "..."]
        if not any(n and re.search(r"(?<![&\w])&\s*" + n + r"\b(?!\s*(\[|\.|->))", body) for n in names):
            continue
        slots, inits = [], []
        for i, n in enumerate(names):
            if n:
                slots.append(f"__typeof__({n}) {n} __attribute__((aligned(4)));")
                inits.append(n)
            else:
                slots.append(f"unsigned int __u{i};")
                inits.append("0")
        known = {n for n in names if n}
        edits.append((b0, b0, " struct { " + " ".join(slots) + " } __a = { " + ", ".join(inits) + " };"))
        for m in re.finditer(r"(?<![\w.>])\b([A-Za-z_]\w*)\b", body):
            if m[1] in known and not body[:m.start()].rstrip().endswith("goto"):
                edits.append((b0 + m.start(), b0 + m.end(), "__a." + m[1]))
        STATS["defs"] += 1
    for s, e, r in sorted(edits, reverse=True):
        text = text[:s] + r + text[e:]
    return text


if __name__ == "__main__":
    for f in sys.argv[1:]:
        print(rewrite(Path(f).read_text()))
