#!/usr/bin/env python3
"""tools/block_sysreg.py — mark todo/fail functions that use mrc/mcr/mrs/msr (CP15 / CPSR access) as blocked:
mwcc has no intrinsics for them, so pure C cannot match (asm is allowed only for BIOS swi stubs)."""
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

syms = ffclib.symbols()
n = 0
with ffclib.queue_update() as rows:
    for r in rows:
        s = syms.get(r["func"])
        if r["status"] not in ("todo", "fail_haiku", "fail_sonnet") or s is None:
            continue
        ops = {t.split()[0] for _, _, t in ffclib.disasm(ffclib.target_bytes(s), s.addr, s.mode)
               if re.match(r"(mrc|mcr|mrs|msr)\b", t)}
        if ops:
            r["status"], r["note"] = "blocked", f"system register access ({'/'.join(sorted(ops))}): not C"
            n += 1
print(f"blocked {n}")
