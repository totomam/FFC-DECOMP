#!/usr/bin/env python3
"""tools/import_arcnid.py <arcnid repo> <out dir> [funcs...] — try arcnid/ffc-decomp ov002 C for our non-done funcs.

arcnid's matcher masks relocations, so their externs are placeholders (Alloc, Sub, ...). For each candidate:
inline their battle.h, compile with their flag, map every extern reloc to our symbol via config relocs.txt,
rename (externs + the function itself to func_ov002_<addr>), then verify exactly with tools/try.
Tries both -O4 and -O4,p. Writes <out>/<func>.c(pp) and prints MATCH / NO MATCH lines."""
import csv
import re
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

ARC, OUT = Path(sys.argv[1]), Path(sys.argv[2])
ONLY = set(sys.argv[3:])
OUT.mkdir(parents=True, exist_ok=True)
HDR = (ARC / "include/game/battle.h").read_text()
FLAGS = {"O4": ["-noO4,p", "-O4"], "O4p": []}


def prep(src: Path, flags: list, dst: Path):
    text = src.read_text(errors="replace").replace('#include "game/battle.h"', HDR)
    fl = list(flags)
    if src.suffix == ".cpp":
        fl += ["-lang", "c++"]
    dst.write_text(f"/* cflags: {' '.join(fl)} */\n/* From arcnid/ffc-decomp {src.relative_to(ARC)}, externs renamed. */\n" + text)


def remap(dst: Path, name: str, func: str, addr: int):
    """Compile, rename extern relocs + function. Returns None or a reason string."""
    obj, msg = ffclib.compile_c(dst, OUT / "obj")
    if obj is None:
        return "compile error: " + msg.splitlines()[0] if msg else "compile error"
    e = ffclib.Elf(obj)
    fs = [s for s in e.syms if s["name"] == name and s["shndx"] not in (0, 0xFFF1, 0xFFF2)]
    if not fs:
        return f"symbol {name} not in object"
    fs = fs[0]
    start = fs["value"] & ~1
    rl = ffclib.relocs("ov002")
    ren = {}
    for off, typ, rs, add in e.relocs(fs["shndx"]):
        if not (start <= off < start + fs["size"]) or rs["shndx"] != 0 or rs["name"] == name:
            continue
        r = rl.get(addr + off - start)
        if r is None:
            return f"no reloc at +{off - start:#x} for {rs['name']}"
        kind, to, tmod = r
        tgt = ffclib.ref_name("ov002", kind, to - add if typ == 2 else to, tmod)
        if tgt.startswith("0x"):
            return f"{rs['name']} -> {tgt} has no symbol"
        if ren.get(rs["name"], tgt) != tgt:
            return f"{rs['name']} maps to two targets"
        ren[rs["name"]] = tgt
    if dst.suffix == ".cpp" and any(k.startswith("_Z") for k in list(ren) + [name]):
        return "c++ mangled names: rename by hand"
    ren[name] = func
    text = dst.read_text()
    for old, new in ren.items():
        if old != new and re.search(rf"\b{re.escape(new)}\b", text):
            return f"name clash {new}"
    text = re.sub(r"\b(" + "|".join(map(re.escape, sorted(ren, key=len, reverse=True))) + r")\b",
                  lambda m: ren[m[1]], text)
    dst.write_text(text)
    return None


def main():
    q = {r["func"]: r for r in csv.DictReader(open(ffclib.ROOT / "queue.csv"))}
    for e in csv.DictReader(open(ARC / "config/ov002/manifest.csv")):
        func = "func_ov002_" + e["address"].lower()
        if e["kind"] == "asm" or func not in q or q[func]["status"] == "done" or (ONLY and func not in ONLY):
            continue
        src = ARC / e["source"]
        order = [e["flags"]] + [f for f in FLAGS if f != e["flags"]]
        res = "?"
        for fl in order:
            dst = OUT / (func + src.suffix)
            prep(src, FLAGS[fl], dst)
            why = remap(dst, e["function"], func, int(e["address"], 16))
            if why:
                res = "SKIP " + why
                continue
            p = subprocess.run([str(ffclib.ROOT / "tools/try"), func, str(dst)], capture_output=True, text=True)
            res = (p.stdout.splitlines() or ["?"])[0] + f" [{fl}]"
            if p.returncode == 0:
                break
        print(func, q[func]["status"], res, dst if res.startswith("MATCH") else "", flush=True)


main()
