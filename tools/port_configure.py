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
import port_argaddr  # noqa: E402
import port_argpad  # noqa: E402

# `extern uint8_t func_X[];` / `extern T func_X;` where func_X is a function: the TU only takes its address, but wasm
# keeps functions and data apart (wasm-ld "symbol type mismatch"). The port compiles a copy with a function decl.
DATA_DECL_RE = re.compile(r"extern [A-Za-z0-9_ ]+\*?\s*(func_\w+)(?:\[\w*\])?\s*;")


# Absolute DS addresses in src/ (`ABS(u32, 0x0214075C)`, `(T *)0x020b2938`) that fall in a data/rodata/bss section
# of the TU's own module, main, itcm or dtcm: the port keeps those sections in host blobs (port_gendata.py), so the
# copy compiled for the port reads `(ffc_blob_<mod>_<sec> + off)` instead. Other values (hardware registers, the
# shared 0x027ff/0x02fff area, code addresses) stay as they are: the HAL maps the DS address space for those.
LVALUE_CAST_RE = re.compile(r"\(\(([A-Za-z_]\w*\s*\*)\)\s*([A-Za-z_]\w*)\s*\)\s*=(?!=)")
HEX_RE = re.compile(r"\b0[xX]0*([0-9a-fA-F]{7,8})([uUlL]*)\b")
BLOB_SECS = None


def blob_sections():
    global BLOB_SECS
    if BLOB_SECS is None:
        import port_gendata
        BLOB_SECS = {m: [(f"ffc_blob_{m}{n}".replace(".", "_"), lo, hi) for n, lo, hi, kind in port_gendata.port_sections(m, d)
                         if kind != "code"] for m, d in ffclib.module_dirs()}
    return BLOB_SECS


def rewrite_abs(text: str, mod: str) -> str:
    secs = blob_sections()
    order = [mod] + [m for m in ("main", "itcm", "dtcm") if m != mod]
    used = set()

    def sub(m):
        v = int(m[1], 16)
        if not 0x01ff8000 <= v < 0x03000000:
            return m[0]
        for md in order:
            for name, lo, hi in secs.get(md, ()):
                if lo <= v < hi or (v == hi and name.endswith("_bss")):
                    used.add(name)
                    return f"((__SIZE_TYPE__)({name} + {v - lo:#x}))"
        return m[0]

    out = HEX_RE.sub(sub, text)
    if not used:
        return text
    decl = "".join(f"FFC_EXTERN_C unsigned char {n}[];\n" for n in sorted(used))
    return ("#ifdef __cplusplus\n#define FFC_EXTERN_C extern \"C\"\n#else\n#define FFC_EXTERN_C extern\n#endif\n"
            + decl + "#line 1\n" + out)


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
             ["-flto", "-O1", "-sGLOBAL_BASE=256MB", "-sINITIAL_MEMORY=512MB", "-sALLOW_MEMORY_GROWTH=1", "-sSTACK_SIZE=1048576", "-sERROR_ON_UNDEFINED_SYMBOLS=1", "-sASYNCIFY", "-sASYNCIFY_STACK_SIZE=65536"], ".js"),
}
LIFT_CHUNKS = 32
EMSDK = os.environ.get("EMSDK", "/home/user/emsdk")
MODULES = ["main", "itcm", "dtcm"] + [f"ov{i:03d}" for i in range(19)]
CFLAGS = ["-O1", "-g0", "-fno-omit-frame-pointer", "-funwind-tables", "-fno-pic", "-ffreestanding", "-fno-builtin", "-fno-strict-aliasing", "-fwrapv", "-fms-extensions",
          "-w", "-Wno-error=int-conversion", "-Wno-error=implicit-function-declaration", "-Wno-error=implicit-int",
          "-Wno-error=return-type", "-Wno-error=incompatible-function-pointer-types",
          "-Wno-error=address-of-temporary", "-ffunction-sections", "-fdata-sections",
          "-Dmain=ffc_main", "-Iinclude", "-Iport/include", "-include", "port/include/cw_compat.h"]


# A function definition at top level: `T func_X(args) {` (args may span lines).
DEF_RE = re.compile(r"^[A-Za-z_][^;\n{}()=]*?\b(func_\w+)\s*\([^;{}]*\)\s*\{", re.M)


def is_asm_stub(text: str) -> bool:
    return re.search(r"^\s*asm\s+\w[^;(]*\(", text, re.M) is not None or re.search(r"\basm\s*\{", text) is not None


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--target", default="host", choices=sorted(TARGETS))
    a = ap.parse_args()
    cc, tflags, lflags, exe = TARGETS[a.target]
    out = f"build/port/{a.target}"
    lines = [f"builddir = {out}", f"emsdk = {EMSDK}", f"cc = {cc}", f"cflags = {' '.join(tflags + CFLAGS)}", "",
             "rule cc", f"  command = $cc -I{out}/include $cflags $lang -MD -MF $out.d -c $in -o $out", "  deps = gcc",
             "  depfile = $out.d", "  description = cc $in", "",
             "rule list", "  command = cp $out.rsp $out", "  rspfile = $out.rsp", "  rspfile_content = $in_newline", ""]
    objs, skipped, fixed = [], [], []
    # include/ as the port sees it: prototypes padded like the TUs (port_argpad.pad_header), searched before include/.
    for h in sorted((ROOT / "include").rglob("*.h")):
        dst = ROOT / out / "include" / h.relative_to(ROOT / "include")
        dst.parent.mkdir(parents=True, exist_ok=True)
        txt = port_argpad.pad_header(h.read_text(errors="replace"))
        if not dst.exists() or dst.read_text() != txt:
            dst.write_text(txt)
    fnames = function_names()
    # Functions port/src overrides (sdk_override.c): a src/ TU defining one is left out (its other functions get
    # lifted like any undefined function).
    overrides = set()
    for c in (ROOT / "port" / "src").glob("*.c"):
        overrides |= set(DEF_RE.findall(c.read_text()))
    for c in sorted((ROOT / "src").rglob("*.c")):
        rel = c.relative_to(ROOT)
        head = c.read_text(errors="replace")
        if is_asm_stub(head) or overrides & set(DEF_RE.findall(head)):
            skipped.append(str(rel))
            continue
        lang = "-x c++ -std=gnu++03 -fno-exceptions -fno-rtti" if "-lang c++" in head[:200] else "-x c -std=gnu99"
        o = f"{out}/obj/{rel.with_suffix('.o')}"
        objs.append(o)
        src = rel
        fixed_text = DATA_DECL_RE.sub(lambda m: f"void {m[1]}();" if m[1] in fnames else m[0], head)
        fixed_text = port_argpad.pad_text(fixed_text, str(rel))
        fixed_text = port_argaddr.rewrite(fixed_text)
        # mwcc lvalue cast `((T *)x) = v` -> `(*(T **)&x) = v` (clang rejects the cast as an lvalue).
        fixed_text = LVALUE_CAST_RE.sub(lambda m: m[0] if re.search(r"[*\w)\]]\s*$", fixed_text[max(0, m.start() - 8):m.start()])
                                        else f"(*({m[1]}*)&{m[2]}) =", fixed_text)
        fixed_text = rewrite_abs(fixed_text, rel.parts[1])
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
        lines.append(f"build {o}: cc_rt port/src/{c.name} | " + " ".join(f"port/src/{h.name}" for h in sorted((ROOT / "port" / "src").glob("*.h"))))
    lls = [f"{gen}/{m}.ll" for m in MODULES] + [f"{gen}/standins.ll"]
    # Thumb functions no TU defines are lifted to C (tools/port_lift.py) instead of becoming trap stand-ins.
    lift = f"{out}/lift"
    lift_cs = [f"{lift}/lift_{k:03d}.c" for k in range(LIFT_CHUNKS)]
    lift_os = [c[:-2] + ".o" for c in lift_cs]
    lines += ["", f"build {out}/objs.txt: list {' '.join(objs + rts)}", "",
              "rule lift", f"  command = NM={nm} python3 tools/port_lift.py --objs $in --out {lift} --chunks {LIFT_CHUNKS}",
              "  description = port_lift", "",
              f"build {' '.join(lift_cs)}: lift {out}/objs.txt | tools/port_lift.py tools/port_argpad.py tools/port_argaddr.py tools/port_argcheck.py", "",
              "rule cc_lift", f"  command = $cc {' '.join(tflags)} -O1 -g0 -fno-omit-frame-pointer -funwind-tables -w -fno-pic -ffreestanding -fno-builtin "
              "-fno-strict-aliasing -fwrapv -ffunction-sections -c $in -o $out", "  description = cc $in", ""]
    lines += [f"build {o}: cc_lift {c}" for c, o in zip(lift_cs, lift_os)]
    lines += ["", f"build {out}/objs_all.txt: list {' '.join(objs + rts + lift_os)}", "",
              "rule gendata", f"  command = NM={nm} python3 tools/port_gendata.py --objs $in --out {gen}",
              "  description = port_gendata", "",
              f"build {' '.join(lls)}: gendata {out}/objs_all.txt | tools/port_gendata.py", "",
              "rule ll", "  command = $cc $cflags -Wno-override-module -c -x ir $in -o $out", "",
              f"rule link", f"  command = {ld} {' '.join(lflags)} @$out.rsp -o $out",
              "  rspfile = $out.rsp", "  rspfile_content = $in_newline", "  description = link $out", ""]
    gobjs = []
    for ll in lls:
        o = ll[:-3] + ".o"
        gobjs.append(o)
        lines.append(f"build {o}: ll {ll}")
    lines += [f"build {out}/ffc{exe}: link {' '.join(objs + gobjs + rts + lift_os)}", f"default {out}/ffc{exe}", ""]
    (ROOT / "port").mkdir(exist_ok=True)
    (ROOT / "port" / f"build.{a.target}.ninja").write_text("\n".join(lines))
    (ROOT / "port" / f"skipped.{a.target}.txt").write_text("".join(s + "\n" for s in skipped))
    print(f"{len(objs)} TUs ({len(fixed)} rewritten: function-as-data decls, absolute data addresses), {len(skipped)} asm stubs/overridden TUs skipped -> port/build.{a.target}.ninja")
    print(f"port_argaddr: {port_argaddr.STATS['defs']} defs with address-taken parameters")


if __name__ == "__main__":
    main()
