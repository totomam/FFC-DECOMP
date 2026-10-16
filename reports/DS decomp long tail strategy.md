# Stop re-running Sonnet; bank, sweep, then refine

The DS projects that finished (Super Mario 64 DS, Advance Wars DS, KH 358/2 Days) did not get through the long tail by repeating per-function LLM rounds. They did it in four ways. First, **zero-token passes ran before any agent**: templates, twin propagation, pragma and compiler-build sweeps, and decomp-permuter. Second, they **kept the best draft per function** and ranked it by count of differing instructions. Third, they sent only **diagnosed near-misses to one stronger-model refine pass**, with the prior draft and its diff in the prompt. Fourth, they **parked everything else after two failed retries**, behind explicit reopen triggers. They also defined "done" so that C-inexpressible code counts through an asm allowlist. Advance Wars DS (AWDS) measured the cost of not doing this. Its partials phase ran at about 3–5 matches per 1M tokens, against 90–200 per 1M for batched Sonnet bulk work, and its third retry matched only 10% at about 300k tokens per match ([AWDS loop.md](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/loop.md), [AWDS issue 0052](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/issues/0052-partials-strategy.md)). Most of the 2,050 fail_sonnet functions in FFC have already had two Sonnet passes. By the AWDS rule they should be parked, not re-run. The ~90% cut therefore comes from changing what gets spent on, not from finding a cheaper model:

- **$0 CPU passes over the banked drafts.** AWDS matched 9 of 37 parked functions with the permuter, all within 3 minutes, and 8 more with pragma sweeps at about 2k tokens each.
- **Batched cheap-tier agents on the never-tried todo.**
- **One capped refine pass on low-divergence drafts.** sm64ds measured Opus at about 70% matched and about 72k tokens per landed function at div≤25.
- **A widened asm allowlist and C++ triage** for the 377 blocked functions.

The repo's "90% cut plan" ([docs/LONGTAIL_PLAN.md](../docs/LONGTAIL_PLAN.md)) has the right shape. It is wrong in four places:

- It writes off decomp-permuter.
- It skips the compiler-build sweep.
- It bans the stronger model in exactly the refine role where that model is cheapest per match.
- It defers __sinit to TU promotion, when a per-symbol C pilot is available.

All yield and cost projections below are **estimates** extrapolated from other projects. None has been measured on FFC.

## Finished DS decomps spent tokens only after the free tiers ran dry

Each finished project ran its cheapest passes first.

**Super Mario 64 DS** reached **11,389/11,389 functions matched**, 108 of them byte-exact hand-asm. Its README says most functions "were matched for free by the automatic templates, and the harder ones with AI assistance at a few cents of usage each" ([sm64ds README](https://github.com/tangosdev/sm64ds-decomp/blob/main/README.md)). Its tiers were:

1. A zero-token template tier (`swarm.py`).
2. Free clone and paramclone passes after every cycle.
3. Single-shot Haiku with one diff-fed retry on template near-misses.
4. Sonnet fan-outs that stop after two non-improving attempts.
5. A refine tier over a persistent near-miss database, told to "fix the remaining codegen SHAPE, not re-decompile".

Sources: [cascade.py](https://github.com/tangosdev/sm64ds-decomp/blob/main/tools/cascade.py), [refine_run.js](https://github.com/tangosdev/sm64ds-decomp/blob/main/tools/refine_run.js), [nearmiss/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/nearmiss/README.md).

**Advance Wars DS** runs on FFC's own stack (dsd + mwccarm). It went from a pilot batch to **8,571/8,571 functions linked in roughly 8–9 days**. The gain from tools was large. On one tooling day, `propagate.py` and `trivial.py` cleared **1,263 functions for zero model tokens**. Building those tools cost about 0.72M tokens. The tools delivered about **1,700 functions per 1M tokens**, against 23–95 for the earlier agent batches ([AWDS loop.md](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/loop.md)).

**KH Days** found **979 NitroSDK functions** "single-pass, zero agent cost". It compiled pret's SDK source with its own matching compiler and byte-searched the ROM ([khdays sdk/README.md](https://github.com/Yokimitsuro/khdays-decomp/blob/main/sdk/README.md)).

AWDS also grouped functions differently from FFC. Its agents took **15 small functions each on Sonnet and 7 medium on Opus**, and its family heads went first so that propagation paid for each family. Sonnet small groups yielded **92–200 matched functions per 1M tokens** ([AWDS loop.md](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/loop.md)). decomp.wtf takes the same approach: "one turn writes several, one call judges them all", at roughly **8 cents per small function** with Claude Code ([decomp.wtf](https://github.com/i12bp8/decomp.wtf)).

FFC runs one Sonnet agent per function and spends about 130k cache-read tokens per function. Session 16 measured about **$0.26 per wave match, or $0.04 per function done once clones are counted** ([docs/STATUS.md](../docs/STATUS.md)). Clones are the cheapest matches FFC gets. Every other project ordered its work to maximise them, and FFC's queue does not yet.

arcnid's FFC decomp (same ROM) confirms the pattern on this game. Its "finisher waves" gave each worker three things: the prior attempt's byte-level autopsy, the saved best source, and a list of untried levers. Each worker had about 25 compiles. They went **~17-for-26 on previously stuck targets**. Giants of 600 B–13 KB were "documented as specialist-needed… rather than burned on" ([arcnid STATUS.md](https://github.com/arcnid/ffc-decomp/blob/main/STATUS.md), [FINISHER_QUEUE.md](https://github.com/arcnid/ffc-decomp/blob/main/docs/FINISHER_QUEUE.md)). Its `try_variants.py` compiles 20 candidate sources in one batched call, so an agent "can try 20 ideas at once" ([try_variants.py](https://github.com/arcnid/ffc-decomp/blob/main/tools/try_variants.py)). For FFC this cuts agent turns, and turns are what drive the 130k cache-read tokens per function.

## Retry yield collapses after the second attempt, so park and reopen on triggers

Three independent sources agree on the decay curve:

- **AWDS** (136 partials, 211 retries) matched **47% on the first retry, 16% on the second and 10% on the third**, at 62k, 170k and 298k tokens per match. The fourth retry matched none. AWDS adopted "park after two retries without a match". Applied to its history, the rule would have lost 2 of 74 matches and saved 13% of retry tokens. Its reopen triggers are: a zero-token pass gets within 2 instructions; a twin matches; a callee prototype or struct changes; or a new cookbook line fits. Half of all late matches had one of these triggers ([AWDS issue 0052](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/issues/0052-partials-strategy.md)).
- **Mizuchi's Sonnet 4.6 benchmark** found nearly half of all matches came on the first attempt. Functions not matched by attempt 3 had about a 1-in-4 chance of ever matching ([Macabeus](https://gambiconf.substack.com/p/can-llms-really-do-matching-decompilation)).
- **Chris Lewis** removed his `--repeat 3` re-runs as poor value. He made attempts within a single prompt uncapped, because the **85th percentile of successful matches took 28 attempts** ([Lewis, long tail](https://blog.chrislewis.au/the-long-tail-of-llm-assisted-decompilation/)).

Taken together, these say the waste is in **fresh short sessions that start over**, not in long sessions as such. A capped first pass catches the easy half. After that, only a seeded, diff-fed continuation pays.

FFC's waves 60–62 matched 25%, which looks better than AWDS's 10% third retry. The STATUS notes explain the difference. Those waves carried a new prompt (plain -O4 plus arcnid idioms), and in AWDS terms a new cookbook line is a reopen trigger. A fourth Sonnet round with no new lever should be expected to fall toward the 10% band (**estimate**). That would make the handoff's option 1 (~$100 for ~25%) optimistic.

Ranking also needs to change. AWDS found objdiff match percent misranks partials: one wrong opcode costs as much as 12 wrong registers. It switched to **counting differing instructions** ([AWDS issue 0067](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/issues/0067-partials-ranked-by-objdiff-percent.md)). It also found that near-misses at ≥99.5% matched worst of all, at 20% and 142k tokens per match. Functions below 90% matched best, at 55% ([AWDS issue 0052](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/issues/0052-partials-strategy.md)). FFC's best_pct is a positional byte ratio, so its "544 ≥ 90%" bucket is not a reliable proxy for "almost done".

## The ≥90% bucket belongs to CPU sweeps, not LLMs

The evidence on high-percent near-misses is consistent. In byte-tactics' controlled test, **both a model arm and a 10-minute permuter scored 0/6 on functions at 90–99%**. 54% of model proposals compiled to identical bytes ([byte-tactics #4841](https://github.com/HectorBailey/byte-tactics/issues/4841)). The best evidence on FFC's own stack points the other way for the permuter.

**AWDS permuter run.** On the dsd/mwccarm stack, AWDS ran decomp-permuter for **600 s per function on 37 parked functions that agents had retried two to six times. It matched 9 (24%) with no model tokens.** Every match came within 3 minutes (3 s to 166 s). The fixes were rewritten as plain C: unsigned casts, read-once locals, split sums, and a moved loop counter. Two scorer patches made this work:

- disassemble only the named function;
- rewrite relocations as symbol plus addend, because dsd's `data_ov000_…` names otherwise added "a constant penalty to every score".

Source: [AWDS issue 0052](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/issues/0052-partials-strategy.md).

**AWDS pragma sweep.** The same project's `pragmas.py` tries every optimization pragma at file and function scope, then pairs and triples of them. It matched **8 more functions at about 2k tokens each** (same source).

**Mixed results elsewhere.** sm64ds got only one or two permuter cracks. It warns that seven minutes per function is too short to believe a negative ([sm64ds arm9-endgame.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/notes/arm9-endgame.md)). Lewis removed the permuter from his agent loop because its odd output caused "doom loops". That was a problem with feeding permuter output back to the LLM, not with running it offline ([Lewis, long tail](https://blog.chrislewis.au/the-long-tail-of-llm-assisted-decompilation/)).

**Compiler-build sweeps.** sm64ds re-measured its 20 "endgame" functions against all 25 installed mwccarm builds. **Only 4 still failed**, and four matched only under a recovered 2004 build. It recorded the lesson "Do not route work by this file without re-measuring first" ([sm64ds arm9-endgame.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/notes/arm9-endgame.md)). arcnid builds FFC with **DSi 1.1 build 1018** and compiles some functions with `-O4,p` ([arcnid STATUS.md](https://github.com/arcnid/ffc-decomp/blob/main/STATUS.md)). FFC uses 1.2p2 (build 1028), and decomp.me hosts both builds ([decomp.me compilers](https://github.com/decompme/decomp.me/blob/main/frontend/src/lib/i18n/locales/en/compilers.json)). A per-function build × flag × pragma sweep over FFC's banked drafts is nearly free and has not been run.

**Where a stronger model does pay.** The stronger model is cheap only when its work is a narrow refine. sm64ds measured **Opus at div≤25 at about 70% landed, at 71–75k tokens per landing**. Widening to div≤40 dropped this to 17% at 288k tokens. The project's rule became "Lead with Opus at div≤25", and its meta-lesson was "escalation is worth one pass, not two" ([sm64ds mwccarm-codegen.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/notes/mwccarm-codegen.md)). Lewis saw Opus match 5 of 7 functions Sonnet had called too difficult ([Lewis, one-shot](https://blog.chrislewis.au/the-unexpected-effectiveness-of-one-shot-decompilation-with-claude/)). byte-tactics measured Opus 5 at 19% against Sonnet-5.5 at 14% on a heavily retried tail ([#4841](https://github.com/HectorBailey/byte-tactics/issues/4841)). So the strong model should go to low-divergence drafts whose residual is semantic or ordering, never to pure register-allocation floors, and never twice.

## Blocked and missing functions are policy and symbol work, not codegen

The 377 blocked functions and ~500 missing ov002 functions do not need more prompting.

**System-register functions.** Every DS project surveyed writes SDK system-register code as mwcc `asm void` functions in .c files and counts it as complete: NitroSDK itself, sm64ds, AWDS, khdays and pmd-sky ([ntrtwl/NitroSDK](https://github.com/ntrtwl/NitroSDK)). sm64ds uses an objective test: asm counts only if it contains instructions C cannot emit (`mcr/mrc`, `swi`, `msr/mrs`, `ldm/stm ^`, `swp`). Whole-function `dcd` dumps are rejected as "vacuous" ([sm64ds asm-policy.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/notes/asm-policy.md)). AWDS keeps **252 allowlisted asm functions, each with a stated reason**: swi stubs, CP15, CPSR, soft-float pushes, ldm/stm kernels and clz ([AWDS asm_functions.txt](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/config/AWRE/asm_functions.txt)). khdays allows exactly two game functions that need `clz` ([khdays README](https://github.com/Yokimitsuro/khdays-decomp/blob/main/README.md)). If FFC adopted the sm64ds test, its 71 system-register functions and its clz soft-float and 8-register ldm/stm misses would close with no tokens.

**__sinit functions.** sm64ds writes each `__sinit_*` as a **standalone C function matched per symbol**, across 60 files ([sm64ds src/unnamed/ov002](https://github.com/tangosdev/sm64ds-decomp/tree/main/src/unnamed/ov002)). That is a middle path for FFC's 163 __sinit functions, short of full TU promotion.

**this-adjust thunks.** sm64ds leaves this-adjust thunks as shards, because defining the key function would emit the whole multiple-inheritance vtable group into the object ([BlendModelAnim.cpp](https://github.com/tangosdev/sm64ds-decomp/blob/main/src/engine/model/BlendModelAnim.cpp)). No C++ DS project has solved thunks fully. FFC's 141 should move to a "compiler-generated, pending class TU" category and stop being a matching target.

**Missing ov002 functions.** dsd discovers functions with a linear sweep plus call-target passes, so a function reached only through a vtable can be missed. Missing functions are added by hand in symbols.txt ([ds-decomp lib/src](https://github.com/AetiasHax/ds-decomp/tree/main/lib/src)). AWDS's `scan_pointers.py` finds pointer tables by ranking data words that equal known symbol starts and sit next to relocated words ([scan_pointers.py](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/tools/scan_pointers.py)). That method fits the ~500 ov002 vtable-only functions, and arcnid's symbol list can seed it.

**Build speed.** AWDS runs mwcc and mwld through **metroskrew**, a native Linux build of the tools that needs no wine ([AWDS tools.lock](https://github.com/sturmds/advance-wars-dual-strike-decomp)). Whether metroskrew supports build 1028 is **unverified**. If it does, it attacks FFC's 45-minute cold build and 25–30-minute link.

## Corrections to the repo's 90% cut plan

| Plan item ([LONGTAIL_PLAN.md](../docs/LONGTAIL_PLAN.md)) | What the research says | Correction |
|---|---|---|
| Step 1.4: home-grown `variants.py` mutations on the 544 ≥90% functions. Phase 2.6: permuter "optional, last", "evidence weak". | AWDS found declaration-order permutation alone "never" fixed a register-only diff. The real permuter matched 9 of 37 parked functions, plus 8 from pragmas ([AWDS workflow.md](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/workflow.md)). | Move the real decomp-permuter (with the AWDS scorer patches) and a pragma sweep into Step 1. Keep `variants.py` only for flag and build variants. |
| No compiler-build sweep. | sm64ds: 16 of 20 endgame functions moved under other builds. arcnid uses build 1018. | Add a 1018/1028 × `-O4`/`-O4,p` sweep over every banked draft before any LLM spend. |
| Bucket by best_pct (≥90%, <50%). Step 2 says to skip <50%. | Rank by differing-instruction count. ≥99.5% is the worst LLM bucket, and <90% retried best in AWDS. | Rank and route by differing-instruction count plus a diff class. Don't exclude <50% by percent alone: exclude by "structural" class and size. |
| D2: "no Opus (or a 30-function pilot)". | A strong-model refine at div≤25 is the cheapest per-match LLM tier on record (~70%, ~72k tokens per landing). | Allow one capped refine pass on low-divergence semantic/ordering drafts, gated by a pilot. Never run it twice per function. |
| Cap tools/try at 8. | First-pass matches come early (Mizuchi, AWDS), but seeded continuations need ~25 compiles (arcnid) and Lewis's p85 was 28. | First pass: about 6–8 tries and stop after 2 stale ones. Refine: about 25 tries with a no-progress stop. Let agents batch-compile variants per call to cut turns. |
| One function per agent (implicit). | AWDS used 15 small functions per Sonnet agent, at 92–200 matched functions per 1M tokens. | Batch 10–15 haiku/sonnet-tier todo functions per agent, with coddog top-5 examples in place of broad guides. |
| D1 cites khdays as "~96% C". | khdays reports ~99.5% real C, with 108 asm/stub functions. | Keep D1, but report C-only and allowlisted-asm figures separately (AWDS/khdays style). |
| Phase 4: __sinit needs TU promotion. | sm64ds matches __sinit as per-symbol C functions. | Run a 20-function __sinit pilot as explicit C before any TU work. |

## Phased strategy with gates (all yields and costs are estimates)

| Phase | Work | Gate to proceed | Expected yield (est.) | Expected cost (est.) |
|---|---|---|---|---|
| 0. Infra (½–1 session) | Prebuilt toolchain tarball in ffc-assets plus an environment setup script, so children stop stalling. One link per session. Build a near-miss index from pending/: best draft, differing-instruction count, diff class (sm64ds `categorize_misses.py` idea). Test metroskrew with build 1028. | Bootstrap under 10 min. Every fail_sonnet row has div and class. | 0 matches. About 1 h saved per session. | $0 tokens, ~$5 orchestrator |
| 1. Free CPU tiers (1–2 sessions, unattended) | Build/flag/pragma sweep over all banked drafts. Then decomp-permuter at 600 s with 4 jobs, on drafts with matching instruction count and a regalloc/ordering class, with ≥25 min only for drafts whose score moved. clone.py plus fuzzy coddog donors after each batch. arcnid recheck and import. scan_pointers-style symbol recovery for ov002 vtable functions and tail-call targets, then arcnid C for them. NitroSDK byte-identification compiled with 1028. | Under 5% of eligible drafts matched by sweep plus permuter: stop those tiers. | About 150–400 functions across sweeps (~5–10% of drafts), permuter (~10–20% of ~500 eligible), clones and arcnid/symbol imports | ~$0 tokens. 1–2 CPU-days. |
| 2. Policy triage (hours, needs D1/D2) | Allowlist asm by the sm64ds instruction test (71 sysreg plus clz/ldm-stm cases). Block DS Protect stubs, epilogue fragments and thunks as non-targets. Park every fail_sonnet function with ≥2 failed passes, with AWDS reopen triggers. | Human approves policy. | About 100–150 functions closed or removed from LLM queues | $0 |
| 3. Batched cheap tier (1 session) | 486 never-tried haiku/sonnet todo, 10–15 per Sonnet agent, coddog top-5 matched siblings, first pass capped at about 6–8 tries with stop-after-2-stale, batch compiles. Shape heads first, so clone fans out. | Pilot of 60 functions: $/match must come in under the $0.26 baseline and match rate stay at or above ~40%. Otherwise revert to per-function agents. | About 200–300 functions plus clones | About $15–40 |
| 4. Refine pilot (1 session, needs D3) | 40 compiling drafts with div≤20–25 and a semantic/ordering class, given the best draft, the diff and untried levers, about 25 tries, one pass only. A/B Opus against Sonnet-refine on 20 each. | At or above ~40% landed, with $/match at or below the Sonnet re-run marginal ($/match from waves 60–62). Otherwise stop. | Pilot: about 15–25. Full run over ~300 eligible: about 100–200 | Pilot about $10–30. Full run about $60–150. |
| 5. C++ and giants (optional, needs D1) | 20-function __sinit pilot as C. m2c/Ghidra scaffolds plus dedicated sessions only for ≥1 KB functions that have clone value. Everything else stays delinked asm under D1. | __sinit pilot at or above 50%. | About 80–120 __sinit. Giants case by case. | About $10–50 |

Against the trajectory in the handoff (15–20 more sessions and roughly $1–3k for a tail that does not converge, per [LONGTAIL_PLAN.md](../docs/LONGTAIL_PLAN.md)), this plan targets about **4–6 sessions and roughly $100–300 in tokens** (**estimate**). That is close to the 90% cut, on the condition that D1 accepts allowlisted asm plus parked functions remaining as delinked asm. The largest uncertainties are three. The permuter and sweep yield on FFC's build 1028 is unmeasured. Opus pricing relative to Sonnet 5.5 is not in these notes, so the Phase 4 dollar range is a token-based guess. The 25% rate from waves 60–62 could also hold up better than AWDS's 10%.

The human must make five decisions:

- **D1, the definition of done.** Proposed: matched C, plus allowlisted asm, plus parked functions that remain delinked asm, with C-only and asm counts reported separately.
- **D2, the asm policy.** Replace "BIOS swi only" with the sm64ds instruction test (`mcr/mrc/msr/mrs/swi/swp/ldm-stm ^`, plus `clz`), each entry carrying a stated reason.
- **D3, the stronger model.** Permit one capped refine-pass pilot, with a budget ceiling, in place of option 1's further Sonnet waves.
- **D4, unattended running.** Run the whole loop as one Workflow under a Sonnet orchestrator, and approve the environment setup script and prebuilt tarball so children run unattended.
- **D5, outside help.** Decide whether to share the last hard cases on decomp.me, which hosts mwcc_40_1028, or coordinate with arcnid.

## Conclusion

The DS projects suggest FFC's long tail is mostly a scheduling and policy problem, not a model-capability problem. Its tail consists of non-C code that a policy can close, clone families that start with an unmatched head function, and drafts that an offline sweep can finish for nothing. The one LLM tier with a favourable per-match cost is also the one the current plan bans: a narrow, single-pass, diff-fed refine on low-divergence drafts. The one it keeps funding, fresh Sonnet rounds over twice-failed functions, is the tier every finished project abandoned.

The order matters. Free passes and policy go first because every match they produce becomes a clone donor and a few-shot example, and that raises the yield of the paid tiers that follow. The parked set should be kept in an index that reopens on triggers, not thrown away: AWDS found that half of its late matches came from a new twin or a new lever, not from trying the same function again.
