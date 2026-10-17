#!/usr/bin/env python3
"""Cross-repo library matching: compile library C sources from other public DS decomps (pokediamond,
pokeheartgold, pret/pokeplatinum, ...) with our mwcc and byte-match them (relocs masked) against our
not-done queue functions that docs/sdk_map.txt does not already cover as unique/fuzzy100.

usage: tools/xmatch.py compile [--repo R ...] [--jobs N]     -> work/xmatch/obj/<repo>/<variant>/...
       tools/xmatch.py match                                  -> work/xmatch/hits.txt
Variants: {arm,thumb} x {O4p,O4s}. Writes only under work/xmatch/.
"""
import argparse
import csv
import os
import struct
import subprocess
import sys
from collections import defaultdict
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402
import sdk_match  # noqa: E402

REF = Path("/home/user/ref")
WORK = ffclib.ROOT / "work" / "xmatch"
MSL = Path(os.environ.get("FFC_MSL", "/home/user/cwmsl/msl"))

BASE = ["-proc", "arm946e", "-enum", "int", "-lang", "c99", "-Cpp_exceptions", "off", "-gccext,on",
        "-msgstyle", "gcc", "-ipa", "file", "-interworking", "-inline", "on,noauto", "-char", "signed",
        "-sym", "on", "-nolink", "-w", "off", "-fp", "soft", "-gccinc"]
VARIANTS = {f"{m}_{o}": ([] if m == "arm" else ["-thumb"]) + ["-O4,p" if o == "O4p" else "-O4,s"]
            for m in ("arm", "thumb") for o in ("O4p", "O4s")}


def rdirs(root: Path):
    """-ir style: root and every subdirectory."""
    return [root] + [d for d in root.rglob("*") if d.is_dir()]


NTR = REF / "libntr"
NTR_DEFS = ["SDK_CW_FORCE_EXPORT_SUPPORT", "SDK_TS", "SDK_4M", "SDK_FINALROM", "NNS_FINALROM", "SDK_ARM9", "SDK_CW",
            "SDK_BUILD_ARM", "SDK_32BIT", "SDK_VERSION_MAJOR=5UL", "SDK_TWL", "SDK_TWLHYB", "PLATFORM_NITRO"]


def ntr_inc():
    gen = WORK / "gen"
    (gen / "nitro/fx").mkdir(parents=True, exist_ok=True)
    fxh = gen / "nitro/fx/fx_const.h"
    if not fxh.exists():
        subprocess.run([sys.executable, str(NTR / "gen/nitro/fx/gen_fx_const.py"),
                        str(NTR / "gen/nitro/fx/fx_const.csv"), str(fxh)], check=True)
    inc = [gen, NTR / "gen", NTR / "include"]
    for lib in (NTR / "libraries").iterdir():
        inc += [d for d in lib.rglob("include") if d.is_dir()]
    return inc + [MSL / d for d in ("MSL_C/MSL_ARM/Include", "MSL_C/MSL_Common/Include",
                                    "MSL_C/MSL_Common_Embedded/Math/Include", "MSL_Extras/MSL_ARM/Include",
                                    "MSL_Extras/MSL_Common/Include")]


def repo_jobs():
    pd = REF / "pokediamond"
    inc = [pd / "include"] + rdirs(pd / "include-mw") + rdirs(pd / "arm9/lib/MSL_C/include") + \
        rdirs(pd / "arm9/lib/libnns/include") + rdirs(pd / "arm9/lib/NitroSDK/include")
    defs = ["FS_IMPLEMENT", "DIAMOND", "ENGLISH"]
    for sub in ("NitroSDK", "MSL_C", "libnns"):
        for c in sorted((pd / "arm9/lib" / sub / "src").glob("*.c")):
            yield "pokediamond", sub, c, inc, defs
    pp = REF / "pret_pokeplatinum"
    for lib in ("crypto", "spl", "gds", "ppwlobby"):
        base = pp / "lib" / lib
        inc = [d for d in base.rglob("include") if d.is_dir()] + [pp / "include", pp / "lib/include"]
        inc += ntr_inc()
        for c in sorted(list(base.rglob("*.c")) + list(base.rglob("*.cpp"))):
            yield "pret_pokeplatinum", lib, c, inc, NTR_DEFS
    hg = REF / "pokeheartgold"
    for lib in ("spl", "dsprot"):
        base = hg / "lib" / lib
        inc = [d for d in base.rglob("include") if d.is_dir()] + [hg / "include", hg / "lib/include"]
        inc += ntr_inc()
        for c in sorted(base.rglob("*.c")):
            yield "pokeheartgold", lib, c, inc, NTR_DEFS + ["HEARTGOLD"]


def compile_one(job, variant):
    repo, lib, c, inc, defs = job
    o = WORK / "obj" / repo / variant / lib / (c.stem + ".o")
    o.parent.mkdir(parents=True, exist_ok=True)
    cmd = [str(ffclib.WIBO), str(ffclib.CC)] + VARIANTS[variant] + BASE
    if c.suffix == ".cpp":
        cmd += ["-lang", "c++"]
    for d in defs:
        cmd += ["-D" + d]
    for i in inc:
        cmd += ["-i", str(i)]
    cmd += ["-c", str(c), "-o", str(o)]
    env = dict(os.environ, LM_LICENSE_FILE=str(ffclib.LICENSE))
    r = subprocess.run(cmd, capture_output=True, text=True, env=env, cwd=c.parent)
    ok = r.returncode == 0 and o.exists()
    err = [l for l in (r.stdout + r.stderr).splitlines() if "error" in l.lower()]
    return repo, variant, c, ok, "\n".join(err[:3])


def cmd_compile(a):
    jobs = [j for j in repo_jobs() if not a.repo or j[0] in a.repo]
    todo = [(j, v) for j in jobs for v in VARIANTS]
    stats = defaultdict(lambda: [0, 0])
    bad = []
    with ThreadPoolExecutor(a.jobs) as ex:
        for repo, v, c, ok, msg in ex.map(lambda t: compile_one(*t), todo):
            stats[(repo, v)][0 if ok else 1] += 1
            if not ok:
                bad.append(f"== {repo} {v} {c}\n{msg}\n")
    (WORK / "failed.txt").write_text("".join(bad))
    for k, (g, b) in sorted(stats.items()):
        print(f"{k[0]:20s} {k[1]:10s} ok={g} fail={b}")


def xmask(b: bytes, addr: int, mode: str):
    """sdk_match.mask plus: in ARM mode a BL/BLX(imm) is masked including its condition byte, so a `bl` to an ARM
    callee in the source object equals the `blx` to a Thumb callee in the ROM (sdk_match misses these)."""
    m, pools = sdk_match.mask(b, addr, mode)
    if mode == "arm":
        m = bytearray(m)
        for off in range(0, len(b) - 3, 4):
            if off in pools:
                continue
            w, = struct.unpack_from("<I", b, off)
            if (w >> 25) & 7 == 5 and ((w >> 28) == 0xF or (w >> 24) == 0xEB):
                m[off:off + 4] = b"\0\0\0\0"
        m = bytes(m)
    return m, pools


def candidates():
    m = {}
    for l in (ffclib.ROOT / "docs/sdk_map.txt").read_text().splitlines():
        p = l.split()
        m[p[0]] = p[5]
    out = {}
    for r in csv.DictReader(open(ffclib.ROOT / "queue.csv")):
        if r["status"] in ("todo", "fail_sonnet", "fail_haiku", "blocked"):
            k = m.get(r["func"], "none")
            if k == "unique" or k == "fuzzy100":
                continue
            out[r["func"]] = (r["status"], k)
    return out


def cmd_match(a):
    cand = candidates()
    idx = defaultdict(list)
    n = 0
    for s, b, mode, rel in sdk_match.ffc_functions():
        if s.name not in cand:
            continue
        mb, pools = xmask(b, s.addr, mode)
        idx[sdk_match.key(mb, mode)].append((s, b, pools, rel))
        n += 1
    print(f"{n} candidate FFC functions indexed (of {len(cand)})", file=sys.stderr)
    hits = defaultdict(list)
    scanned = defaultdict(lambda: [0, set()])
    for repo_dir in sorted((WORK / "obj").iterdir()):
        for var_dir in sorted(repo_dir.iterdir()):
            for name, o, b, orels in sdk_match.obj_functions(var_dir):
                scanned[repo_dir.name][0] += 1
                scanned[repo_dir.name][1].add(name)
                for mode in ("arm", "thumb"):
                    mb, pools = xmask(b, 0, mode)
                    for s, tb, tpools, rel in idx.get(sdk_match.key(mb, mode), ()):
                        if all(b[p:p + 4] == tb[p:p + 4] for p in pools
                               if p not in orels and (s.addr + p) not in rel):
                            hits[s.name].append((repo_dir.name, var_dir.name, name, str(o.relative_to(var_dir))))
    lines = []
    for fn in sorted(hits):
        st, k = cand[fn]
        for h in hits[fn]:
            lines.append(f"{fn} {st} {k} {' '.join(h)}")
    (WORK / "hits.txt").write_text("\n".join(lines) + "\n")
    for repo, (cnt, names) in scanned.items():
        print(f"{repo}: {cnt} function-variants scanned, {len(names)} distinct names")
    print(f"{len(hits)} candidate functions with byte hits -> {WORK / 'hits.txt'}")


PREAMBLE = """#ifndef OSIntrMode
typedef unsigned long OSIntrMode;
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long OSProcMode;
typedef volatile unsigned long vu32;
#endif
#define HW_PSR_DISABLE_IRQ 0x80
#define HW_PSR_DISABLE_FIQ 0x40
#define HW_PSR_DISABLE_IRQ_FIQ 0xc0
#define HW_PSR_CPU_MODE_MASK 0x1f
"""


def extract_func(text: str, name: str):
    import re
    m = re.search(rf"^(?:static\s+)?(?:inline\s+)?[A-Za-z_][\w \*]*?\b{re.escape(name)}\s*\([^;{{]*\)\s*\{{", text, re.M)
    if not m:
        return None
    i, depth = m.end(), 1
    while depth and i < len(text):
        depth += {"{": 1, "}": -1}.get(text[i], 0)
        i += 1
    return text[m.start():i]


SRC_ROOT = {"pokediamond": REF / "pokediamond/arm9/lib", "pret_pokeplatinum": REF / "pret_pokeplatinum/lib",
            "pokeheartgold": REF / "pokeheartgold/lib"}


def cmd_emit(a):
    import re
    syms = ffclib.symbols()
    seen = {}
    for l in (WORK / "hits.txt").read_text().splitlines():
        fn, st, k, repo, var, name, obj = l.split()
        seen.setdefault(fn, (st, k, repo, var, name, obj))
    out = WORK / "matches"
    out.mkdir(exist_ok=True)
    res = []
    for fn, (st, k, repo, var, name, obj) in sorted(seen.items()):
        src = SRC_ROOT[repo] / (obj.rsplit(".", 1)[0].split("/", 1)[0]) / "src" / (obj.split("/", 1)[1].rsplit(".", 1)[0] + ".c")
        body = extract_func(src.read_text(errors="replace"), name) if src.exists() else None
        if body is None:
            res.append((fn, st, name, "NOSRC"))
            continue
        body = re.sub(r"^static\s+", "", body)
        body = re.sub(rf"\b{re.escape(name)}\b", fn, body)
        mode = syms[fn].mode or "thumb"
        pre = "#pragma thumb off\n" if mode == "arm" else "#pragma thumb on\n"
        f = out / f"{fn}.c"
        f.write_text(f'#include "ffc/types.h"\n{PREAMBLE}/* From {repo} {obj.split("/",1)[0]}/{obj.split("/",1)[1].rsplit(".",1)[0]}.c ({name}), '
                     f'matched by tools/xmatch.py. */\n{pre}\n{body}\n')
        p = subprocess.run([str(ffclib.ROOT / "tools/try"), fn, str(f)], capture_output=True, text=True)
        r = (p.stdout.splitlines() or ["?"])[0]
        if p.returncode != 0:
            (out / "nomatch").mkdir(exist_ok=True)
            f.rename(out / "nomatch" / f"{fn}.c")
        res.append((fn, st, name, r))
    for r in res:
        print(*r)


def main():
    ap = argparse.ArgumentParser()
    sp = ap.add_subparsers(dest="cmd", required=True)
    c = sp.add_parser("compile")
    c.add_argument("--repo", nargs="*")
    c.add_argument("--jobs", type=int, default=os.cpu_count())
    sp.add_parser("match")
    sp.add_parser("emit")
    a = ap.parse_args()
    WORK.mkdir(parents=True, exist_ok=True)
    {"compile": cmd_compile, "match": cmd_match, "emit": cmd_emit}[a.cmd](a)


if __name__ == "__main__":
    main()
