#!/usr/bin/env python3
"""Byte-match functions compiled by tools/sdk_compile.py against FFC functions (P1 SDK naming).

Masking is symmetric and pattern based: ARM B/BL/BLX offsets, Thumb BL/BLX pairs and every literal-pool word are
masked on both sides; a hash hit is then checked on the pool words neither side relocates (constants).
Writes a side map only (config/ is not touched).

usage: sdk_match.py [--objs build/sdk/obj ...] [--out docs/sdk_map.txt]
"""
import argparse
import hashlib
import struct
import sys
from collections import defaultdict
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402

LOAD_KINDS = {"load"}


def mask(b: bytes, addr: int, mode: str):
    """-> (masked bytes, set of pool offsets)"""
    pools = ffclib.pool_offsets(b, addr, mode)
    m = bytearray(b)
    if mode == "arm":
        for off in range(0, len(b) - 3, 4):
            if off in pools:
                m[off:off + 4] = b"\0\0\0\0"
                continue
            w, = struct.unpack_from("<I", b, off)
            if (w >> 25) & 7 == 5:  # B/BL/BLX(imm)
                # unconditional BL and BLX(imm): mask the condition byte too, so a `bl` to an ARM callee in the
                # source object equals the `blx` to a Thumb callee in the ROM (as xmatch.xmask)
                n = 4 if (w >> 28) == 0xF or (w >> 24) == 0xEB else 3
                m[off:off + n] = b"\0" * n
    else:
        off = 0
        while off < len(b) - 1:
            if off in pools and off + 4 <= len(b):
                m[off:off + 4] = b"\0\0\0\0"
                off += 4
                continue
            hw, = struct.unpack_from("<H", b, off)
            if hw & 0xF800 == 0xF000 and off + 4 <= len(b):
                m[off:off + 4] = b"\0\0\0\0"
                off += 4
                continue
            off += 2
    return bytes(m), pools


def key(mb: bytes, mode: str):
    return mode, len(mb), hashlib.blake2b(mb, digest_size=16).digest()


def ffc_functions():
    rel_cache = {}
    for s in ffclib.symbols().values():
        if s.kind != "function" or not s.size or s.module == "abs":
            continue
        try:
            b = ffclib.target_bytes(s)
        except Exception:
            continue
        if len(b) != s.size:
            continue
        mode = s.mode or "thumb"
        if s.module not in rel_cache:
            rel_cache[s.module] = ffclib.relocs(s.module)
        yield s, b, mode, rel_cache[s.module]


def obj_functions(objdir: Path):
    for o in sorted(objdir.rglob("*.o")):
        try:
            e = ffclib.Elf(o)
        except Exception:
            continue
        relsec = {}
        for fs in e.syms:
            if fs["type"] != 2 or not fs["size"] or fs["shndx"] in (0, 0xFFF1, 0xFFF2) or fs["shndx"] >= len(e.sh):
                continue
            sec = fs["shndx"]
            if sec not in relsec:
                relsec[sec] = e.relocs(sec)
            raw = e.section_bytes(sec)
            st = fs["value"] & ~1
            b = raw[st:st + fs["size"]]
            rels = {off - st: rs["name"] for off, _, rs, _ in relsec[sec] if st <= off < st + fs["size"]}
            yield fs["name"], o, b, rels


def resolve(hits, crel, byname, min_size):
    """Disambiguate by relocation targets: a candidate whose call/pointer targets contradict names already
    known (unique, non-trivial matches) is dropped; one that agrees with the most known targets wins.
    A name already owned by a unique match is removed from other functions' candidates. Iterates to a fixpoint."""
    rel_of = {}
    for fn, s in byname.items():
        if fn in hits:
            r = ffclib.relocs(s.module)
            rel_of[fn] = {a - s.addr: (to & ~1) for a, (k, to, tm) in r.items() if s.addr <= a < s.addr + s.size}
    for _ in range(10):
        known = {}
        owner = {}
        for fn, c in hits.items():
            names = {n for n, _ in c}
            if len(names) == 1 and byname[fn].size >= min_size:
                n = next(iter(names))
                known[byname[fn].addr & ~1] = n
                owner.setdefault(n, set()).add(fn)
        changed = False
        for fn, c in list(hits.items()):
            names = {n for n, _ in c}
            if len(names) == 1 and byname[fn].size >= min_size:
                continue
            scored = []
            for k in c:
                score, bad = 0, False
                for off, tname in crel.get(k, {}).items():
                    to = rel_of[fn].get(off)
                    if to is None or tname == k[0]:
                        continue
                    kn = known.get(to)
                    if kn is None:
                        continue
                    if kn == tname:
                        score += 1
                    else:
                        bad = True
                if k[0] in owner and fn not in owner[k[0]]:
                    bad = True
                if not bad:
                    scored.append((score, k))
            if not scored:
                continue
            best = max(sc for sc, _ in scored)
            keep = {k for sc, k in scored if sc == best}
            if best > 0 or len({n for n, _ in keep}) < len(names):
                if keep != c:
                    hits[fn] = keep
                    changed = True
            if best > 0:
                resolved.add(fn)
        if not changed:
            break


resolved = set()  # trivial functions confirmed by relocation targets


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--objs", nargs="+", type=Path, default=[ffclib.ROOT / "build" / "sdk" / "obj"])
    ap.add_argument("--out", type=Path, default=ffclib.ROOT / "docs" / "sdk_map.txt")
    ap.add_argument("--min-size", type=int, default=12, help="smaller matches are reported as trivial")
    a = ap.parse_args()

    idx = defaultdict(list)
    ffc = []
    for s, b, mode, rel in ffc_functions():
        mb, pools = mask(b, s.addr, mode)
        idx[key(mb, mode)].append((s, b, pools, rel))
        ffc.append(s)
    print(f"{len(ffc)} FFC functions indexed", file=sys.stderr)

    hits = defaultdict(set)   # ffc name -> {(sdk name, obj)}
    crel = {}                 # (sdk name, obj) -> {offset: target name}
    sdk_names = set()
    nobj = 0
    for objdir in a.objs:
        for name, o, b, orels in obj_functions(objdir):
            nobj += 1
            sdk_names.add(name)
            for mode in ("arm", "thumb"):
                mb, pools = mask(b, 0, mode)
                for s, tb, tpools, rel in idx.get(key(mb, mode), ()):
                    ok = all(b[p:p + 4] == tb[p:p + 4] for p in pools
                             if p not in orels and (s.addr + p) not in rel)
                    if ok:
                        k = (name, str(o.relative_to(objdir)))
                        hits[s.name].add(k)
                        crel[k] = orels
    print(f"{nobj} SDK functions scanned, {len(sdk_names)} distinct names", file=sys.stderr)

    byname = {s.name: s for s in ffc}
    resolve(hits, crel, byname, a.min_size)
    lines = []
    for fn in sorted(hits, key=lambda n: (byname[n].module, byname[n].addr)):
        s = byname[fn]
        names = sorted({n for n, _ in hits[fn]})
        objs = sorted({o for _, o in hits[fn]})
        tag = ("ambiguous" if len(names) > 1 else "trivial" if s.size < a.min_size and fn not in resolved
               else "unique")
        lines.append(f"{fn} {s.module} {s.addr:#010x} {s.mode or 'thumb'} size={s.size:#x} {tag} "
                     f"{'|'.join(names)} [{' '.join(objs[:3])}]")
    a.out.write_text("".join(l + "\n" for l in lines))
    uniq = sum(1 for l in lines if " unique " in l)
    print(f"{len(lines)} FFC functions matched ({uniq} unique) -> {a.out}", file=sys.stderr)


if __name__ == "__main__":
    main()
