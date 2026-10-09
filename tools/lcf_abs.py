#!/usr/bin/env python3
"""tools/lcf_abs.py <arm9.lcf> <abs_symbols.txt> — define absolute symbols (call targets outside every module)
at the top of the lcf's SECTIONS block, so C code can call them."""
import re
import sys

lcf, syms = sys.argv[1:3]
defs = "".join(f"    {m[1]} = {m[2]};\n" for m in
               (re.match(r"^(\S+) kind:\w+(?:\([^)]*\))? addr:(0x[0-9a-f]+)", ln) for ln in open(syms)) if m)
text = open(lcf).read()
if "SECTIONS {\n" + defs not in text:
    text = text.replace("SECTIONS {\n", "SECTIONS {\n" + defs, 1)
    open(lcf, "w").write(text)
