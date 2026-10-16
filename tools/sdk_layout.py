#!/usr/bin/env python3
"""Layout pass over the SDK side map (tools/sdk_match.py output): the linker keeps each object's functions in
source order, so FFC functions lying between two anchors (unique matches) are named from the anchors' objects
when the count fits exactly:
  same object X, positions p < q, gap of q-p-1 functions        -> X[p+1..q-1]
  X at p (tail of X), Y at q (head of Y), gap == tail(X) + q    -> X[p+1..] + Y[..q-1]
Ambiguous entries in such a gap are resolved when the expected name is one of their candidates; a contradicting
unique match blocks the gap. New names are tagged "layout". Writes a new map; config/ is not touched.

usage: sdk_layout.py --objs DIR... [--map docs/sdk_map.txt] [--out docs/sdk_map.txt]
"""
import argparse
import difflib
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402


def obj_order(path: Path):
    e = ffclib.Elf(path)
    fs = [s for s in e.syms if s["type"] == 2 and s["size"] and 0 < s["shndx"] < 0xFF00]
    fs.sort(key=lambda s: (s["shndx"], s["value"] & ~1))
    out = []
    for s in fs:
        if s["name"] not in out:
            out.append(s["name"])
    return out


# library code only: elsewhere the anchors are tiny game functions that collide with SDK ones
SCOPE = {"main": (0x02077000, 0x0209d2b4), "itcm": (0, 1 << 32), "dtcm": (0, 1 << 32)}


def in_scope(s):
    r = SCOPE.get(s.module)
    return r is not None and r[0] <= s.addr < r[1]


def obj_bytes(path: Path):
    e = ffclib.Elf(path)
    out = {}
    for s in e.syms:
        if s["type"] == 2 and s["size"] and 0 < s["shndx"] < len(e.sh):
            st = s["value"] & ~1
            out.setdefault(s["name"], e.section_bytes(s["shndx"])[st:st + s["size"]])
    return out


def tokens(b: bytes, mode: str):
    from sdk_match import mask
    mb, _ = mask(b, 0, mode)
    w = 4 if mode == "arm" else 2
    return [mb[i:i + w] for i in range(0, len(mb) - w + 1, w)]


def align(gs, cs, sim, thr):
    """order-preserving alignment of gap functions gs to candidates cs maximizing summed similarity >= thr"""
    n, m = len(gs), len(cs)
    best = [[0.0] * (m + 1) for _ in range(n + 1)]
    for i in range(n - 1, -1, -1):
        for j in range(m - 1, -1, -1):
            v = sim(i, j)
            best[i][j] = max(best[i + 1][j], best[i][j + 1], (v + best[i + 1][j + 1]) if v >= thr else 0)
    i = j = 0
    out = []
    while i < n and j < m:
        v = sim(i, j)
        if v >= thr and best[i][j] == v + best[i + 1][j + 1]:
            out.append((i, j, v))
            i, j = i + 1, j + 1
        elif best[i][j] == best[i + 1][j]:
            i += 1
        else:
            j += 1
    return out


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--objs", nargs="+", type=Path, required=True)
    ap.add_argument("--map", type=Path, default=ffclib.ROOT / "docs" / "sdk_map.txt")
    ap.add_argument("--out", type=Path, default=None)
    ap.add_argument("--fuzzy", type=float, default=0.8, help="similarity threshold for the fuzzy pass (0 = off)")
    a = ap.parse_args()
    out = a.out or a.map

    rows = {}  # ffc name -> parsed line
    for l in a.map.read_text().splitlines():
        if not l.strip():
            continue
        p = l.split(" ", 7)
        objs = l[l.rindex("[") + 1:-1].split()
        rows[p[0]] = dict(line=l, tag=p[5], names=p[6].split("|"), objs=objs)

    cache = {}

    def order(rel):
        if rel not in cache:
            cache[rel] = None
            for d in a.objs:
                if (d / rel).exists():
                    cache[rel] = obj_order(d / rel)
                    break
        return cache[rel]

    syms = ffclib.symbols()
    added = {}
    bcache = {}

    def fbytes(rel, mode):
        dirs = sorted(a.objs, key=lambda d: ("sdk_a" in str(d)) != (mode == "arm"))
        for d in dirs:
            if (d / rel).exists():
                if (d, rel) not in bcache:
                    bcache[d, rel] = obj_bytes(d / rel)
                return bcache[d, rel]
        return {}

    for rnd in range(6):
      nprev = len(added)
      for k, v in added.items():
          p = v.split(" ", 7)
          rows[k] = dict(line=v, tag="unique", names=[p[6]], objs=[v[v.rindex("[") + 1:-1]])
      fuzzy = a.fuzzy if rnd >= 2 else 0
      for mod in sorted({s.module for s in syms.values()}):
          fs = sorted((s for s in syms.values() if s.module == mod and s.kind == "function" and s.size
                       and in_scope(s)),
                      key=lambda s: s.addr)
          anchors = []  # (index in fs, obj rel, position)
          for i, s in enumerate(fs):
              r = rows.get(s.name)
              if not r or r["tag"] != "unique" or len(r["objs"]) != 1:
                  continue
              o = order(r["objs"][0])
              if o and r["names"][0] in o:
                  anchors.append((i, r["objs"][0], o.index(r["names"][0])))
          for (i, x, p), (j, y, q) in zip(anchors, anchors[1:]):
              gap = j - i - 1
              if gap <= 0:
                  continue
              ox, oy = order(x), order(y)
              if x == y and q > p and gap == q - p - 1:
                  want = [(n, x) for n in ox[p + 1:q]]
              elif x != y and gap == len(ox) - 1 - p + q:
                  want = [(n, x) for n in ox[p + 1:]] + [(n, y) for n in oy[:q]]
              elif fuzzy:
                  cands = [(n, x) for n in ox[p + 1:(q if x == y else None)]] + ([(n, y) for n in oy[:q]] if x != y else [])
                  used = {rows[t.name]["names"][0] for t in fs if t.name in rows and rows[t.name]["tag"] == "unique"}
                  cands = [c for c in cands if c[0] not in used]
                  gs = [t for t in fs[i + 1:j] if not (rows.get(t.name) and rows[t.name]["tag"] in ("unique",))]
                  if not gs or not cands or len(gs) * len(cands) > 4000:
                      continue
                  tg = {}
                  for t in gs:
                      try:
                          tg[t.name] = tokens(ffclib.target_bytes(t), t.mode or "thumb")
                      except Exception:
                          tg[t.name] = []
                  cb = {}
                  for n, o in cands:
                      for t in gs[:1]:
                          b = fbytes(o, t.mode or "thumb").get(n)
                          cb[n] = tokens(b, t.mode or "thumb") if b else []
                  memo = {}

                  def sim(gi, cj):
                      k2 = (gi, cj)
                      if k2 not in memo:
                          ta, tb = tg[gs[gi].name], cb[cands[cj][0]]
                          r = rows.get(gs[gi].name)
                          if not ta or not tb or (r and r["tag"] == "ambiguous" and cands[cj][0] not in r["names"]):
                              memo[k2] = 0.0
                          elif min(len(ta), len(tb)) / max(len(ta), len(tb)) < fuzzy:
                              memo[k2] = 0.0
                          else:
                              memo[k2] = difflib.SequenceMatcher(None, ta, tb, autojunk=False).ratio()
                      return memo[k2]
                  for gi, cj, v in align(gs, cands, sim, fuzzy):
                      t = gs[gi]
                      n, o = cands[cj]
                      added[t.name] = (f"{t.name} {t.module} {t.addr:#010x} {t.mode or 'thumb'} size={t.size:#x} "
                                       f"fuzzy{int(v * 100)} {n} [{o}]")
                  continue
              else:
                  continue
              ok = True
              for s, (n, _) in zip(fs[i + 1:j], want):
                  r = rows.get(s.name)
                  if r and r["tag"] in ("unique", "trivial") and n not in r["names"]:
                      ok = False
                  if r and r["tag"] == "ambiguous" and n not in r["names"]:
                      ok = False
              if not ok:
                  continue
              for s, (n, o) in zip(fs[i + 1:j], want):
                  r = rows.get(s.name)
                  if r and r["tag"] == "unique":
                      continue
                  added[s.name] = (f"{s.name} {s.module} {s.addr:#010x} {s.mode or 'thumb'} size={s.size:#x} "
                                   f"layout {n} [{o}]")
      if len(added) == nprev and rnd >= 2:
          break
    lines = []
    for n, r in rows.items():
        lines.append(added.pop(n, r["line"]))
    lines += added.values()
    byname = {s.name: s for s in syms.values()}
    lines.sort(key=lambda l: (byname[l.split()[0]].module, byname[l.split()[0]].addr))
    out.write_text("".join(l + "\n" for l in lines))
    print(f"layout: {sum(1 for l in lines if ' layout ' in l)} names added -> {out}", file=sys.stderr)


if __name__ == "__main__":
    main()
