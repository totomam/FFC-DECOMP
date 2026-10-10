#!/usr/bin/env python3
"""tools/mkwave.py <tier> <count> [--module M] [--min-diff N] -> prints JSON items for a Workflow wave.
Each item: {func, tier, prompt}; with --names just func names (workers fetch prompts via tools/prompt). Picks todo functions by ascending difficulty and marks them `queued`."""
import argparse
import csv
import json
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

ROOT = ffclib.ROOT


def prototypes():
    out = {}
    for h in (ROOT / "include").rglob("*.h"):
        for line in h.read_text().splitlines():
            m = re.search(r"\b(func_\w+)\s*\(", line)
            if m and line.rstrip().endswith(";"):
                out.setdefault(m[1], line.strip().removeprefix("extern "))
    return out


_PROTOS = None


def protos():
    global _PROTOS
    if _PROTOS is None:
        _PROTOS = prototypes()
    return _PROTOS

TEMPLATE = """Match one C function to the target bytes (Fossil Fighters: Champions, mwccarm -O4,p, {mode}).

Target `{func}` ({size:#x} bytes, {mode}):
```
{asm}
```
Referenced symbols:
{refs}

Rules:
- Write your C to `work/{func}/a.c` (you may use b.c, c.c ...). Only touch `work/{func}/`.
- Check with: `tools/try {func} work/{func}/a.c` — prints MATCH or a diff (target vs yours).
- Hard cap: {cap} runs of tools/try. Stop at the first MATCH.
- File layout: `#include "ffc/types.h"` (uint8_t..uint32_t, int8_t..int32_t), then `extern` prototypes for every referenced symbol (guess types from usage), then the function `{func}` (non-static, exactly that name). Define nothing else non-static; no string literals or static data. No `asm` blocks/functions or `#pragma` — pure C only (an asm match counts as a failure).
- Compiled as C99 Thumb by default{armnote}. Do not read other repo files, asm dumps, or headers.
- Tips: mwcc often reuses loads, prefers `if (x) return;` early exits; register/ordering diffs usually mean statement order or types (signed/unsigned, u8/u16) differ. Use struct pointer offsets via casts or a local struct typedef.
- Calls: r0-r3 not written before a `bl` means the caller's own params pass straight through (declare them!); `str rX, [sp]`/`[sp, #4]` before a `bl` is the callee's 5th/6th argument, not a local. `adds r3, r0, #0` before a call = param a moved to callee arg 4.
- Entry `push {{r0, r1, r2, r3}}` (or `push {{r1, r2}}` etc.) then loads from `[sp, #0x14]`-ish = a struct passed BY VALUE in registers (e.g. `typedef struct {{ uint32_t a, b; }} S;` as a parameter), not separate ints. A word stored to [p] right after an allocator call is a vtable pointer (inlined C++ ctor).
- `subs rX, rX, rX` (an unfolded x - x; C always folds it to `movs rX, #0`), often with an unexplained 4-byte stack frame: compile as C++ (first line `/* cflags: -lang c++ */`, declare every extern and the function itself `extern "C"`) and route the value through an inline helper taking a class with an empty destructor by const reference: `struct Num {{ int v; Num(int x) : v(x) {{}} ~Num() {{}} }}; inline int diff(const Num &a, int b) {{ return a.v - b; }}` then `int n = p->size; p->size = diff(n, n);`.
{extra}
Return: matched (bool), best_pct (number from tools/try, 100 if MATCH), file (path of best attempt), note (one line: what blocks a match, or empty)."""


def v54_extra(note):
    m = re.search(r"(work/v54/\S+\.c)", note or "")
    if m and (ROOT / m[1]).exists():
        return f"A previous behavioural (non-matching) attempt exists at {m[1]}; you may start from it.\n"
    return ""


REG_RE = re.compile(r"\b(?:r\d+|ip|lr|sb|sl|fp)\b")


def _near_index(sh, done):
    """Done functions keyed by register-renamed shape and by shape-with-one-line-masked."""
    regs, one = {}, {}
    for f in done:
        lines = sh[f][0].split("\n")
        if len(lines) > 80:
            continue
        regs.setdefault(REG_RE.sub("R", sh[f][0]), f)
        for i in range(len(lines)):
            one.setdefault((len(lines), i, "\n".join(lines[:i] + lines[i + 1:])), f)
    return regs, one


def sibling_extra(func):
    """C of an already-matched function with the identical instruction shape (clone.py could not adapt it),
    else of a near sibling (same shape up to register names, or one instruction different)."""
    import clone
    sh = clone.shapes()
    if func not in sh:
        return ""
    rows = [r for r in ffclib.queue_rows() if r["status"] == "done" and r["func"] != func and r["func"] in sh]
    note = {r["func"]: r["note"] for r in rows}
    for f in note:
        if sh[f][0] == sh[func][0]:
            p = clone.donor_src(f, note[f])
            if p:
                return (f"`{f}` has the identical instruction shape (only constants, offsets or symbols differ) and "
                        f"matched with this C; adapt it (struct field offsets, constants, names):\n```\n"
                        f"{p.read_text().strip()}\n```\n")
    regs, one = _near_index(sh, note)
    lines = sh[func][0].split("\n")
    hits = [(regs.get(REG_RE.sub("R", sh[func][0])), "the same instruction shape up to register allocation")]
    hits += [(one.get((len(lines), i, "\n".join(lines[:i] + lines[i + 1:]))),
              f"the same instruction shape except one instruction (target line {i + 1}: `{lines[i]}`)")
             for i in range(len(lines))] if len(lines) <= 80 else []
    for f, how in hits:
        p = f and clone.donor_src(f, note[f])
        if p:
            return (f"Hint: matched function `{f}` has {how}. Its C is a strong starting point; change what differs "
                    f"(statement order / types for registers, the one differing operation):\n```\n"
                    f"{p.read_text().strip()}\n```\n")
    return ""


def build(func, tier, extra=""):
    extra = sibling_extra(func) + extra
    sym = ffclib.symbols()[func]
    asm = "\n".join(ffclib.func_asm(sym))
    refs = []
    for kind, name in ffclib.callees(sym):
        if name in [r.split(" ")[0] for r in refs]:
            continue
        s = ffclib.symbols().get(name)
        desc = protos().get(name) or (f"{s.kind}" + (f" ({s.mode})" if s and s.mode else "") if s else "unknown")
        refs.append(f"{name} : {desc}")
    cap = 10 if tier == "haiku" else 15
    armnote = ". This function is ARM: put `/* cflags: -nothumb */` as the very first line" if sym.mode == "arm" else ""
    return TEMPLATE.format(func=func, size=sym.size, mode=sym.mode, asm=asm,
                           refs="\n".join(f"- {r}" for r in refs) or "- none", cap=cap,
                           armnote=armnote, extra=extra)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("tier")
    ap.add_argument("count", type=int)
    ap.add_argument("--module")
    ap.add_argument("--min-diff", type=int, default=0)
    ap.add_argument("--status", default="todo")
    ap.add_argument("--dry", action="store_true")
    ap.add_argument("--names", action="store_true", help="emit only func names (agents run tools/prompt)")
    ap.add_argument("--dedup", action="store_true",
                    help="one function per asm shape (tools/clone.py propagates matches), biggest groups first")
    a = ap.parse_args()
    if a.dry:
        json.dump(pick_items(a, ffclib.queue_rows()), sys.stdout)
        return
    with ffclib.queue_update() as rows:  # held while picking: concurrent mkwave runs never pick the same rows
        items = pick_items(a, rows)
    json.dump(items, sys.stdout)


def pick_items(a, rows):
    pick = [r for r in rows if r["status"] == a.status and r["tier"] == a.tier
            and (not a.module or r["tu"] == a.module) and int(r["difficulty"]) >= a.min_diff
            and "unaligned" not in r["note"]]
    pick.sort(key=lambda r: int(r["difficulty"]))
    if a.dedup:
        import clone
        sh = clone.shapes()
        tried = set(json.loads(clone.TRIED.read_text())) if clone.TRIED.exists() else set()
        busy = {sh[r["func"]][0] for r in rows if r["func"] in sh and r["status"] not in ("todo", "done")}
        done = {}
        for r in rows:
            if r["func"] in sh and r["status"] == "done":
                done.setdefault(sh[r["func"]][0], []).append(r["func"])
        for r in rows:  # a done sibling blocks the shape until clone.py tried (and failed) every pair
            k = sh.get(r["func"], [None])[0]
            if r["status"] == "todo" and k in done and k not in busy and any(
                    f"{r['func']}|{d}{x}" not in tried for d in done[k] for x in ("", "|d")):
                busy.add(k)
        groups = {}
        for r in rows:
            if r["func"] in sh and r["status"] == "todo":
                groups.setdefault(sh[r["func"]][0], []).append(r["func"])
        reps, seen = [], set()
        for r in pick:
            k = sh.get(r["func"], [r["func"]])[0]
            if k in busy or k in seen:
                continue
            seen.add(k)
            reps.append((len(groups.get(k, [])), r))
        reps.sort(key=lambda x: -x[0])  # stable: ties keep difficulty order
        pick = [r for _, r in reps]
    pick = pick[:a.count]
    items = []
    for r in pick:
        if a.names:
            items.append(r["func"])
        else:
            items.append({"func": r["func"], "tier": a.tier, "prompt": build(r["func"], a.tier, v54_extra(r["note"]))})
        r["status"] = "queued"
    return items


if __name__ == "__main__":
    main()
