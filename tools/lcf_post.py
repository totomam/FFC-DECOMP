#!/usr/bin/env python3
"""tools/lcf_post.py <arm9.lcf> <config/<ver>/arm9> — post-process the lcf dsd generates:
- define absolute symbols from abs_symbols.txt (call targets outside every module) so C can call them;
- wrap each .text object that starts on a 2-byte boundary in ALIGNALL(2)/ALIGNALL(4): a complete TU
  whose start is unaligned, or the gap object right after a TU whose end is unaligned. (The objects'
  own .text alignment is lowered to 2 by tools/elf_align.py; ALIGNALL(4) still applies elsewhere.)"""
import re
import sys
from pathlib import Path

lcf, cfg = Path(sys.argv[1]), Path(sys.argv[2])
text = lcf.read_text()

defs = "".join(f"    {m[1]} = {m[2]};\n" for m in
               (re.match(r"^(\S+) kind:\w+(?:\([^)]*\))? addr:(0x[0-9a-f]+)", ln)
                for ln in (cfg / "abs_symbols.txt").read_text().splitlines()) if m)
text = text.replace("SECTIONS {\n", "SECTIONS {\n" + defs, 1)

tus = {}  # object basename -> (start, end) of complete TUs' .text
for dl in cfg.rglob("delinks.txt"):
    for m in re.finditer(r"^src/(\S+)\.c(?:pp)?:\n(?:    .*\n)*?    \.text\s+start:(0x[0-9a-f]+) end:(0x[0-9a-f]+)",
                         dl.read_text(), re.M):
        tus[Path(m[1]).name + ".o"] = (int(m[2], 16), int(m[3], 16))

out, prev_end = [], None
for ln in text.splitlines(keepends=True):
    m = re.match(r"^(\s*)(\S+\.o)\(\.text\)\s*$", ln)
    if m:
        se = tus.get(m[2])
        start = se[0] if se else prev_end if m[2].startswith("_dsd_gap@") else None
        prev_end = se[1] if se else None
        if start is not None and start % 4:
            ln = f"{m[1]}ALIGNALL(2);\n{ln}{m[1]}ALIGNALL(4);\n"
    elif ln.strip() and not ln.strip().startswith("ALIGN"):
        prev_end = None
    out.append(ln)
lcf.write_text("".join(out))
