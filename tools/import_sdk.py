#!/usr/bin/env python3
"""tools/import_sdk.py [--out work/sdk_import] [--kinds unique,fuzzy100,layout] [--status a,b] [funcs...]

For non-done queue functions that docs/sdk_map.txt maps to a libntr/libntrsystem function, build a standalone C
file from the SDK source and verify it with tools/try-equivalent logic.

Pipeline per function:
  1. preprocess the SDK source (mwcc -EP, same flags/defines as tools/sdk_compile.py; ARM or Thumb variant),
  2. split into top-level declarations and keep only the dependency closure of the SDK function
     (other functions -> prototypes, file-scope data -> extern declarations, static inlines kept whole),
  3. compile with the project flags, map every relocation of the function to our symbol via config relocs.txt
     and rename (SDK name -> func_/data_ name), then compare bytes exactly (ffclib.resolve_func).
Writes <out>/<func>.c on MATCH and <out>/results.txt (func status sdk-name MATCH|NO MATCH|SKIP reason)."""
import argparse
import csv
import os
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402
import sdk_compile as sc  # noqa: E402

REF = Path("/home/user/ref")
ROOT = ffclib.ROOT
IDENT = re.compile(r"[A-Za-z_]\w*")
KW = {"struct", "union", "enum", "typedef", "static", "extern", "const", "volatile", "inline", "void", "int",
      "char", "short", "long", "unsigned", "signed", "float", "double", "return", "if", "else", "for", "while",
      "do", "switch", "case", "default", "break", "continue", "sizeof", "goto", "register", "asm", "__asm"}


# ---------------------------------------------------------------- preprocessing
_jobs = {}


def source_for(objpath: str):
    """'ntr/mi/mi_dma.o' -> (job tuple) or None"""
    parts = objpath.split("/")
    if len(parts) != 3 or parts[0] not in ("ntr", "nnsys"):
        return None
    if not _jobs:
        for j in sc.jobs_for(REF, ROOT / "work" / "sdk_import" / "gen"):
            _jobs[(j[0], j[1], j[2].stem)] = j
    return _jobs.get((parts[0], parts[1], Path(parts[2]).stem))


_pp_cache = {}


def preprocess(job, thumb: bool, outdir: Path):
    kind, lib, c, inc, pch = job
    key = (str(c), thumb)
    if key in _pp_cache:
        return _pp_cache[key]
    dst = outdir / "pp" / f"{kind}_{lib}_{c.stem}_{'t' if thumb else 'a'}.i"
    dst.parent.mkdir(parents=True, exist_ok=True)
    if not dst.exists():
        cmd = [str(ffclib.WIBO), str(ffclib.CC), "-O4,p"] + sc.BASE + (["-thumb"] if thumb else [])
        for d in sc.DEFS + sc.HW_DEFS["twl_hyb"] + (["SDK_CODE_THUMB"] if thumb else ["SDK_CODE_ARM"]):
            cmd += ["-D" + d]
        for i in inc + sc.MSL_INC:
            cmd += ["-i", str(i)]
        if pch:
            cmd += ["-prefix", "pch/nitro_pch.h"]
        cmd += ["-EP", str(c)]
        env = dict(os.environ, LM_LICENSE_FILE=str(ffclib.LICENSE))
        r = subprocess.run(cmd, capture_output=True, text=True, env=env, cwd=c.parent)
        if r.returncode != 0 or not r.stdout.strip():
            _pp_cache[key] = None
            return None
        dst.write_text(r.stdout)
    _pp_cache[key] = dst.read_text()
    return _pp_cache[key]


# ---------------------------------------------------------------- chunking
def chunks(text: str):
    """Split preprocessed C into top-level declarations (strings)."""
    out, i, n = [], 0, len(text)
    start, depth, paren = 0, 0, 0
    firstbrace = None
    while i < n:
        ch = text[i]
        if depth == 0 and paren == 0 and ch == "#" and text[start:i].strip() == "":
            j = text.find("\n", i)
            j = n if j < 0 else j
            out.append(text[i:j].strip())
            i = start = j + 1
            continue
        if ch in "\"'":
            q = ch
            i += 1
            while i < n and text[i] != q:
                i += 2 if text[i] == "\\" else 1
        elif ch == "(":
            paren += 1
        elif ch == ")":
            paren -= 1
        elif ch == "{":
            if depth == 0:
                firstbrace = i
            depth += 1
        elif ch == "}":
            depth -= 1
            if depth == 0:
                pre = text[start:firstbrace].rstrip()
                if pre.endswith(")") or re.search(r"\)\s*(__attribute__\s*\(\(.*\)\))?$", pre):
                    out.append(text[start:i + 1].strip())
                    start = i + 1
        elif ch == ";" and depth == 0 and paren == 0:
            out.append(text[start:i + 1].strip())
            start = i + 1
        i += 1
    rest = text[start:].strip()
    if rest:
        out.append(rest)
    return [c for c in out if c]


def strip_braces(s: str) -> str:
    out, d = [], 0
    for ch in s:
        if ch == "{":
            d += 1
        elif ch == "}":
            d -= 1
        elif d == 0:
            out.append(ch)
    return "".join(out)


def split_func(c: str):
    """(header text before the body '{', body or None)"""
    d = 0
    for i, ch in enumerate(c):
        if ch == "(":
            d += 1
        elif ch == ")":
            d -= 1
        elif ch == "{" and d == 0:
            pre = c[:i].rstrip()
            if pre.endswith(")") or re.search(r"\)\s*(__attribute__\s*\(\(.*\)\))?$", pre):
                return pre, c[i:]
            return c, None
    return c, None


def decl_name(head: str):
    """Declared identifier of a declaration without braces (function, variable or typedef)."""
    h = re.sub(r"__attribute__\s*\(\(.*?\)\)", "", head)
    h = re.sub(r"\[[^\]]*\]", "", h)
    h = h.split("=", 1)[0]
    m = re.search(r"\(\s*\*+\s*(\w+)", h)
    if m:
        return m[1]
    if "(" in h:
        ids = IDENT.findall(h[:h.index("(")])
    else:
        ids = IDENT.findall(h)
    ids = [x for x in ids if x not in KW]
    return ids[-1] if ids else None


def defined_names(c: str):
    if c.startswith("#"):
        return set()
    names = set(m[2] for m in re.finditer(r"\b(struct|union|enum)\s+(\w+)", c))
    pre, body = split_func(c)
    if body is not None:
        n = decl_name(pre)
        return names | ({n} if n else set())
    if re.search(r"\benum\b[^;{]*\{", c):
        for m in re.finditer(r"\{([^{}]*)\}", c):
            for part in m[1].split(","):
                ids = IDENT.findall(part.split("=")[0])
                if ids:
                    names.add(ids[0])
    n = decl_name(strip_braces(c).rstrip(";") if "{" in c else c.rstrip(";"))
    if n:
        names.add(n)
    return names


class Unit:
    def __init__(self, text):
        self.chunks = chunks(text)
        self.defs = [defined_names(c) for c in self.chunks]
        self.by_name = {}
        for i, ds in enumerate(self.defs):
            for d in ds:
                self.by_name.setdefault(d, []).append(i)

    def kind(self, i):
        c = self.chunks[i]
        if c.startswith("#"):
            return "pragma"
        pre, body = split_func(c)
        if body is not None:
            if re.search(r"\binline\b|\b__inline\b", pre):
                return "inline"
            return "func"
        if re.match(r"\s*typedef\b", c):
            return "typedef"
        if "(" in strip_braces(c).split("=")[0] and not re.search(r"\(\s*\*", c.split("=")[0]):
            return "proto"
        if re.match(r"\s*(static\s+|extern\s+)*(const\s+)?(struct|union|enum)\s+\w*\s*(\{.*\})?\s*;$", c, re.S):
            return "tag"
        return "var"

    def build(self, target: str, bodies: bool):
        """Return (text, error). `bodies`: keep other same-file functions as static bodies instead of prototypes."""
        if target not in self.by_name:
            return None, f"{target} not in preprocessed source"
        tix = [i for i in self.by_name[target] if self.kind(i) in ("func", "inline")]
        if not tix:
            return None, f"{target} has no body in source"
        need, keep, work = set(), set(), []
        order = {}

        def want(i):
            if i not in keep:
                keep.add(i)
                work.append(i)
        for i in tix:
            want(i)
        while work:
            i = work.pop()
            c = self.chunks[i]
            k = self.kind(i)
            if k in ("func",) and not (i in tix) and not bodies:
                c = split_func(c)[0]
            ids = set(IDENT.findall(c))
            for name in ids:
                for j in self.by_name.get(name, ()):
                    if j != i:
                        want(j)
        # asm functions cannot be rebuilt
        if re.search(r"\basm\b", self.chunks[tix[0]]):
            return None, "asm function"
        out = []
        for i in sorted(keep):
            c = self.chunks[i]
            k = self.kind(i)
            if c.startswith("#pragma"):
                out.append(c)
                continue
            if c.startswith("#"):
                continue
            if k == "func":
                if i in tix:
                    c = re.sub(r"^\s*static\s+", "", c)
                elif bodies:
                    pass
                else:
                    pre = re.sub(r"^\s*static\s+", "", split_func(c)[0])
                    c = pre + ";"
            elif k == "proto":
                c = re.sub(r"^\s*static\s+", "", c)
            elif k == "var":
                c = re.sub(r"\s*=\s*\{.*\}\s*;$", ";", c, flags=re.S)
                c = re.sub(r"\s*=[^;{]*;$", ";", c)
                c = re.sub(r"^\s*static\s+", "", c)
                if not re.match(r"\s*extern\b", c):
                    c = "extern " + c
            out.append(c)
        return "\n".join(out) + "\n", None


# ---------------------------------------------------------------- remap + verify
def remap(text: str, sdkname: str, func: str, sym, workdir: Path):
    """Compile text (written to workdir/func.c), return (new text, None) or (None, reason)."""
    dst = workdir / f"{func}.c"
    dst.write_text(text)
    obj, msg = ffclib.compile_c(dst, workdir / "obj")
    if obj is None:
        err = [l for l in msg.splitlines() if "rror" in l] or msg.splitlines() or ["?"]
        return None, "compile error: " + err[0][:140]
    e = ffclib.Elf(obj)
    fs = [s for s in e.syms if s["name"] == sdkname and s["shndx"] not in (0, 0xFFF1, 0xFFF2)]
    if not fs:
        return None, f"symbol {sdkname} not in object"
    fs = fs[0]
    start = fs["value"] & ~1
    rl = ffclib.relocs(sym.module)
    ren = {}
    for off, typ, rs, add in e.relocs(fs["shndx"]):
        if not (start <= off < start + fs["size"]) or rs["name"] == sdkname:
            continue
        r = rl.get(sym.addr + off - start)
        if rs["shndx"] != 0 or not rs["name"]:
            # literal / static data / jump table: no name in C
            return None, f"reloc +{off - start:#x} against local data ({rs['name'] or 'section'})"
        if r is None:
            return None, f"no reloc at +{off - start:#x} for {rs['name']}"
        kind, to, tmod = r
        tgt = ffclib.ref_name(sym.module, kind, to - add if typ == 2 else to, tmod)
        if tgt.startswith("0x"):
            return None, f"{rs['name']} -> {tgt} has no symbol"
        if ren.get(rs["name"], tgt) != tgt:
            return None, f"{rs['name']} maps to two targets"
        ren[rs["name"]] = tgt
    ren[sdkname] = func
    for old, new in ren.items():
        if old != new and re.search(rf"\b{re.escape(new)}\b", text):
            return None, f"name clash {new}"
    pat = r"(?<![\w.>])(" + "|".join(map(re.escape, sorted(ren, key=len, reverse=True))) + r")\b"
    return re.sub(pat, lambda m: ren[m[1]], text), None


def verify(func: str, path: Path):
    p = subprocess.run([str(ROOT / "tools/try"), func, str(path)], capture_output=True, text=True)
    first = (p.stdout.splitlines() or ["?"])[0]
    return p.returncode == 0, first, p.stdout


def process(row, outdir: Path):
    func, sdk, objs, mode = row["func"], row["sdk"], row["objs"], row["mode"]
    sym = ffclib.symbols().get(func)
    srcs = [source_for(o) for o in objs]
    srcs = [s for s in srcs if s]
    if not srcs:
        return "SKIP", "no libntr/libntrsystem source for " + " ".join(objs)
    work = outdir / "work" / func
    work.mkdir(parents=True, exist_ok=True)
    best = ("SKIP", "?")
    variants = [True, False] if mode == "thumb" else [False, True]
    for job in srcs:
        for thumb in variants:
            pp = preprocess(job, thumb, outdir)
            if pp is None:
                best = ("SKIP", f"preprocess failed ({job[2].name})")
                continue
            if "unit" not in job_cache.setdefault((str(job[2]), thumb), {}):
                job_cache[(str(job[2]), thumb)]["unit"] = Unit(pp)
            unit = job_cache[(str(job[2]), thumb)]["unit"]
            for bodies in (False, True):
                text, err = unit.build(sdk, bodies)
                if err:
                    best = ("SKIP", err)
                    break
                flags = [] if mode == "thumb" else ["-nothumb"]
                head = f"/* cflags: {' '.join(flags)} */\n" if flags else ""
                head += f"/* From libntr {job[2].relative_to(REF)} ({'thumb' if thumb else 'arm'} build): {sdk} */\n"
                new, err = remap(head + text, sdk, func, sym, work)
                if err:
                    best = ("SKIP", err)
                    continue
                dst = outdir / f"{func}.c"
                dst.write_text(new)
                ok, first, _ = verify(func, dst)
                if ok:
                    return "MATCH", f"{first} [{'thumb' if thumb else 'arm'}{' +bodies' if bodies else ''}]"
                best = ("NO MATCH", first + f" [{'thumb' if thumb else 'arm'}{' +bodies' if bodies else ''}]")
                if (best[1].startswith("COMPILE ERROR") or best[1].startswith("ERROR")):
                    best = ("SKIP", "recompile failed: " + first)
    return best


job_cache = {}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out", type=Path, default=ROOT / "work" / "sdk_import")
    ap.add_argument("--kinds", default="unique,fuzzy100,layout")
    ap.add_argument("--status", default="fail_sonnet,todo,blocked,skip_integrate")
    ap.add_argument("--jobs", type=int, default=4)
    ap.add_argument("funcs", nargs="*")
    a = ap.parse_args()
    kinds = set(a.kinds.split(","))
    stats = set(a.status.split(","))
    q = {r["func"]: r for r in csv.DictReader(open(ROOT / "queue.csv"))}
    rows = []
    for l in (ROOT / "docs/sdk_map.txt").read_text().splitlines():
        p = l.split(" ", 6)
        if len(p) < 7:
            continue
        func, kind = p[0], p[5]
        if func not in q or q[func]["status"] not in stats or (a.funcs and func not in a.funcs):
            continue
        if kind not in kinds and not (kind.startswith("fuzzy") and "fuzzy" in kinds):
            continue
        rest = p[6]
        m = re.match(r"(\S+) \[(.*)\]$", rest)
        if not m or "|" in m[1]:
            continue
        rows.append(dict(func=func, status=q[func]["status"], kind=kind, sdk=m[1], objs=m[2].split(),
                         mode=p[3]))
    a.out.mkdir(parents=True, exist_ok=True)
    res = {}

    def run(r):
        try:
            return r, process(r, a.out)
        except Exception as ex:  # keep the batch going
            return r, ("SKIP", f"exception {type(ex).__name__}: {ex}")
    # warm the shared caches serially for thread safety
    with ThreadPoolExecutor(a.jobs) as ex:
        lines = []
        for r, (st, why) in ex.map(run, rows):
            lines.append(f"{r['func']} {r['status']} {r['sdk']} {st} {why}")
            print(lines[-1], flush=True)
    (a.out / "results.txt").write_text("\n".join(lines) + "\n")


if __name__ == "__main__":
    main()
