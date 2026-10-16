#!/usr/bin/env python3
"""P2: write port/build.ninja, a host build of every src/ TU (clang -m32 or Emscripten wasm32).

Objects go to build/port/<target>/obj/. src/ is compiled as-is; CodeWarrior-isms are handled by flags and the
force-included port/include/cw_compat.h. BIOS asm stubs (src/main/{Div,Sqrt,...}.c with mwcc `asm` bodies) are
skipped: the port supplies C replacements in port/src/.

usage: port_configure.py [--target host|wasm|win32] ; then `ninja -f port/build.ninja`
"""
import argparse
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

TARGETS = {  # cc, flags, link flags, executable suffix
    "host": ("clang", ["-m32", "-fno-pie"], ["-m32", "-no-pie"], ""),
    "win32": ("clang", ["--target=i686-w64-windows-gnu"], ["--target=i686-w64-windows-gnu"], ".exe"),
    "wasm": ("emcc", [], ["-sALLOW_MEMORY_GROWTH=1", "-sSTACK_SIZE=1048576"], ".html"),
}
MODULES = ["main", "itcm", "dtcm"] + [f"ov{i:03d}" for i in range(19)]
CFLAGS = ["-O1", "-g0", "-fno-pic", "-ffreestanding", "-fno-builtin", "-fno-strict-aliasing", "-fwrapv", "-fms-extensions",
          "-w", "-Wno-error=int-conversion", "-Wno-error=implicit-function-declaration", "-Wno-error=implicit-int",
          "-Wno-error=return-type", "-Wno-error=incompatible-function-pointer-types",
          "-Wno-error=address-of-temporary", "-ffunction-sections", "-fdata-sections",
          "-Dmain=ffc_main", "-Iinclude", "-Iport/include", "-include", "port/include/cw_compat.h"]


def is_asm_stub(text: str) -> bool:
    return re.search(r"^\s*asm\s+\w[^;(]*\(", text, re.M) is not None or re.search(r"\basm\s*\{", text) is not None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--target", default="host", choices=sorted(TARGETS))
    a = ap.parse_args()
    cc, tflags, lflags, exe = TARGETS[a.target]
    out = f"build/port/{a.target}"
    lines = [f"builddir = {out}", f"cc = {cc}", f"cflags = {' '.join(tflags + CFLAGS)}", "",
             "rule cc", "  command = $cc $cflags $lang -c $in -o $out", "  description = cc $in", "",
             "rule list", "  command = cp $out.rsp $out", "  rspfile = $out.rsp", "  rspfile_content = $in_newline", ""]
    objs, skipped = [], []
    for c in sorted((ROOT / "src").rglob("*.c")):
        rel = c.relative_to(ROOT)
        head = c.read_text(errors="replace")
        if is_asm_stub(head):
            skipped.append(str(rel))
            continue
        lang = "-x c++ -std=gnu++03 -fno-exceptions -fno-rtti" if "-lang c++" in head[:200] else "-x c -std=gnu99"
        o = f"{out}/obj/{rel.with_suffix('.o')}"
        objs.append(o)
        lines += [f"build {o}: cc {rel}", f"  lang = {lang}"]
    gen = f"{out}/gen"
    lls = [f"{gen}/{m}.ll" for m in MODULES] + [f"{gen}/standins.ll"]
    lines += ["", f"build {out}/objs.txt: list {' '.join(objs)}", "",
              "rule gendata", f"  command = python3 tools/port_gendata.py --objs $in --out {gen}",
              "  description = port_gendata", "",
              f"build {' '.join(lls)}: gendata {out}/objs.txt | tools/port_gendata.py", "",
              "rule ll", "  command = $cc $cflags -Wno-override-module -c -x ir $in -o $out", "",
              f"rule link", f"  command = $cc {' '.join(lflags)} @$out.rsp -o $out",
              "  rspfile = $out.rsp", "  rspfile_content = $in_newline", "  description = link $out", ""]
    gobjs = []
    for ll in lls:
        o = ll[:-3] + ".o"
        gobjs.append(o)
        lines.append(f"build {o}: ll {ll}")
    rt = f"{out}/port/runtime.o"
    lines += ["rule cc_rt", f"  command = $cc {' '.join(tflags)} -O1 -g -Iport/include -c $in -o $out", "",
              f"build {rt}: cc_rt port/src/runtime.c", ""]
    lines += [f"build {out}/ffc{exe}: link {' '.join(objs + gobjs + [rt])}", f"default {out}/ffc{exe}", ""]
    (ROOT / "port").mkdir(exist_ok=True)
    (ROOT / "port" / f"build.{a.target}.ninja").write_text("\n".join(lines))
    (ROOT / "port" / f"skipped.{a.target}.txt").write_text("".join(s + "\n" for s in skipped))
    print(f"{len(objs)} TUs, {len(skipped)} asm stubs skipped -> port/build.{a.target}.ninja")


if __name__ == "__main__":
    main()
