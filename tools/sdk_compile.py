#!/usr/bin/env python3
"""Compile libntr (TwlSDK 5, twl_hyb, ARM9) and libntrsystem (NitroSystem) .c files with our mwcc,
one object per source, for tools/sdk_match.py. Failures are logged and skipped.

usage: sdk_compile.py [--ref /home/user/ref] [--out build/sdk] [--jobs N] [--flags-variant p|s]
"""
import argparse
import os
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

ARM7_ONLY = {"exi", "nvram", "pad", "syscall", "wl_arm7", "wm_arm7", "sim", "sim7", "demo", "utest"}

BASE = ["-proc", "arm946e", "-enum", "int", "-lang", "c99", "-Cpp_exceptions", "off", "-gccext,on",
        "-msgstyle", "gcc", "-ipa", "file", "-interworking", "-inline", "on,noauto", "-char", "signed",
        "-nosyspath", "-stdinc", "-cwd", "include", "-sym", "on", "-nolink", "-w", "off"]
DEFS = ["SDK_CW_FORCE_EXPORT_SUPPORT", "SDK_TS", "SDK_4M", "SDK_FINALROM", "NNS_FINALROM",
        "SDK_ARM9", "SDK_CW",
        "SDK_BUILD_ARM", "SDK_32BIT"]


MSL = Path(os.environ.get("FFC_MSL", "/home/user/cwmsl/msl"))  # CW for DSi 1.1 ARM_EABI_Support/msl
MSL_INC = [MSL / d for d in ("MSL_C/MSL_ARM/Include", "MSL_C/MSL_Common/Include",
                             "MSL_C/MSL_Common_Embedded/Math/Include", "MSL_Extras/MSL_ARM/Include",
                             "MSL_Extras/MSL_Common/Include")]


HW_DEFS = {"twl_hyb": ["SDK_VERSION_MAJOR=5UL", "SDK_TWL", "SDK_TWLHYB"],
           "ntr5": ["SDK_VERSION_MAJOR=5UL", "SDK_NITRO"], "ntr4": ["SDK_VERSION_MAJOR=4UL"]}


def winpath(p: Path) -> str:
    return str(p)  # wibo takes host paths


def jobs_for(ref: Path, out: Path):
    ntr = ref / "libntr"
    gen = out / "gen"
    (gen / "nitro" / "fx").mkdir(parents=True, exist_ok=True)
    fxh = gen / "nitro" / "fx" / "fx_const.h"
    if not fxh.exists():
        subprocess.run([sys.executable, str(ntr / "gen/nitro/fx/gen_fx_const.py"),
                        str(ntr / "gen/nitro/fx/fx_const.csv"), str(fxh)], check=True)
    ntr_inc = [gen, ntr / "gen", ntr / "include"]
    for lib in sorted((ntr / "libraries").iterdir()):
        if not lib.is_dir() or lib.name in ARM7_ONLY:
            continue
        inc = ntr_inc + [d for d in lib.rglob("include") if d.is_dir()]
        for c in sorted(lib.rglob("*.c")):
            if "ARM7" in c.parts or "arm7" in c.parts:
                continue
            yield "ntr", lib.name, c, inc, ntr / "include/pch/nitro_pch.h"
    sys_ = ref / "libntrsystem"
    for lib in sorted((sys_ / "libraries").iterdir()):
        if not lib.is_dir():
            continue
        inc = ntr_inc + [sys_ / "include"] + [d for d in lib.rglob("include") if d.is_dir()]
        for c in sorted(lib.rglob("*.c")):
            yield "nnsys", lib.name, c, inc, None


def compile_one(job, out: Path, opt: str, hw: str, thumb: bool):
    kind, lib, c, inc, pch = job
    o = out / "obj" / kind / lib / (c.stem + ".o")
    o.parent.mkdir(parents=True, exist_ok=True)
    cmd = [str(ffclib.WIBO), str(ffclib.CC), opt] + BASE
    if thumb:
        cmd += ["-thumb"]
    for d in DEFS + HW_DEFS[hw] + (["SDK_CODE_THUMB"] if thumb else ["SDK_CODE_ARM"]):
        cmd += ["-D" + d]
    for i in inc + MSL_INC:
        cmd += ["-i", winpath(i)]
    if pch:
        cmd += ["-prefix", "pch/nitro_pch.h"]
    cmd += ["-c", winpath(c), "-o", winpath(o)]
    env = dict(os.environ, LM_LICENSE_FILE=str(ffclib.LICENSE))
    r = subprocess.run(cmd, capture_output=True, text=True, env=env, cwd=c.parent)
    ok = r.returncode == 0 and o.exists()
    err = [l for l in (r.stdout + r.stderr).splitlines() if l.strip() and "warning" not in l and "note:" not in l
           and "included from" not in l and not l.split(":", 2)[-1].startswith(("\t", "      "))]
    return c, ok, "\n".join(err[:6])


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--ref", default="/home/user/ref", type=Path)
    ap.add_argument("--out", default=ffclib.ROOT / "build" / "sdk", type=Path)
    ap.add_argument("--jobs", type=int, default=os.cpu_count())
    ap.add_argument("--opt", default="-O4,p")
    ap.add_argument("--thumb", action="store_true", help="Thumb library variant (FFC links these)")
    ap.add_argument("--hw", default="twl_hyb", choices=sorted(HW_DEFS))
    a = ap.parse_args()
    a.out = a.out.resolve()
    jobs = list(jobs_for(a.ref, a.out))
    bad = []
    with ThreadPoolExecutor(a.jobs) as ex:
        for c, ok, msg in ex.map(lambda j: compile_one(j, a.out, a.opt, a.hw, a.thumb), jobs):
            if not ok:
                bad.append((c, msg))
    (a.out / "failed.txt").write_text("".join(f"== {c}\n{m}\n" for c, m in bad))
    print(f"{len(jobs) - len(bad)}/{len(jobs)} compiled; failures in {a.out / 'failed.txt'}")


if __name__ == "__main__":
    main()
