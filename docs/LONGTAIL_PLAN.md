# GOAL (human, session 17): PC port + browser port
Browser = the same port built with Emscripten (wasm32). Design constraints from day one: 32-bit pointers (matches
the 32-bit host plan), renderer on GLES3/WebGL2 (no desktop-GL-only or compute features), single-threaded main
loop (fibers/asyncify, no reliance on pthreads), SDL audio/input, user picks the ROM, saves in IndexedDB/OPFS.
Every function must end up as C (matching or functionally equivalent); exact match is a means, not the end.
Leftover hard functions -> NONMATCHING C verified by differential testing (emulated original vs our C), not
endless matching rounds. SDK/hardware code is reimplemented by the port layer rather than decompiled.
See reports/DS decomp long tail strategy.md for the matching-side tactics.

# 90% cut plan (session 17, 2026-10-16) — supersedes the phase order below; needs the human's OK on D1-D3

## Why the current pace doesn't scale (queue at 2f95dc16)
- Left: 2,050 fail_sonnet + 1,000 todo + 377 blocked + ~500 ov002 functions missing from symbols.
- By bytes, the remaining code is **bigger than what's done**: done 0.90 MB, fail_sonnet 0.42 MB, todo 0.64 MB
  (189 todo >= 1 KB, 514 opus-tier). Function count (84%) overstates progress.
- Sonnet re-runs: 25% per round, falling each round. fail_sonnet best_pct: 544 >= 90%, ~885 < 50% after 2 Sonnet passes.
- Fixed overhead per session: ~45 min cold bootstrap + approval stall, ~25-30 min mwld per integrate, an Opus
  orchestrator that wakes up for every wave (its tokens are not in the ~$45 STATUS figure).
- Keep going like this: ~15-20 more sessions, hundreds to thousands of dollars, and the hard tail never converges.

## Decisions for the human
- **D1. Define "done".** The ROM already relinks 22/22 (unmatched code stays as delinked asm). Proposal: done =
  every function is matched C **or** an asm fallback (khdays-decomp model: 100% linked, ~96% C). LLM spend only
  where expected yield is high; everything else stays asm until tools get cheaper. This is the biggest lever.
- **D2. LLM budget cap** for everything below: <= $100 total, no Opus (or a 30-function Opus pilot max).
- **D3. Move the orchestrator to Sonnet** (or run whole wave loops as one Workflow script, so nobody waits per wave).

## Step 1: free (CPU only, no LLM), do first
1. **Prebuilt toolchain.** Put tools/bin (dsd, wibo, 7zz), the staged tools/mwccarm and extract/ into
   totomam/ffc-assets as a tarball; setup.sh untars it if it's present. Add an environment setup script / SessionStart
   hook so the approval stall goes away. Optional: ship a build/ cache too. Bootstrap 45 min -> ~5 min; children work again.
2. **One link per session.** Bank matches with tools/try only; integrate + clone once at the end (integrate already
   pins breakers by byte diff). Saves ~25 min per wave.
3. **Triage = blocked.** Mark the non-C misses as blocked (DS Protect ov015 stubs/tables, clz soft-float, 8-reg
   ldm/stm copies, epilogue-only fragments, this-adjust veneers): they stop costing LLM attempts.
4. **CPU variant search on the 544 near misses (>= 90%).** `tools/variants.py`: take the best saved attempt in
   pending/, apply mechanical mutations (statement/declaration order, temp add/remove, signed/unsigned, u8/u16/int
   widths, `-O4` vs `-O4,p`, volatile pins, loop form), compile in batched wibo calls (~50 ms each, 4 cores =
   ~250k tries/hour), keep the first MATCH. Zero tokens. It doesn't feed back into the LLM (Lewis's noise warning).
   Gate: < 5% of the 544 matched -> drop it.
5. **Clone extension + fuzzy donors** (Phase 1.3 / 2.3): register-renamed and one-instruction-different donors, coddog
   ratio. Each new match fans out to siblings for free.
6. **arcnid:** recheck their repo, fix the 3 duplicate-prototype imports, then add the missing symbols
   (tail-call targets 0x0216b128, 0x021553c4, ...; the ~500 ov002 vtable-only functions arcnid already has) and
   import their C for them. That gets new functions matched without inventing anything.

## Step 2: targeted LLM, cheap tier only, ranked by expected matches per dollar
- Candidates: todo haiku/sonnet tier (486, never tried), and fail_sonnet 80-89% with a classified miss the prompt can
  name. Rank by (clone siblings unlocked) x P(match). **Skip** < 50% fail_sonnet and >= 1 KB functions (D1: asm).
- Lower per-attempt cost: cap tools/try runs at 8 (most matches come early; measure from transcripts first, gate:
  keep the cap only if the match rate drops < 3 points), trim the prompt's examples, give the classified diff of the
  previous attempt instead of a cold start.
- Run as one Workflow per group per session, at the end of Step 1 (so free matches are clone donors first).

## Expected effect (estimates, check after Step 1)
- Wall time: ~1 h less overhead per session (bootstrap + per-wave links); the free steps run unattended.
- Money: Step 1 ~$0 in LLM; Step 2 <= $100 vs the open-ended Sonnet+Opus long tail (~$1-3k estimated).
- Matches: Step 1 targets several hundred (near misses + clones + arcnid + missing symbols) for no LLM spend.
- Record actual results and cost per step in STATUS.

# Long-tail plan (drafted + audited session 14, 2026-10-13; NOT started)

Deferred plan for everything after the Sonnet tier. Supersedes and extends "Next phase: Opus tier" in STATUS.md.
**Start only when the human says so.** Each phase has a gate; on a miss, stop and ask.
An independent audit (session 14) checked every claim below against the repo and the reference repos.

## Starting point (queue.csv at HEAD 934e1bf5)
- done 15,571 · fail_sonnet 2,289 · todo 1,163 · blocked 377 · skip_integrate 9 · fail_haiku 1.
- fail_sonnet by group: main 919 / ov0-3 674 / ov4-18 696; best_pct >= 90: 242 / 201 / 194 (637 total, 138 >= 98).
  Opus-tier todo: 138 / 177 / 202. (STATUS line 67 group figures are stale; these replace them.)
- Leverage: 646 haiku+sonnet todo are held back by busy shapes, e.g. 263/266 ov4-18 sonnet todo share a shape with
  a fail_sonnet function. One match of such a shape lets clone.py clear its siblings.
- blocked by note: `__sinit` 163 · C++ this-adjust thunk 141 · system register access (mcr/mrc/mrs/msr) 71 ·
  DS Protect asm 1 · breaks ov4 1.
- Toolchain: dsd pinned at upstream HEAD `c408063` (+ local patches); CodeWarrior for DSi `1.2p2` (TWL SDK).
- Compare is relocation-exact (verified): `ffclib.resolve_func` rewrites extern relocs to real addresses,
  wildcards nothing, and an unresolved reloc forces NO MATCH. integrate then runs `dsd check modules`.
  sm64ds's WRONG-DEST bug (wildcarded reloc slots) cannot happen here.

## Sources (read 2026-10-13) and licenses
| Source | Use | License |
|---|---|---|
| tangosdev/sm64ds-decomp | 100% matched, LLM-driven, CW "2004/b56". Ideas + portable tools | MIT (port with attribution) |
| sturmds/advance-wars-dual-strike-decomp | 100%, dsd-based, LLM-driven; docs/data-tool.md, bss-tool.md, issues/ | CC0 |
| Yokimitsuro/khdays-decomp | 100% linked incl. asm stubs (main 96% C) | CC0 |
| **arcnid/ffc-decomp** (same game, same ROM; active 2026-10-13) | see "Parallel FFC decomp" below; **import code** | none (usable, credit it) |
| pret/pokeplatinum, pokeheartgold, pokediamond, pmd-sky | SDK in C (code usable) | none (usable, credit it) |
| GoldieLeGenie/DQIV-DECOMP | technique + code | none (usable, credit it) |
| taxicat1/dsprot (21 version branches) | DS Protect code | none (usable, credit it) |
| AetiasHax/ds-decomp (dsd) | already used | - |
| simonlindholm/decomp-permuter | supports arm32 + mwcc | MIT |
| Chris Lewis, "The Long Tail of LLM-Assisted Decompilation" | Similar-matched-function examples were the main lever. He tried a permuter and **removed it** (noise, overfitted code, LLM "doom loops"). Cleaner matched code gives better examples. | - |

Compiler caveat: every reference repo uses CodeWarrior *for DS* (2.0/spXpY, 1.2/b56); FFC uses CW *for DSi*
1.2p2. The version numbers are not comparable, so codegen notes and SDK code transfer only where `tools/try` says so.
awesome-decomp-games "Tools" section: recompilers and launchers only, nothing for matching.

## Parallel FFC decomp: arcnid/ffc-decomp (added session 14)
Independent matching decomp of Fossil Fighters Champions (USA), the same ROM. LLM agent waves, ov002 (battle) first:
1,141 / 1,382 ov002 functions in C (82.6%), the rest asm fallback. Full 22-module relink via its own patched dsd.
Compiler: CW for DSi **1.1 build 1018** (FFC: 1.2p2). Per-function flags `-O4` or `-O4,p`. No license; **human decision (session 14): decomp code is usable, import it, credit arcnid.**
Cross-check against our queue.csv (by address, ov002):
- their C functions: 557 already done here, 70 our fail_sonnet, 16 our todo, 498 not found under our names
  (different function boundaries or naming; unexplained).
- Of the 86 they have and we lack: 46 marked plain `-O4`, 40 `-O4,p`. FFC compiles everything with `-O4,p`
  (ffclib CC_FLAGS) and never tries plain `-O4`. But 450 of our done functions are `-O4` in their manifest, so their
  flag labels are "what matched on their compiler", not proof. Test it (Phase 1.0).
Use:
- docs/PLAYBOOK.md + PLAYBOOK_WAVE3.md: mwccarm idioms found on this exact game (`-O4,p` vs `-O4` epilogue/jump-table
  tells, volatile ordering pins, struct-temp tricks). Fold the ones that hold under 1.2p2 into tools/prompt.
- `tools/try_variants.py` idea: compile 10-20 candidates (both flag sets) in one batched wine call. Consider the same
  for tools/try in match_opus.js.
- docs/BATTLE_FLOW.md, DAMAGE_FORMULA.md, STATUS.md names: ov002 names/struct research for a naming pass.
- Optional: contacting arcnid to coordinate (avoid duplicate work) is the human's call; do not contact them unasked.

## Phase 0: measure (no spending)
1. Find FFC's TWL/Nitro SDK and MSL versions (build strings in `main`). **Count the non-done functions inside
   SDK/MSL address ranges.** If small, skip Phase 1.1 and 1.2.
2. 5-minute sanity check of the exact compare (swap a matched function's callee for a same-shape sibling;
   `tools/try` must fail). No gate needed.
3. Human decision (session 14): decomp code from any listed source may be used; credit the source repo in the
   commit message (and a CREDITS line). No license gate.

## Phase 1: free wins (no LLM)
00. **Import arcnid/ffc-decomp (do first).** For each of their ov002 C functions (config/ov002/manifest.csv,
   kind != asm) that is not done here (70 fail_sonnet + 16 todo at HEAD 934e1bf5; re-check):
   copy src, rename to our func_ov002_<addr> name, add `/* cflags: -noO4,p -O4 */` when their flag is O4,
   run tools/try; if it misses, try the other flag set. Integrate the matches as one batch, clone.py run.
   Then investigate the 498 address mismatches (boundary differences may hide more imports). Recheck their repo
   each round: it is active, so new matches can be pulled the same way.
0. **Plain `-O4` retry (cheap, do first):** recompile every fail_sonnet best attempt in pending/ with
   `/* cflags: -noO4,p -O4 */` (check ffclib.cc_flags_for drops `-O4,p` correctly) via tools/try; bank matches.
   Gate: if it matches near zero, drop the idea. If it works, add the flag variant to mkwave/match prompts.

Phase 1.1-1.3 only if Phase 0.1 shows enough SDK work.
Run 1.1 and 1.2 in a child session, or with no children running as an explicit exception (like `clone.py run`):
they touch src/ and config/.
1. **SDK import.** No reference repo is TWL-SDK, so expect only version-stable functions to match. Any listed
   repo may be used (pret has the most SDK C), plus FFC's own matched SDK code as donors. Rename to FFC symbols, `tools/try`, integrate.
   Expect only version-stable functions to byte-match.
2. **`dsd sig`.**
   - What it needs: `sig new_elf -i <relocatable obj> -f <fn>` emits one YAML per function. The input must be a
     relocatable object built by the same compiler, so this comes after 1.1 has compiling SDK sources.
     `sig apply -c config.yaml -s <yaml>` takes one signature at a time; run with `--dry` first.
   - Risk: apply renames symbols in config/. That breaks everything keyed by the func_ name: src/ files, delinks,
     queue.csv, pending/, work caches. Either write a rename migration covering all of them, or keep the names in a
     side map used only by prompts (preferred).
3. **clone.py extension** (replaces "paramclone", which is redundant: clone.py already substitutes immediates,
   pool values and symbols). Add register-renamed and one-instruction-different donors; mkwave `_near_index`
   already detects these. Then `clone.py run`.

Report the functions matched per step, here and in STATUS.

## Phase 2: tooling for the LLM tiers
1. **Opus plumbing** (missing today):
   - add an `opus` tier key in save_wave, wave_done, cycle.py and tools/prompt (prompt cap is currently
     `10 if haiku else 15`);
   - new `fail_opus` status, accepted by `clone.find` targets and the mkwave busy logic.
2. **mkwave fixes:**
   - `--status fail_sonnet` currently picks nothing for opus: `pick_items` filters on `tier == a.tier`, but
     fail_sonnet rows carry tier haiku or sonnet. Add `--any-tier`, or ignore tier when `--status != todo`.
   - `--dedup` busy set drops every fail_sonnet pick. Exclude the row itself from `busy`.
   - Rank fail_sonnet by (todo siblings of the same shape desc, best_pct desc), so one Opus match feeds clone.py
     to many.
   - Put the best prior attempt (pending/*/func.{haiku,sonnet}.c + best_pct + note) in the prompt.
3. **Fuzzy similarity:** extend `mkwave.sibling_extra` with a fuzzy top-K (coddog-style opcode edit-distance
   ratio with a Jaccard prefilter, port of sm64ds `tools/coddog.py`, MIT), reusing `clone.shapes()` as the opcode
   source. Do not build a parallel path.
4. **Near-miss index:** pending/ already holds the per-tier best C + best_pct/note (2,271/2,289 fail_sonnet have
   files). Build an index over pending/*/result.json, regenerate diffs with tools/try, and classify misses
   (idea of sm64ds `categorize_misses.py`: regalloc / ordering / branch / stack / reloc). Optionally have
   save_wave also keep intermediate work/<func>/*.c.
5. **`tools/workflows/match_opus.js`:** one Opus fn-matcher per function, with the prompt from 2 and 3.
   Optional cheap pre-pass: a Sonnet "nudge" over best_pct >= 98 with one diff-fed retry
   (idea from sm64ds `cascade.py`; that script calls the API directly, so use Workflows here instead).
6. **Permuter (optional, last):**
   - Supported: arm32 + mwccarm. Port sm64ds `tools/permuter/{cap_objdump.py,import_func.py,mwccarm_compile.sh}`
     with wibo; no arm-none-eabi-objdump is installed here.
   - Scope: C files only (pycparser, no `-lang c++`); only best_pct >= 98 same-size regalloc misses;
     >= 25 min each.
   - Never feed permuter output back to the LLM as a seed. Evidence of value is weak (sm64ds: one crack; Lewis
     removed his).

## Phase 3: Opus pilot (STATUS "Next phase" steps 2-3)
- ov0-3: 60 opus-tier todo, then 60 fail_sonnet ranked as in 2.2. Record match rate and $/match vs Sonnet
  (~$50-75 per 3-wave Sonnet child).
- A/B if cheap: half the wave with fuzzy examples, half without.
- best_pct >= 98 is a positional byte ratio and mostly means same-size regalloc/ordering misses, the hardest
  group for LLMs (sm64ds arm9-endgame "Group A"). Do not assume high best_pct means easy.
- **Gate: below ~25% matched, stop and ask the human.** Otherwise roll into the 3-group child loop as each group's
  Sonnet tier empties.

## Phase 4: blocked 377 (needs human decisions)
- `__sinit` 163 and this-adjust thunks 141 are compiler-generated and come from data-section / class TUs
  (STATUS: "data-section TUs unblocks … C++ vtables+thunks, __sinit"). Read first Advance Wars
  docs/data-tool.md, bss-tool.md and issues/ (same dsd toolchain, CC0), then sm64ds
  `notes/tu-naming-and-swallowers.md` and its C++ TU notes. Then plan TU promotion.
- System register access 71: SDK functions written with inline `asm` in the original SDK.
  **Human decision:** the asm policy is BIOS-swi-only; allowing mwcc `asm` functions for SDK sysreg code would
  clear these. Do not change the policy without asking.
- DS Protect 1: identify FFC's DS Protect version, then use the matching dsprot branch's C. Ov4 breaker 1: manual.

## Rules
Unchanged from CLAUDE.md, with one addition: the orchestrator may also edit docs/LONGTAIL_PLAN.md.
src/ and config/ work (Phase 1.1-1.3) runs in children, or with no children running. Asm stays BIOS-swi-only
unless the human changes it. Commit and push often; record results under each phase.
