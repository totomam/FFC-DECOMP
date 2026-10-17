#!/usr/bin/env python3
"""Port: check port_argpad's register-passthrough padding against the ROM machine code.

port_argpad pads a short call g(a) to g(a, <caller param 1>, ...), assuming r1-r3 (and r0) still hold the caller's incoming
arguments at the `bl`. That is wrong when the caller wrote r_i earlier (e.g. loaded a global into r0). For every padded
argument taken from the caller's own parameter i, this tool disassembles the caller from the ROM, finds the bl/blx sites
that target the callee, scans backwards (linearly) to the function start for the first instruction writing r_i
(bl/blx clobber r0-r3) and reports it. No writer before the function start = OK (true passthrough).

usage: port_padcheck.py [--out work/port_padcheck.txt] [--fix] [--only CALLER] [-j N]
  --fix   compare src/ against the existing build/port/host/fix/src/ copies instead of running pad_text()
  --selftest  check func_02008bb0 -> func_0201ab3c arg 0 (known writer: ldr r0,[r0] of data_020b93b8) and exit
  --only  restrict to one caller function (e.g. --fix --only func_02008bb0 for the self-test)
"""
import argparse
import re
import subprocess
import sys
from multiprocessing import Pool
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import port_argpad as ap  # noqa: E402

ROOT = ap.ROOT
EXT = ROOT / "extract" / "usa"
CFG = ROOT / "config" / "usa" / "arm9"
SYM_RE = re.compile(r"^(\w+) kind:function\((arm|thumb),size=(0x[0-9a-f]+)\) addr:(0x[0-9a-f]+)")
COND = r"(?:eq|ne|cs|hs|cc|lo|mi|pl|vs|vc|hi|ls|ge|lt|gt|le|al)?(?:\.[nw])?"
NOWRITE = re.compile(r"^(?:str[bhd]?|stm\w*|cmp|cmn|tst|teq|push|b|bx|nop|svc|swi)" + COND + "$")
CALL = re.compile(r"^blx?" + COND + "$")
LDM = re.compile(r"^(?:ldm\w*|pop)" + COND + "$")
LONGMUL = re.compile(r"^[us](?:mull|mlal)s?" + COND + "$")
REGS = {"sl": 10, "fp": 11, "ip": 12, "sp": 13, "lr": 14, "pc": 15}
LINE = re.compile(r"^\s*([0-9a-f]+):\t[0-9a-f ]+\t(\S+)\s*(.*)$")


def regnum(s):
    s = s.strip().rstrip("!")
    return int(s[1:]) if re.fullmatch(r"r\d+", s) else REGS.get(s)


def reglist(ops):
    out = set()
    m = re.search(r"\{(.*)\}", ops)
    for part in (m[1].split(",") if m else []):
        part = part.strip()
        if "-" in part:
            a, b = (regnum(x) for x in part.split("-"))
            out |= set(range(a, b + 1))
        elif regnum(part) is not None:
            out.add(regnum(part))
    return out


def writes(mn, ops):
    """Set of registers (r0-r3 relevant) written by one instruction."""
    if CALL.match(mn):
        return {0, 1, 2, 3}
    if NOWRITE.match(mn) or mn.startswith("."):
        return set()
    if LDM.match(mn):
        w = reglist(ops)
        if mn.startswith("pop") and 15 in w:
            return set()  # a return: code before it belongs to another path
        if "!" in ops.split("{")[0]:
            w.add(regnum(ops.split("{")[0].split(",")[0]))
        return w
    parts = [p.strip() for p in ops.split(",")]
    first = regnum(parts[0]) if parts and parts[0] else None
    w = set() if first is None else {first}
    if LONGMUL.match(mn) and len(parts) > 1 and regnum(parts[1]) is not None:
        w.add(regnum(parts[1]))
    return w


def load_symbols():
    """name -> (addr, size, thumb, binfile, base); regions by address (itcm / arm9 / overlay)."""
    import yaml
    ov = {o["id"]: o for o in yaml.safe_load((EXT / "arm9_overlays" / "overlays.yaml").read_text())["overlays"]}
    itcm = yaml.safe_load((EXT / "arm9" / "itcm.yaml").read_text())
    main = yaml.safe_load((EXT / "arm9" / "arm9.yaml").read_text())
    syms = {}
    files = [(CFG / "symbols.txt", None), (CFG / "itcm" / "symbols.txt", None)]
    files += [(p / "symbols.txt", int(p.name[2:])) for p in sorted((CFG / "overlays").glob("ov*"))]
    for path, ovid in files:
        if not path.exists():
            continue
        for line in path.read_text().splitlines():
            m = SYM_RE.match(line)
            if not m or m[1] in syms:
                continue
            addr, size = int(m[4], 16), int(m[3], 16)
            if ovid is not None:
                f, base = EXT / "arm9_overlays" / f"ov{ovid:03d}.bin", ov[ovid]["base_address"]
            elif itcm["base_address"] <= addr < itcm["base_address"] + itcm["code_size"]:
                f, base = EXT / "arm9" / "itcm.bin", itcm["base_address"]
            else:
                f, base = EXT / "arm9" / "arm9.bin", main["base_address"]
            syms[m[1]] = (addr, size, m[2] == "thumb", str(f), base)
    return syms


def padded_sites(rel, text, fixtext=None):
    """[(caller, callee, i)] for args supplied by padding from the caller's own parameter i."""
    new = fixtext if fixtext is not None else ap.pad_text(text, rel)
    if new == text:
        return []
    so, sn = ap.scan(text), ap.scan(new)
    tn = ap._nocomment(new)
    groups = {}
    for tag, sc in (("o", so), ("n", sn)):
        for c in sc["calls"]:
            if c["encl"]:
                groups.setdefault((c["encl"]["name"], c["name"]), {"o": [], "n": []})[tag].append(c)
    out = set()
    for (caller, callee), g in groups.items():
        for co, cn in zip(g["o"], g["n"]):
            if cn["k"] <= co["k"]:
                continue
            m = re.match(r"\s*\(", tn[cn["pos"] + len(callee):])
            args = ap.split_args(tn[cn["pos"] + len(callee) + m.end():cn["close"]])
            ps = co["encl"]["params"]
            for i in range(co["k"], min(cn["k"], 4)):
                if i < len(ps) and ap.param_info(ps[i])[0] and i < len(args) and args[i] != "0":
                    out.add((caller, callee, i))
    return sorted(out)


def check_caller(job):
    """job = (caller, [(callee, i)], caller_sym, {callee: addr}) -> list of (status, callee, i, bl_addr, writer)."""
    caller, pairs, (addr, size, thumb, binf, base), taddr = job
    cmd = ["arm-none-eabi-objdump", "-D", "-b", "binary", "-marm"] + ([] if not thumb else ["-Mforce-thumb"]) + [
        f"--adjust-vma={base}", f"--start-address={addr}", f"--stop-address={addr + size}", binf]
    ins = []
    for line in subprocess.run(cmd, capture_output=True, text=True).stdout.splitlines():
        m = LINE.match(line)
        if m:
            ins.append((int(m[1], 16), m[2], re.split(r"\s[@;]", m[3])[0].strip(), ))
    res = []
    for callee, i in pairs:
        sites = [k for k, (a, mn, ops) in enumerate(ins)
                 if CALL.match(mn) and (m := re.fullmatch(r"0x([0-9a-f]+)", ops.split()[0] if ops else "")) and int(m[1], 16) == taddr[callee]]
        if not sites:
            res.append(("missing", callee, i, 0, ""))
        for k in sites:
            wr = next((ins[j] for j in range(k - 1, -1, -1) if i in writes(ins[j][1], ins[j][2])), None)
            res.append(("sus" if wr else "ok", callee, i, ins[k][0], f"{wr[0]:08x}: {wr[1]} {wr[2]}" if wr else ""))
    return caller, res


def main():
    a = argparse.ArgumentParser()
    a.add_argument("--out", type=Path, default=ROOT / "work" / "port_padcheck.txt")
    a.add_argument("--fix", action="store_true")
    a.add_argument("--only")
    a.add_argument("--selftest", action="store_true")
    a.add_argument("-j", type=int, default=4)
    a = a.parse_args()
    syms = load_symbols()
    if a.selftest:
        r = check_caller(("func_02008bb0", [("func_0201ab3c", 0)], syms["func_02008bb0"], {"func_0201ab3c": syms["func_0201ab3c"][0]}))[1]
        print(r)
        sys.exit(0 if r and r[0][0] == "sus" else 1)
    sites = set()
    for c in sorted((ROOT / "src").rglob("*.c")):
        rel = str(c.relative_to(ROOT))
        text = c.read_text(errors="replace")
        fixtext = None
        if a.fix:
            f = ROOT / "build/port/host/fix" / rel
            if not f.exists():
                continue
            fixtext = f.read_text(errors="replace")
        sites |= {s for s in padded_sites(rel, text, fixtext) if not a.only or s[0] == a.only}
    total = len(sites)
    byc, missing = {}, 0
    for caller, callee, i in sorted(sites):
        if caller not in syms or callee not in syms:
            missing += 1
            continue
        byc.setdefault(caller, []).append((callee, i))
    jobs = [(c, p, syms[c], {g: syms[g][0] for g, _ in p}) for c, p in byc.items()]
    with Pool(a.j) as pool:
        results = pool.map(check_caller, jobs, chunksize=8)
    ok = sus = 0
    lines = []
    for caller, res in results:
        bad = {(g, i) for st, g, i, _, _ in res if st == "sus"}
        miss = {(g, i) for st, g, i, _, _ in res if st == "missing"} - bad
        goodpairs = {(g, i) for st, g, i, _, _ in res} - bad - miss
        ok += len(goodpairs)
        sus += len(bad)
        missing += len(miss - goodpairs)
        lines += [(syms[caller][0], f"{caller}\t{g}\targ{i}\tbl@{b:08x}\twriter {w}") for st, g, i, b, w in res if st == "sus"]
    a.out.parent.mkdir(exist_ok=True)
    summary = f"padded calls checked {total}: OK {ok}, suspicious {sus}, not-found-in-ROM {missing}"
    a.out.write_text("".join(l + "\n" for _, l in sorted(lines)) + "# " + summary + "\n")
    print(summary, "->", a.out)


if __name__ == "__main__":
    main()
