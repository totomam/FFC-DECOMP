#!/usr/bin/env python3
"""P2: write port/build.ninja, a host build of every src/ TU (clang -m32 or Emscripten wasm32).

Objects go to build/port/<target>/obj/. src/ is compiled as-is; CodeWarrior-isms are handled by flags and the
force-included port/include/cw_compat.h. BIOS asm stubs (src/main/{Div,Sqrt,...}.c with mwcc `asm` bodies) are
skipped: the port supplies C replacements in port/src/.

usage: port_configure.py [--target host|wasm|win32] ; then `ninja -f port/build.ninja`
"""
import argparse
import os
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import ffclib  # noqa: E402

# `extern uint8_t func_X[];` / `extern T func_X;` where func_X is a function: the TU only takes its address, but wasm
# keeps functions and data apart (wasm-ld "symbol type mismatch"). The port compiles a copy with a function decl.
DATA_DECL_RE = re.compile(r"extern [A-Za-z0-9_ ]+\*?\s*(func_\w+)(?:\[\w*\])?\s*;")


def function_names() -> set:
    out = set()
    for _, d in ffclib.module_dirs():
        for line in (d / "symbols.txt").read_text().splitlines():
            m = ffclib.SYM_RE.match(line)
            if m and m[2] == "function":
                out.add(m[1])
    return out

TARGETS = {  # cc, flags, link flags, executable suffix
    # The executable is linked at 0x40000000 so the DS address space (0x01ff8000-0x0a010000) can be mapped as-is
    # (port/src/hal.c); wasm leaves it free by putting static data at GLOBAL_BASE 0x10000000.
    "host": ("clang", ["-m32", "-fno-pie"], ["-m32", "-no-pie", "-Wl,-Ttext-segment=0x40000000"], ""),
    "win32": ("clang", ["--target=i686-w64-windows-gnu"],
              ["--target=i686-w64-windows-gnu", "-fuse-ld=lld", "-static", "-Wl,--image-base,0x40000000"], ".exe"),
    # wasm: -flto makes the whole game one LLVM module, so WebAssemblyFixFunctionBitcasts adapts calls whose
    # prototype differs between TUs (plain wasm-ld rejects them: "function signature mismatch").
    "wasm": ("$emsdk/upstream/bin/clang", ["--target=wasm32-unknown-emscripten", "-flto"],
             ["-flto", "-O1", "-sGLOBAL_BASE=0x10000000", "-sINITIAL_MEMORY=512MB", "-sALLOW_MEMORY_GROWTH=1", "-sSTACK_SIZE=1048576", "-sERROR_ON_UNDEFINED_SYMBOLS=1"], ".js"),
}
EMSDK = os.environ.get("EMSDK", "/home/user/emsdk")
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
    lines = [f"builddir = {out}", f"emsdk = {EMSDK}", f"cc = {cc}", f"cflags = {' '.join(tflags + CFLAGS)}", "",
             "rule cc", "  command = $cc $cflags $lang -c $in -o $out", "  description = cc $in", "",
             "rule list", "  command = cp $out.rsp $out", "  rspfile = $out.rsp", "  rspfile_content = $in_newline", ""]
    objs, skipped, fixed = [], [], []
    fnames = function_names()
    for c in sorted((ROOT / "src").rglob("*.c")):
        rel = c.relative_to(ROOT)
        head = c.read_text(errors="replace")
        if is_asm_stub(head):
            skipped.append(str(rel))
            continue
        lang = "-x c++ -std=gnu++03 -fno-exceptions -fno-rtti" if "-lang c++" in head[:200] else "-x c -std=gnu99"
        o = f"{out}/obj/{rel.with_suffix('.o')}"
        objs.append(o)
        src = rel
        fixed_text = DATA_DECL_RE.sub(lambda m: f"void {m[1]}();" if m[1] in fnames else m[0], head)
        if fixed_text != head:
            src = Path(out) / "fix" / rel
            (ROOT / src).parent.mkdir(parents=True, exist_ok=True)
            if not (ROOT / src).exists() or (ROOT / src).read_text() != fixed_text:
                (ROOT / src).write_text(fixed_text)
            lang += f" -I{rel.parent}"
            fixed.append(str(rel))
        lines += [f"build {o}: cc {src}", f"  lang = {lang}"]
    ld = "$emsdk/upstream/emscripten/emcc" if a.target == "wasm" else "$cc"
    nm = "$emsdk/upstream/bin/llvm-nm" if a.target == "wasm" else "nm"
    gen = f"{out}/gen"
    rts = []
    rt_cc = "$emsdk/upstream/emscripten/emcc -flto" if a.target == "wasm" else f"$cc {' '.join(tflags)}"
    lines += ["rule cc_rt", f"  command = {rt_cc} -O1 -g -Iport/include -Iport/src -c $in -o $out", ""]
    for c in sorted((ROOT / "port" / "src").glob("*.c")):
        o = f"{out}/port/{c.stem}.o"
        rts.append(o)
        lines.append(f"build {o}: cc_rt port/src/{c.name} | port/src/hal.h")
    lls = [f"{gen}/{m}.ll" for m in MODULES] + [f"{gen}/standins.ll"]
    lines += ["", f"build {out}/objs.txt: list {' '.join(objs + rts)}", "",
              "rule gendata", f"  command = NM={nm} python3 tools/port_gendata.py --objs $in --out {gen}",
              "  description = port_gendata", "",
              f"build {' '.join(lls)}: gendata {out}/objs.txt | tools/port_gendata.py", "",
              "rule ll", "  command = $cc $cflags -Wno-override-module -c -x ir $in -o $out", "",
              f"rule link", f"  command = {ld} {' '.join(lflags)} @$out.rsp -o $out",
              "  rspfile = $out.rsp", "  rspfile_content = $in_newline", "  description = link $out", ""]
    gobjs = []
    for ll in lls:
        o = ll[:-3] + ".o"
        gobjs.append(o)
        lines.append(f"build {o}: ll {ll}")
    lines += [f"build {out}/ffc{exe}: link {' '.join(objs + gobjs + rts)}", f"default {out}/ffc{exe}", ""]
    (ROOT / "port").mkdir(exist_ok=True)
    (ROOT / "port" / f"build.{a.target}.ninja").write_text("\n".join(lines))
    (ROOT / "port" / f"skipped.{a.target}.txt").write_text("".join(s + "\n" for s in skipped))
    print(f"{len(objs)} TUs ({len(fixed)} with function-as-data decls rewritten), {len(skipped)} asm stubs skipped -> port/build.{a.target}.ninja")


if __name__ == "__main__":
    main()
