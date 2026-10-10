#!/usr/bin/env python3
"""tools/save_wave.py <N> <Workflow outputs...> — copy wave N's best C files into pending/waveN/ and write
pending/waveN/result.json (paths rewritten), so a wave survives the container until it is integrated."""
import json
import shutil
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import ffclib  # noqa: E402
import wave_done  # noqa: E402

n, outs = sys.argv[1], sys.argv[2:]
dst = ffclib.ROOT / "pending" / f"wave{n}"
dst.mkdir(parents=True, exist_ok=True)
res = [r for o in outs for r in wave_done.load(o)]
for r in res:
    for tier in ("haiku", "sonnet"):
        b = r.get(tier)
        if b and b.get("file") and (ffclib.ROOT / b["file"]).exists():
            p = dst / f"{r['func']}.{tier}.c"
            shutil.copy(ffclib.ROOT / b["file"], p)
            b["file"] = str(p.relative_to(ffclib.ROOT))
(dst / "result.json").write_text(json.dumps(res, indent=1))
print(f"wave {n}: {len(res)} results -> {dst.relative_to(ffclib.ROOT)}/result.json")
