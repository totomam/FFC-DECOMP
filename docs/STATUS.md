# Status / Handoff

## Phase
0 done → 2/4 starting. Full ARM9 rebuild matches: `ninja` → `dsd check modules` all 22 modules OK.
2,995 functions are matching C (V54 set + pilot wave + clone pass), 16,355 todo in `queue.csv`.

## Done (session 3)
- Pilot wave (8 funcs): 6 Haiku + 1 Sonnet + 1 manual = 8/8 integrated; ~94k subagent tokens total.
- **Link flag `-nodead`** (was `-dead`): unreferenced matched objects were dead-stripped → whole-ROM shift.
- `tools/clone.py`: groups functions by asm *shape* (immediates/pool/symbol operands → `@`); for a todo func
  with a matched same-shape donor, rewrites the donor C (symbol renames + int literal map), verifies with
  `tools/try`, integrates. First run: **2,775 functions** cloned, all integrated in one build. `run` takes ~10 min.
  Shape cache: `work/shapes.json` (delete if symbols.txt changes).
- Waves now pass only names: `mkwave.py ... --names [--dedup]`; workers run `tools/prompt <func> <tier>`.
  `--dedup` = one rep per todo shape, biggest groups first (40 reps covered 2,682 funcs).
- `tools/workflows/match_wave.js` (Workflow scriptPath; args = name list) → `tools/wave_done.py <task .output>`
  integrates + updates queue (unintegrable matches kept in `pending/`). Then `tools/clone.py run`.
- Prompt tip added: passthrough args / stack 5th arg (the pilot's only Haiku+Sonnet failure).

## Done (session 2)
- dsd patches: main `.rodata` between `.exceptix` and `.init` (TWL layout; was shifting every overlay by 0x8880);
  gap delink files may share names in `dsd lcf`. Config re-inited (additive diff only); DSProt_BSS_ovNNN kept.
- `tools/configure.py` (ninja; from ph). Default target = `check_modules`. `check_symbols` fails on ov017/ov018
  data symbols (overlapping ITCM-region overlays) — not a byte mismatch, not yet fixed.
- `tools/ffclib.py` shared lib; `tools/try <func> <file.c>` (MATCH / capped diff, relocation-aware: BL/BLX/ABS32
  resolved from symbols.txt); `tools/asm <func>` (annotated target asm); `tools/integrate` (precheck → TU
  `src/<module>/<func>.c` + `complete` entry in delinks.txt → ninja → bisect/revert on failure; serial, locked);
  `tools/triage.py` → `queue.csv`; `tools/port_v54.py` (headers → include/ffc, per-function candidates in work/v54);
  `tools/mkwave.py <tier> <n>` → JSON items (func, prompt) for a Workflow wave, marks them `queued`.
- Compiler default 1.2p2 (build 1028; V54: all builds tie). Flags in `ffclib.CC_FLAGS` (configure imports
  nothing yet — keep both in sync). Per-file override on line 1: `/* cflags: -nothumb -nointerworking */`.

## Next steps (in order)
1. Loop: `python3 tools/mkwave.py haiku 40 --dedup --names > work/waveN.json` → Workflow
   `{scriptPath: tools/workflows/match_wave.js, args: <names>}` → `python3 tools/wave_done.py <task .output>`
   → `python3 tools/clone.py run` → commit. Remaining multi-member shapes first, then singletons; then sonnet tier.
2. 89 V54 behavioural non-matches: queue notes point at `work/v54/<func>.c` (regenerate with `port_v54.py check`).
3. Integrate limits: refuses functions with .data/.rodata (string literals, statics), non-4-aligned starts (14),
   non-zero padding. Next: multi-function TUs + data sections.
4. Phase 1 SDK signature labelling (`dsd sig`), naming pass later.
5. `configure.py` should import flags from `ffclib` to avoid drift; the integrated V54 files carry whole V54
   preambles (dedupe into headers later).

## Fresh-session bootstrap
No uploads needed. ROM parts + CodeWarrior zips live in the **private** repo `totomam/ffc-assets`
(attach it with add_repo, push access not needed). Then:
```sh
tools/setup.sh                     # builds patched dsd, wibo, 7zz
tools/fetch_assets.sh              # clones ffc-assets → .assets/ (or symlink an existing clone there)

tools/setup.sh .assets/cw          # stages mwccarm/mwldarm + license into tools/mwccarm/
tools/bin/dsd rom extract --rom rom/baserom_usa.nds --output-path extract/usa
python3 tools/configure.py && ninja   # delink + lcf + compile + link + check modules
```
`config/usa` is committed (from `dsd init --allow-unknown-function-calls`); don't re-run init unless needed.

## ROM
- `VDEE`, KASEKI2, 256 MiB. SHA-1 `f8263e010974259a955124b5395ec00f25079c35`, CRC32 `4b3bcd26`.
- Differs from V54's ROM hash, but the decompressed ARM9 SHA-256 matches V54's
  (`d053d0bf…5530b`), so V54's ARM9 addresses are valid.
- DSi-enhanced (TWL SDK), DS Protect in ov015/ov016, 19 overlays, 19,432 functions found (main ARM9: 8,163).

## dsd/ds-rom patches (tools/patches)
- ds-rom: ARM9 without footer (`has_footer`), TWL 16-byte autoload entries (`twl_extra`), DTCM at `0x2fe0000`.
- ds-decomp: uses patched ds-rom; `.ctor` runner search tries every entry call (TWL entry has an extra call after it);
  DS Protect relocations from overlays into main are allowed.
- `dsd rom build` still fails (DSi banner unsupported). Plan: verify per-module (`dsd check modules`);
  identical modules mean an identical ROM.

## Toolchain
- mwccarm builds 1024/1027/1028/1036 (hashes match V54); mwldarm 2.0 build 99. ~50 ms/compile under wibo.
- GitHub release downloads are blocked by this environment's network policy; `git clone` works.

## Orchestration (measured)
- 2 agents per workflow; concurrent workflows stack (3×2 ran at once).
- Haiku baseline ~47k tokens. `fn-matcher` agent type (Bash/Read/Write only) is available in new sessions.
- Context guard hook (`.claude/hooks/context_guard.py`) warns the orchestrator at 180k context.

## Prior work (V54)
- 871 functions mapped; 206 byte-exact, 77 behavioural. C sources + catalog committed in `reference/v54/`
  (`src/`, `include/`, `functions.csv`); to be ported after the build matches.
