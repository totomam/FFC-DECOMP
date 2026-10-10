# Status / Handoff

## Phase
0 done → 2/4 starting. Full ARM9 rebuild matches: `ninja` → `dsd check modules` all 22 modules OK.
**6,691+ functions matching C (~34%)** (see `cut -d, -f5 queue.csv | sort | uniq -c`). Build: 22/22 modules OK.

## Done (session 6)
- Speed-up plan steps 1, 2 and 4 are done; step 3 is code-complete but untested:
  1. Hook: `agent_id`/`agent_type` verified in subagent PostToolUse input (debug dump, 1-agent Workflow), guard skips them.
     fn-matcher.md: ignore guard messages, never git/docs. **But the Workflow harness relays the main user request to
     every worker and says it overrides the task text**: workers saw the whole campaign prompt; one (wave 8, workflow 3)
     abandoned its function and polled the clone pass for 45 min waiting to "do the session" (stopped). match_wave.js
     now tells workers to ignore session-level requests. **Keep the orchestrator's user prompt short, or check workers.**
  2. `ffclib.queue_update()` (flock `.queue.lock` + temp + `os.replace`) in mkwave/wave_done/clone; `FFC_QUEUE` env
     override. wave_done takes several outputs + `--dry` (prints CSV diff). Validated: wave 7 rebuilt from fd3a51a's
     queue diff → dry replay reproduces it exactly, as one file and split in two.
  3. `tools/cycle.py N <outputs...> [--next 240] [--bg]`: mkwave N+1 (split 60/file → work/waveN+1_<i>.json), then wave
     matches + clone.find(extra=wave matches as donors) → ONE integrate → queue → commit → push. **Not yet run.**
     Link timing with/without `-map closure,unused` not measured yet.
  4. Haiku cap 10; near-sibling hints in prompts (reg-renamed or one-instruction-different done shape: 289 haiku todo
     shapes); fixed tools/prompt (used removed mkwave.QUEUE).
- Clone pass after w7: 228 cloned, integrate was still bisecting (overlay 4 failures) at handoff — **lost with the
  container; rerun** (cheap: cycle.py's clone step covers it).
- Wave 8 (4×60, first 240-name wave): 211/239 matched, ~3M subagent tok, ~10 min per workflow. Results + sources saved
  in `pending/wave8/result.json` (paths point at pending/wave8/*.c). **Not integrated.** func_ov001_0218b304 never
  finished (still `queued` → set back to todo). Wave 8's rows are `queued` in queue.csv.
- New blockers seen in w8: CP15 mrc/mcr (func_02087f04, func_02087f14) and CPSR mrs/msr (func_02088978) — not C, mark
  blocked (or allow as asm like swi stubs: decide). func_ov015_021d6304 DS Protect → blocked. func_02075780 needs
  `func_021640d1` in abs_symbols.txt. func_020376e0: literal-pool 0xf that mwcc always folds to movs.

## Done (session 5)
- Clone pass after w5: +277 (first run aborted: I broke the baseline mid-pass — never edit delinks/src while a clone
  pass may integrate). Wave 6: 56/60 (51 Haiku/5 Sonnet, ~850k tok, 10 min, run as 2 concurrent workflows of 30).
  Clone after w6: +133. Wave 7: 59/60 (54 Haiku/5 Sonnet, ~760k tok). **Clone pass after w7 NOT run yet.**
  Queue at handoff: 305 blocked    6883 done      18 fail_sonnet       1 status   12204 todo
- **Context-guard hook also fires inside wave subagents** (it reads the main transcript): in w7, 2 Haiku workers
  abandoned their function, rewrote STATUS.md and pushed (reverted; Sonnet then matched both). Fixed:
  the hook now exits early when its input has `agent_id`.
- **Absolute call targets**: `config/usa/arm9/abs_symbols.txt` = the 103 `module:none` call targets in relocs.txt
  (runtime-loaded code at 0x021d....; ov017/ov018 ambiguity). `tools/lcf_post.py` (lcf rule) defines them in the lcf;
  ffclib loads them as module `abs`, so prompts/try show `func_021d9ad8` etc. func_02082908 done.
- **Unaligned TUs** (replaces "multi-function TUs"): thumb funcs at addr%4==2. `tools/elf_align.py 2` lowers .text
  addralign on dsd gap objects (delink rule) and on unaligned complete TUs (mwcc rule); `lcf_post.py` wraps those
  objects in `ALIGNALL(2)`/`ALIGNALL(4)`. integrate: TU end is exact when non-zero bytes follow (else rounds over zero
  padding); refuses overlaps. All 11 blocked BIOS swi stubs integrated; unaligned todos now go through waves/clone.
- clone.py re-reads queue.csv before writing (mkwave's `queued` marks survive overlap); wave_done keeps `done` when
  a clone pass integrated a wave function first.
- func_ov016_02145358 blocked: DS Protect anti-tamper asm (ov015/ov016 obfuscated code is not C).
- Looked at, not done: C++ thunks are not adjacent to their target (func_0200d460 → func_0200d400): MW emits them
  with the vtable, so they need .data (vtable) TU support. `__sinit_*` store into .data globals (dynamic init) →
  need .init + .ctor + owning the globals' .data range in one TU.

## Done (session 4)
- Wave 3 clone pass: +752. Waves: w4 58/60 (56 Haiku/2 Sonnet, 712k tok, 11 min), w5 56/60 (52 Haiku/4 Sonnet, 849k tok, 15 min).
  Clone pass after w4: +283. **Wave 5 integrated via wave_done at handoff — clone pass after w5 NOT run yet.**
- **func_0200d5ec shape solved (C++)**: `/* cflags: -lang c++ */`, `extern "C"`, x - x routed through
  `inline int diff(const Num &a, int b)` where `Num` has a ctor + empty dtor → unfolded `subs` + 4-byte frame.
  mwcc emits the dtor out of line (weak, MW bind 13) → new `tools/strip_weak.py` (run by configure for C++ files)
  zeroes unreferenced weak .text sections (the original link dead-stripped them). 72/73 of the group done.
  Prompt tip added for `subs rX,rX,rX`.
- clone.py: second rewrite variant maps *derived* donor literals (`0x43<<2`=0x10c etc.; tried-cache key `f|d|d`).
- mkwave --dedup: a shape with a done sibling is re-queued once clone.py tried every pair and failed; the prompt
  then shows the sibling's matched C (`sibling_extra`). Unlocks e.g. 46/38/33-member haiku groups.
- Waiting on processes: `pgrep -f "clone.py run"` matches the waiting shell itself — use `pgrep -f "^python3 tools/clone"`.
- Unknown-symbol call: func_02082908 (96.6%) calls 0x021d9ad8 (no symbol) — add a symbol to unblock.
- Not started: C++ thunks (need class TUs + mangled names), `__sinit_*` (.init/.ctor/.bss TU: 42 in main, 121 in
  overlays), SWI asm decision: **decided — asm allowed for BIOS swi stubs only** (`wave_done.swi_stub`);
  7 integrated, 11 blocked (unaligned / padding → need multi-function TUs; `asm void f(void) { swi N\n bx lr }`).

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
- Waves: w2 40 reps → 33 (28 Haiku/5 Sonnet, 533k tok); w3 60 reps → 54 (32/22, 795k tok; Sonnet ran without
  its prompt — a `{}` in the mkwave template broke `tools/prompt`, now fixed: **escape braces in TEMPLATE tips**).
  Clone passes after w1/w2: +2,775, +527, +1,579. **Wave 3's clone pass NOT run yet** — run it first.
- `wave_done.py` rejects inline-asm matches except BIOS swi stubs (decided session 4).
- Blocked: 141 C++ this-adjust thunks (shape of func_0200d460: `push {r2}; ldr r2,=-0x80; ...; pop {pc}`) —
  compiler-generated, need C++ class TUs; 163 `__sinit_*` (break dsd; need .ctor/.init TU support).
- Manual (Opus) findings: PMF/8-byte struct args passed by value show as `push {r0-r3}` + `[sp,#0x14]` loads
  (func_020315ac). func_0200d5ec shape (73 funcs, tier→opus): unfolded `subs r1,r1,r1` + 4-byte frame; plain C,
  pointer diffs and inline helpers all fold — maybe C++ (`-lang c++` + `extern "C"` via per-file cflags, untested).
- clone.py: parallel verify (4 cpus), negative cache `work/clone_tried.json`, maps raw addresses of
  address-named symbols (V54 donors use `0x020ACEE0` literals). `run` can exceed 30 min with bisects: run with
  `nohup` in background with a long timeout. A killed integrate leaves applied-but-unrecorded TUs: if `ninja`
  passes, record them as done (see git log "Clone pass after wave 2").

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

## Speed-up plan (audited end of session 5; implement in this order)
Measured: link (mwld, `build/usa/arm9.o`) ~395 s and runs twice per wave = most of the ~40 min cycle. A 33-agent
Workflow takes ~5 min; Haiku agent median 12 s, context peak median ~11k (max 22.5k) with fn-matcher — the old 47k
baseline is obsolete. Clone ceiling: only ~1,389 haiku + 637 sonnet todo funcs still have a reachable donor; ~10k need
their own agent (~170 waves of 60 at the current size).
1. Hook: verify `agent_id` reaches context_guard in subagents (temporary debug hook dumping stdin keys, 1-agent
   Workflow). Fallback: skip when the hook's `tool_use_id` is absent from the main transcript tail. Add to
   `.claude/agents/fn-matcher.md`: ignore guard messages, never touch git or docs/.
2. queue.csv: flock + write-temp/`os.replace` in mkwave, wave_done, clone (all rewrite it non-atomically; workers read
   it via tools/prompt). wave_done accepts several Workflow outputs and integrates once. Validate: replay
   work/wave7_result.json in a dry run → identical queue diff.
3. One link per cycle: clone.py takes the wave's matched `work/<func>/*.c` as donors (donor_src reads only src/ and
   pending/ today), then a single integrate for wave + clone. Time the link without `-map closure,unused` (14.6 MB
   xMAP, unused by tools). Overlap: integrate wave N while wave N+1 matches (try needs only extract/ + symbols.txt).
   Validate: 22/22 modules; integrated count = wave + clone.
4. Bigger waves: 4 Workflows × 60 names (8 concurrent agents, under the 10 guideline). One cycle command
   (wave_done → clone → mkwave → commit) printing ~3 lines. Haiku try cap 6 → 10; near-sibling C (register-renamed /
   one-instruction-different done shapes: ~156 shapes) as prompt hints via sibling_extra. Expect ~8× per session
   (240 names per ~20 min cycle).
5. Parallel sessions last: module-group filter for mkwave and clone.py (clone.py today integrates any module →
   duplicate TUs / delinks conflicts across branches). Balanced groups: main+itcm (4,814 todo) / ov000-003 (3,617) /
   ov004-016 (3,773). Row-keyed queue merge (each row from the branch owning its module); only the orchestrator edits
   tools/ and STATUS.md; after each merge: full ninja + one clone pass (178 todo shapes span groups). Child sessions
   hand off by spawning a fresh session. Pilot: 2 branches × 1 wave, merge, ninja, queue totals = 19,410. ~2.5× more.
Dropped after audit: packing several funcs per Haiku agent (saves <5%), mechanical fuzzy clone (rewritten donor C
compiles to the donor's own instructions), baseline-build stamp (ninja is already a no-op on an unchanged tree).

## Next steps (in order)
0. Integrate wave 8 + clone pass in one link (first real test of cycle.py):
   `nohup python3 tools/cycle.py 8 pending/wave8/result.json --next 240 > work/cycle8.log 2>&1` (writes wave 9 files
   first). Validate 22/22 modules and integrated = wave + clone. Then time the link without `-map closure,unused`.
   Then use `--bg` to overlap integrate N with matching N+1.
1. Loop: `python3 tools/mkwave.py haiku 60 --dedup --names > work/waveN.json` → Workflow
   `{scriptPath: tools/workflows/match_wave.js, args: <names>}` → `python3 tools/wave_done.py <task .output>`
   → `python3 tools/clone.py run` → commit. Remaining multi-member shapes first, then singletons; then sonnet tier.
   Run each 60-name wave as two Workflows of 30 (they run concurrently).
2. 89 V54 behavioural non-matches: queue notes point at `work/v54/<func>.c` (regenerate with `port_v54.py check`).
3. Integrate limits: refuses functions with .data/.rodata (string literals, statics), unaligned ARM.
   Next: data-section TUs (unblocks string-literal funcs, C++ vtables+thunks, __sinit).
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

## Handoff template
At the context guard: update this file, push, then give the user a **paste-ready prompt** for the next session:
branch, bootstrap line, the first pending step (e.g. "wave N's clone pass not run yet"), the wave loop commands,
the keep-in-mind list (brace escaping, pgrep self-match, killed-integrate recovery, asm = swi stubs only,
C++ via cflags), optional manual items, and "end with a paste-ready handoff prompt".
