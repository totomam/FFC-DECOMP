#!/usr/bin/env python3
"""Port: what a function leaves in r0 at its returns, from the ROM code (linear scan, branches ignored).

Many src/ functions are defined `void` although the ROM code returns a value in r0 (an earlier call's result, e.g.
an allocator `if (!(p = try(n))) p = other(n);`). Callers that use the value then read garbage on the host.
classify(name) -> set of kinds of r0 at the return points: 'arg0' (the first argument, untouched or restored),
'call' (the result of the last bl/blx, or a tail-call branch), 'other' (anything else).

usage: port_r0.py [func ...]   (prints the class of each)
"""
import re
import sys
from functools import lru_cache
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

REG = {f"r{i}": i for i in range(13)} | {"sb": 9, "sl": 10, "fp": 11, "ip": 12, "sp": 13, "lr": 14, "pc": 15}
NOWRITE = {"cmp", "cmn", "tst", "teq", "svc", "swi", "nop", "msr", "mcr", "pld", "bkpt", "cps"}


def _regs(s):
    out = set()
    for part in s.split(","):
        part = part.strip()
        if "-" in part:
            a, b = part.split("-")
            out |= set(range(REG[a.strip()], REG[b.strip()] + 1))
        elif part in REG:
            out.add(REG[part])
    return out


@lru_cache(None)
def classify(name: str) -> frozenset:
    sym = ffclib.symbols().get(name)
    if sym is None or sym.kind != "function" or not sym.size or sym.module == "abs":
        return frozenset()
    try:
        code = ffclib.target_bytes(sym)
    except Exception:
        return frozenset()
    kind = ["other"] * 16
    kind[0] = "arg0"
    rets = set()
    lo, hi = sym.addr, sym.addr + sym.size
    for _, _, text in ffclib.disasm(code, sym.addr, sym.mode or "arm"):
        mn, _, ops = text.partition(" ")
        base = re.sub(r"(eq|ne|cs|hs|cc|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le|al)$", "", mn) if mn not in ("bls", "bhs") else mn
        cond = base != mn and mn not in ("bl", "teq", "bls")
        if mn.startswith(".") or not mn:
            continue
        if base in ("bl", "blx") and not ops.startswith("lr"):
            kind[0] = "call"
            for r in (1, 2, 3, 12, 14):
                kind[r] = "other"
            continue
        if base == "bx" or (base.startswith("pop") and "pc" in ops) or (base.startswith("ldm") and "pc" in ops) \
                or (base in ("mov", "movs") and ops.startswith("pc,")):
            rets.add(kind[0])
            if base.startswith(("pop", "ldm")):
                for r in _regs(ops[ops.find("{") + 1:ops.find("}")]):
                    kind[r] = "other"
            continue
        if base == "b":
            m = re.search(r"#(0x[0-9a-f]+)$", ops)
            if m and not lo <= int(m[1], 16) < hi and not cond:
                rets.add("call")  # tail call
            continue
        if base.startswith(("pop", "ldm")):
            for r in _regs(ops[ops.find("{") + 1:ops.find("}")]):
                kind[r] = "other"
            continue
        if base in NOWRITE or base.startswith(("str", "stm", "push")):
            continue
        args = [a.strip() for a in ops.split(",")]
        if not args or args[0] not in REG:
            continue
        d = REG[args[0]]
        src = None
        if base in ("mov", "movs") and len(args) == 2 and args[1] in REG:
            src = REG[args[1]]
        elif base in ("add", "adds", "sub", "subs") and len(args) == 3 and args[1] in REG and args[2] in ("#0", "#0x0"):
            src = REG[args[1]]
        new = kind[src] if src is not None else "other"
        kind[d] = (kind[d] if kind[d] == new else "other") if cond else new
    return frozenset(rets)


def main():
    for n in sys.argv[1:]:
        print(n, sorted(classify(n)))


if __name__ == "__main__":
    main()
