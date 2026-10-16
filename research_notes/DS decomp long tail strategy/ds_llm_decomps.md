# LLM-driven Nintendo DS matching decomps: how they finished the long tail

Method note: the five repos were shallow-cloned on 2026-10-16 and read locally (README, docs/notes, tools, git log). Line-level facts below come from those files at their HEAD that day. The GitHub REST API was unavailable from this session, so repo creation dates are not verified. "Fable" is a Claude model tier named in these repos; sm64ds treats it as stronger than Opus for refinement.

## 1. tangosdev/sm64ds-decomp: how it reached 100%

### Takeaway
SM64DS reached 100% matched: 11,389/11,389 functions, including 108 byte-exact hand-asm functions (SDK/BIOS). The last two functions fell on 2026-10-13 to Claude Opus 5.5. It used a tiered "swarm":
- $0 templates, clone and param-clone first;
- cheap single-shot Haiku on template near-misses;
- Sonnet/Opus agent fan-outs with up to 6 attempts;
- a refine tier (Opus, then Fable escalation) over a persistent near-miss DB;
- a local permuter for $0 grinding.

The things that cracked the final ~1% were:
- recovering the ROM's actual compiler build (a 2004 mwccarm "b56") and sweeping 25 compiler builds;
- a huge written lever catalogue;
- escalating to a different, stronger model on near-misses, because a "floor" one model declares often falls to another.

### Cited Findings
**Final state and end game**
- README progress block: "MATCHED 100.0% 11,389 / 11,389 functions, of which 108 are byte-exact assembly (hand-written in the original, not C)". Code size is 2,238,108/2,238,108 bytes. CONVERTED (readable C++) is 39.6% and LINKED is 93.5%. — [README](https://github.com/tangosdev/sm64ds-decomp/blob/main/README.md)
- Cost claim from the README: "Most functions were matched for free by the automatic templates, and the harder ones with AI assistance at a few cents of usage each." No total dollar figure is published. — [README](https://github.com/tangosdev/sm64ds-decomp/blob/main/README.md)
- The last two arm9 "near-miss floors" were matched on 2026-10-13 in commits authored with "Co-Authored-By: Claude Opus 5.5":
  - `func_0202ffec` (quaternion product): "The 'terminal' 2-word floor was a source-shape error… declares its eight operands as s64 locals… Earlier passes measured declaration order inert with s32 locals (true) and swept s64 locals in one fixed order; neither lever reaches the ROM without the other."
  - `func_02009e70` (dCamera_c::Update, 0x109c bytes), which was at 72 differing words: "mwccarm ranks a local's later live ranges by the order the local was first assigned… that alone moves the near/far limits into fp/sl and the 50 words downstream."
  - Source: commits db522260, 65ad8d6e and merge PR #3782 "Match func_0202ffec and func_02009e70 (the last two near-miss floors)". — [repo commits](https://github.com/tangosdev/sm64ds-decomp/commits/main)
- Census at origin/main as of 2026-09-09: 11,318/11,390 matched, with 72 unmatched. They split into:
  - (a) 20 byte-exact hand-asm primitives that were miscounted;
  - (b) 13 ITCM rows (11 compiler-runtime asm);
  - (c) 18 NONMATCHING C drafts;
  - (d) 21 with no source at all.
  - Part of the "tail" was therefore bookkeeping, not codegen. — [audit/unmatched_census.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/audit/unmatched_census.md)
- asm policy: asm counts only if it contains instructions C cannot emit (`mcr/mrc`, `swi`, `msr/mrs`, `ldm/stm ^`, `swp`). On 2026-07-24, 116 whole-function asm blocks were reclassified as NONMATCHING, dropping the count from 95.2% to 94.2%. — [notes/asm-policy.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/notes/asm-policy.md)

**arm9 endgame triage (notes/arm9-endgame.md, 2026-07-28, re-measured 2026-08-02)**
- 20 functions remained, 30,820 bytes. The average residue size was ~1.5 KB, against 148 B for arm9 overall: "not a tail of near-misses… it is the large functions everything else was matched around." — [notes/arm9-endgame.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/notes/arm9-endgame.md)
- Routing groups: A "allocator-bound, do not spend" (6), B "mid-divergence… best tokens-per-match… where a model tier should be pointed" (7), C "structurally wrong, needs real decompilation… careful human or long-context session" (7). — same source
- Re-measured against "all 25 installed mwccarm builds", only 4 of the 20 still failed to reproduce: A had 3/6 match, B 7/7 and C 6/7. Four matched only under the 2004/b56 build. Lesson recorded: "Do not route work by this file without re-measuring first." — same source
- Group A's "do not spend" verdict was weak evidence: "the permuter pass was budget-limited, and re-running one group B target for 35 minutes moved a number the earlier pass had called still." — same source

**Model tiers and measured economics (notes/mwccarm-codegen.md)**
- Fable 5 cracked 5 of 12 drafts that Sonnet 5 had exhausted, in one case after the permuter's ~8k iterations (2026-07-01). — [notes/mwccarm-codegen.md §6e](https://github.com/tangosdev/sm64ds-decomp/blob/main/notes/mwccarm-codegen.md)
- "Band economics (measured, 2026-07-21)" (same file, §6z):
  - refine at `--max-div 25` gave "≈ 70% Opus @71–75K [tokens]/landed";
  - widening to `--max-div 40` dropped Opus to "~17% @288K";
  - "Fable then recovers ~75% of the closest misses from the narrowed drafts (@12–46K/landed)";
  - "Lead with Opus at div≤25".
- Meta-lesson: "a residual one model calls a floor routinely falls to a *different* model's register rotation — always Fable-escalate div≤20 misses." — same, §6z
- Third arm9 cascade: "Opus 6/11 at 40.5K tok/landed on a div 2-17 pool… then Fable 1/5 at 231K on the misses… draft divergence count did NOT predict winnability… What predicted it was whether the residual was structural… escalation is worth one pass, not two." — same, §7c
- Real floors were declared only after "both survived Opus 8 attempts AND Fable 8". — same, §7a
- The biggest unmatched function in the game, `dScStage_c::PS_Render` (0xb50 bytes, 724 instructions, div 21 to 0), matched "one-shot on Opus" through the reverse-declaration-order callee-saved rule. — same, §6k
- A 2004-era mwccarm (build 0056) was recovered and "the wall falls" (§6ai). The ROM's compiler was identified as "CodeWarrior for NITRO V0.5-V0.6.1" from fold-census and SDK link fingerprints (§6ah). — same file
- One residue took "~9000 compiles" and still stayed at div 4 to 2 (§6bn), showing the cost of grinding true floors. — same file

**Tooling tiers (tools/)**
- `swarm.py`: a "zero-token template tier". It recognises shapes (constant returns, field load/store, two-arg arithmetic), emits C and checks it with the oracle. "Every function cleared here costs zero tokens." Templates are reloc-free only, to avoid false positives. — [tools/swarm.py](https://github.com/tangosdev/sm64ds-decomp/blob/main/tools/swarm.py)
- `cascade.py`: "Cheap LLM tier… Haiku on template near-misses" (`claude-haiku-4-5`). It uses a raw Messages API call, a single static system prompt with cache_control, no chain-of-thought ("output only the C function"), and "1 retry max, feeding back the diff; then give up (queue for escalation)". — [tools/cascade.py](https://github.com/tangosdev/sm64ds-decomp/blob/main/tools/cascade.py)
- `coddog.py`: fuzzy opcode similarity (difflib ratio over mnemonic sequences, with a Jaccard prefilter). It pairs every target with its closest already-matched sibling. Uses: (1) schedule functions that have close siblings first, "highest hit rate"; (2) attach the top-K similar matched sources as few-shot examples. — [tools/coddog.py](https://github.com/tangosdev/sm64ds-decomp/blob/main/tools/coddog.py)
- `sched_run.js` and `refine_run.js` (Claude Workflow scripts) are model-configurable, with defaults model=sonnet and effort=xhigh.
  - Fan-out: "Up to 6 attempts, but STOP EARLY if divergences do not improve for 2 c[onsecutive]".
  - Refine: "Up to 8 attempts… STOP EARLY if divergences do not improve for 2 consecutive attempts; keep the LOWEST-divergen[ce]".
  - Refine prompt: "fix the remaining codegen SHAPE, not re-decompile".
  - Source: [tools/sched_run.js](https://github.com/tangosdev/sm64ds-decomp/blob/main/tools/sched_run.js), [tools/refine_run.js](https://github.com/tangosdev/sm64ds-decomp/blob/main/tools/refine_run.js)
- `crackloop.py` runs prep (coddog worklist plus claims), then the Workflow, then land: re-verify, park misses, ingest near-misses, then "the free post-pass (clone + paramclone)". Refine exports the closest near-misses, "category-routed". — [tools/crackloop.py](https://github.com/tangosdev/sm64ds-decomp/blob/main/tools/crackloop.py)
- `glm_refine.py` runs the refine tier through Zhipu GLM (default `glm-5.2`) via an Anthropic-dialect endpoint. "Up to --attempts rounds per function, early-stop when divergence stops improving (2 stale rounds), track the best draft". `requesty_fanout.py` runs 8 free ($0) Requesty models (Nemotron, Gemma 4, etc.) on the same worklist and keeps the best per function. — [tools/glm_refine.py](https://github.com/tangosdev/sm64ds-decomp/blob/main/tools/glm_refine.py), [tools/requesty_fanout.py](https://github.com/tangosdev/sm64ds-decomp/blob/main/tools/requesty_fanout.py)
- `categorize_misses.py`: "Categorize every near-miss in the DB by WHY it misses… Heuristic classifier over the reloc-aware asm diff". Categories include won't-compile, register-only, predicate-vs-branch and so on. — [tools/categorize_misses.py](https://github.com/tangosdev/sm64ds-decomp/blob/main/tools/categorize_misses.py)
- Near-miss DB (`nearmiss/db.jsonl`): it keeps the closest compiling candidate per function, ranked by (divergences, |cand_size − size|). "re-deriving a near-match costs LLM tokens; finishing one is cheap (a small fix, the permuter, or a stronger future model). This pre-positions the hard residue at ~95%". `tools/permuter/crunch.py` grinds the closest entries locally "for free" and saves closer candidates back to the DB. — [nearmiss/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/nearmiss/README.md)
- Free tiers every cycle: "`clone.py --apply` (byte-identical retarget) then `paramclone.py --apply` (same skeleton, substituted immediates) — they harvest the families each new match unlocks for $0… One representative -> a template… add a rule to `swarm.py`". — [notes/mwccarm-codegen.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/notes/mwccarm-codegen.md)
- An internal research note (2026-06-29, at "the 63% hard-tail") cites the project's own economics then as "25%/88K-token". It recommends SC2Dec-style in-context exemplars drawn from the 1,244-entry near-miss DB. — [notes/research-matching-levers.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/notes/research-matching-levers.md)
- A third-party list says models used were "Claude, Codex, Kimi K3". This is unverified against the repo beyond the Claude trailers. — [capitalandcompute list](https://capitalandcompute.net/md/which-games-has-ai-decompiled.md)

### Inferences
- The FFC equivalent of "Opus at div≤25 ≈ 70% @ ~72K tokens/landed" is a strong signal that the biggest saving is routing near-misses (low div, compiling drafts kept) to a refine pass, rather than re-running full Sonnet decompile passes on fail_sonnet.
- Before routing anything as "impossible", sweep every available mwccarm build over the near-miss drafts. In SM64DS this moved 16 of 20 "endgame" functions. FFC may also have per-TU compiler variance; see arcnid's compiler note in §4.
- Persisting the best draft per function, ranked by divergence, means later rounds start at ~95% instead of from scratch.

### Gaps
- No total $ spend, and no per-model counts of matches by tier, were found. "A few cents" is the only cost claim.
- I could not find the share of functions cleared by templates versus LLM tiers. `function-authors.json` records only the author, not the method.
- The repo start date is unverified: the API was blocked and the clone was shallow.

## 2. sturmds/advance-wars-dual-strike-decomp: how it reached 100%

### Takeaway
AWDS is fully Claude-written and went from first pilot batch (2026-10-06) to 100% code decompiled and linked (8,571/8,571 functions) in roughly 8–9 days. Its loop logs tokens and functions per 1M tokens per batch:
- Batches 10–21 (12 rows from about 5.1M to 10.2M tokens each, ~5–10M per batch) mixed Sonnet for small groups with Opus for medium, large and extra-large groups.
- Zero-token tools (propagate twins, trivial patterns, pragma sweeps, permute) did a large share.
- The tail was handled by a measured "park after two failed retries" rule.
- 246 functions are kept as asm (each with a documented reason), and these count as decompiled.

### Cited Findings
**Status and process**
- PROGRESS.md: all code 100.0000% decompiled and linked, 1,845,012/1,845,012 bytes, "Functions matched 8571 / 8571". Data linked is 99.9991%. — [PROGRESS.md](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/PROGRESS.md)
- "Most of the C was written by Claude (Anthropic's model) in an automated matching loop and checked by the build… and by a review against `TENETS.md`." — [README](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/README.md)
- Compiler: mwccarm 2.0-72. Other builds were ruled out on 2026-10-11 (on func_020a6ac4: 2.0-72 gave 7 differing instructions, 2.0-87 gave 33, and 3.0/4.0 gave 52). — [docs/issues/0052](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/issues/0052-partials-strategy.md)

**Loop design (docs/loop.md)**
- Step 0: run the zero-token tools `propagate.py` and `trivial.py` first.
- Picking: "heads first: each head matched pays for its whole family when `propagate.py` runs afterwards". Then fewest unmatched callees, then smallest. Functions that call each other are skipped within a batch.
- One background agent per function group, in a git worktree. A serialized landing queue (`land_self.py`) exists because "N agents landing at once cost about N² builds". After a batch, rerun propagate and run `permute.py` on new partials. Tokens are logged per group.
- Source: [docs/loop.md](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/loop.md)
- Pilot (2026-10-06): 5/5 matched, "about 1.5 min and 50k tokens each". Batch 2: 10/10, 30–90 s each. — same
- Tooling day (2026-10-09, khdays-derived): "1,263 [functions]… Zero model tokens per run: 557 by `propagate.py`, 705 by `trivial.py`, 1 by `permute.py`". It cost "About 0.72M model tokens to build the tools". Throughput: "baseline batches 3-9 were 23-95 [functions per 1M tokens]… the tools about 1,700 per 1M including the build". — same

**Measured functions per 1M tokens by tier (examples from the batch log, docs/loop.md)**
- Batch 10 (7.65M tokens: Sonnet 6.75M, Opus 0.90M):
  - family groups: 372 per 1M (317 functions for 0.85M);
  - small groups: 69 per 1M;
  - medium on Sonnet: 11 per 1M (17 matched, 10 partial, for 1.49M);
  - Opus large: 16 per 1M.
- Batch 14 (5.10M): small on Sonnet 200 per 1M (125 for 0.62M); medium on Opus 54; large 25.
- Batch 18 (6.00M): small on Sonnet 128 (225 for 1.76M); medium on Opus 83; large 15; extra-large 6 (4 functions for 0.67M).
- Batch 21 (10.22M, Opus 5.10M / Sonnet 5.13M): small on Sonnet 92 (474 for 5.13M); medium on Opus 38 (160 for 4.26M).
- Group sizing in later batches: extra-large = 1 function per agent, large = 3, medium = 7 (Opus), small = 15 (Sonnet).
- Source: [docs/loop.md](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/loop.md)
- The 19 batch rows that report tokens sum to about 88M model tokens, by my own arithmetic over the "About X M model tokens" lines. Batches 22–37 have no rows in loop.md, so the true total is higher.

**Long-tail (partials) phase**
- Batch 38 (2026-10-13, partial burn-down) used "2.57M [tokens], all Opus… 13 matched… about 5 [per 1M]; the matches were functions already at 90 to 99.9%". Batch 39 used 1.56M for 4 matches (about 2.6 per 1M). Batch 40 (asm triage) used 0.10M Opus for 0 matches, all register allocation, so the asm stays. — [docs/loop.md](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/loop.md)
- Issue 0052: batch 22 Opus agents on partials gave "8 matches in about 39 functions tried (about one in five), at 100k to 300k tokens per group of four or five".
  - Triage of 77 partials: register-only 21, order 26, missing/extra 20, structural 10.
  - The pragma sweep (`pragmas.py`) found 8 matches at "about 2k tokens each".
  - Source: [docs/issues/0052](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/issues/0052-partials-strategy.md)
- Measured retry statistics (136 functions, 211 retries, ~6.1M tokens):

  | Retry | Match rate | Tokens per match |
  |---|---:|---:|
  | 1st | 47% (64/136) | 62k |
  | 2nd | 16% (8/49) | 170k |
  | 3rd | 10% (2/20) | 298k |
  | 4th | 0/6 | – |

  Source: same
- Chosen stop rule: "Park after two retries without a match… Applied to the past: 2 of 74 matches lost… 13% of retry tokens saved." Also: "Retry functions with fewer retries first, not the closest to 100% first. Near misses above 99.5% matched least often (20% per retry) and cost the most tokens per match." — same, and [docs/workflow.md](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/workflow.md)
- Match rate by match% before the retry:

  | Match before retry | Rate | Tokens per match |
  |---|---:|---:|
  | below 90% | 55% | 60k |
  | 90–95% | 41% | 72k |
  | 95–98% | 28% | 99k |
  | 98–99.5% | 44% | 58k |
  | 99.5% and up | 20% | 142k |

  "A gain does not predict a match". Source: [docs/issues/0052](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/issues/0052-partials-strategy.md)
- Reopen triggers: a zero-token pass gets within 2 instructions; a twin or same-shape function matches; a callee prototype, struct type or symbol changes; or a new cookbook line fits. "Half of the past matches at a second or later retry had one of these." Of the 10 late matches, 5 were twin-driven. — same
- Issue 0067: objdiff `match_percent` misranks partials. One wrong opcode costs as much as 12 wrong registers, so a 7-differ version (99.93%) was kept over a 1-differ version (99.91%). The fix was to rank by count of differing instructions. — [docs/issues/0067](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/issues/0067-partials-ranked-by-objdiff-percent.md)
- A cookbook of near-miss rewrites is kept in docs/workflow.md. Examples:
  - empty `if (a||b){}` tests to steer register choice;
  - `x = 0; x += call();` for an `add rN,rM,#0`;
  - unsigned operands;
  - local types.
  - Source: [docs/workflow.md](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/workflow.md)
- asm: `config/AWRE/asm_functions.txt` lists 246 functions written as asm that count as decompiled, each with a reason. Examples: CP15 `mcr/mrc`, GPIO bit-bang delay loops, `push {lr}` with no stack padding, unrolled division, setjmp/longjmp. Three register-allocation residues (`OS_InitContext` and others) were kept as asm after batch 40/42. — [config/AWRE/asm_functions.txt](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/config/AWRE/asm_functions.txt), [docs/loop.md](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/loop.md)

### Inferences
- In AWDS, Sonnet small groups (~15 functions per agent) delivered ~90–200 functions per 1M tokens. Opus medium groups gave 37–83 per 1M, and Opus extra-large 6–12. The partials phase dropped to ~3–5 per 1M. That cliff (~20–40x worse than bulk) is the long-tail cost FFC is now in.
- Batching several functions per agent (7–15 per group) is a large token saver compared with one function per agent, because context and setup are amortized.
- The retry curve (47%, then 16%, then 10%) closely mirrors FFC's observed ~25% per Sonnet round. A two-retry park rule with explicit reopen triggers would cap waste.

### Gaps
- No $ figures; tokens only, with no cache split. Batches 22–37 are not in the log, so the total token spend is unknown.
- Exact model versions for Sonnet and Opus are not stated in the log (the commit trailer shows "Claude Opus 5.5").

## 3. Yokimitsuro/khdays-decomp: what "100% linked" means

### Takeaway
All 306/306 modules of KH 358/2 Days EU rebuild byte-exact. The C-only figure is 23,125/~23,233 functions (~99.5%) and 99.73% of code bytes. The other ~108 functions are library asm (NitroSDK/MSL/MobiClip, BIOS veneers) plus two game functions that need `clz`, which are treated as authorized inline-asm exceptions. LLM use is implied by agent-batch tooling and a Claude Code memory path, but no cost or model data is published.

### Cited Findings
- "Every function of the EU (`YKGP`) ARM9 program and its overlays is matched… rebuilt modules are byte-identical (306 of 306). All of the game's own code is C except two functions that need the `clz` instruction, which the compiler cannot produce from C." — [README](https://github.com/Yokimitsuro/khdays-decomp/blob/main/README.md)
- Category counts: real C 23,125/~23,233 (~99.5%); complete (C plus verified library asm) 23,231/~23,233; real C bytes 4,716,202/4,728,788 (99.73%); inline ASM/stub 108; initialized data 188,336/188,340. Compiler: mwccarm 3.0 build 139, with "a per-file compiler override (`config/arm9/file_compilers.json`)" for some middleware TUs. — same
- Policy: library asm counts as "complete" only if it is listed with source evidence in `report_asm_matches.json`. "game code has no such exception." — [docs/PROGRESS_POLICY.md](https://github.com/Yokimitsuro/khdays-decomp/blob/main/docs/PROGRESS_POLICY.md)
- SDK identification: compiling pret/pokediamond NitroSDK source and byte-searching the ROM named 979 functions (~4.2%) "single-pass, zero agent cost" (520/700 source matches). Misses were "real-C reg-allocator-sensitive code (mwcc 137→139 drift)… agent-territory". — [sdk/README.md](https://github.com/Yokimitsuro/khdays-decomp/blob/main/sdk/README.md)
- Zero-token tools:
  - `auto_trivial.py`: "Coste LLM: ~0"; it writes the remainder to `need_agents.json`.
  - `declperm.py`: exhaustive permutation of local declaration order. "con 4-5 locales hay 24-120 ordenes y el barrido tarda segundos" (with 4–5 locals there are 24–120 orders and the sweep takes seconds). It closed Ov008_TryApplyPageStep (permutation 33 of 120).
  - `donors.py`: matched donors found by shared call targets, because siblings differ in size after constant retuning.
  - `sdk/prep_agent_batch.py`: "Emite JSON listo para los agentes" (emits JSON ready for the agents).
  - Source: [tools/](https://github.com/Yokimitsuro/khdays-decomp/tree/main/tools)
- CONTRIBUTING links a `.claude/projects/...memory/` file, indicating Claude Code was used. **Unverified:** which models, how much, and at what cost. — [CONTRIBUTING.md](https://github.com/Yokimitsuro/khdays-decomp/blob/main/CONTRIBUTING.md)
- AWDS credits khdays-decomp for the propagate/trivial/permute (declperm) ideas. — [AWDS docs/loop.md](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/loop.md)

### Inferences
- FFC's "clz soft-float" misses are the same class khdays treats as an authorized asm exception. It is reasonable to mark them blocked or asm rather than spend tokens on them.
- Cheap structural retrieval (same callee set means same function) is a free way to find example siblings for FFC's tail.

### Gaps
- No model, cost, attempt or timeline data. The 200-commit window has a single author.

## 4. arcnid/ffc-decomp (same game)

### Takeaway
arcnid only targets overlay 2 (battle). It stands at 1,141/1,382 (82.6%), build-verified SHA1 MATCH, as of 2026-10-13. Its method:
- parallel Claude "waves" (~130 workers in wave 5);
- human-curated idiom playbooks;
- `try_variants.py`, which batches many candidate sources per wine call;
- "finisher waves" that feed a per-target byte-level autopsy plus the best saved source, which went ~17-for-26 on stuck targets.

There is no cost data. Its stated compiler differs from ours (DSi 1.1 build 1018).

### Cited Findings
- "BUILD-VERIFIED: 1141/1382… (82.6%)". Compiler: "mwccarm DSi 1.1 build 1018 (Freescale v4.0, Nov 2008)", flags `-O4 -thumb…`, and "some functions were compiled `-O4,p` (peephole) — changes jump table format". — [STATUS.md](https://github.com/arcnid/ffc-decomp/blob/main/STATUS.md)
- Wave 5 (2026-10-12/13), 954 to 1,141:
  1. Bulk waves, "~130 workers total", cleared easy and mid tiers. Giants of 600 B–13 KB were surveyed and "documented as specialist-needed… rather than burned on".
  2. "Finisher waves (diagnosis-driven: each worker gets the prior attempt's byte-level autopsy + saved best source + untried levers): went ~17-for-26 on previously-stuck targets".
  3. "~15 targets now PROVEN pure-codegen gaps" were sent to a permuter shortlist.
  - Source: [STATUS.md](https://github.com/arcnid/ffc-decomp/blob/main/STATUS.md)
- Model notes: "Switched to Sonnet 5 default model after credits ran out". Several rounds "died at 0 results to usage-credit exhaustion". — same
- Finisher protocol: "attack only the diagnosed gap, ~25 compile attempts max, then move on". Frontier sources must be saved in-repo (two were lost to /tmp wipes). — [docs/FINISHER_QUEUE.md](https://github.com/arcnid/ffc-decomp/blob/main/docs/FINISHER_QUEUE.md)
- README claim: "Hit rates run ~90% on small-to-mid functions." No measurement data accompanies it. — [README](https://github.com/arcnid/ffc-decomp/blob/main/README.md)
- `try_variants.py`: "compiles every variant (both -O4 and -O4,p) in a single batched wine invocation… so an agent can try 20 ideas at once". `batch_compile.py` is "166x — amortizes wine's 7s cold-start". — [tools/try_variants.py](https://github.com/arcnid/ffc-decomp/blob/main/tools/try_variants.py), [HANDOFF.md](https://github.com/arcnid/ffc-decomp/blob/main/HANDOFF.md)
- decomp-permuter-arm (laqieer) was investigated but not wired in, because "its Scorer… is hard-wired to GNU `objdump`". It is called "the single highest-leverage next investment". Ghidra seeding was rejected at first: the giant-function bottleneck is "unknown struct layouts/callee signatures, not asm-reading difficulty". The latest commit (2026-10-13) nonetheless adds a "Ghidra headless pseudocode pipeline for unmatched functions". — [STATUS.md](https://github.com/arcnid/ffc-decomp/blob/main/STATUS.md), git log
- Finisher-wave levers (PLAYBOOK_WAVE3):
  - a volatile-pinned compare operand;
  - one-word-struct iterator args;
  - `*out += term` vs `*out = *out + term` scheduling;
  - a shared zero local;
  - `#pragma opt_propagation off`;
  - extern plus bare literal mixes.
  - Source: [docs/PLAYBOOK_WAVE3.md](https://github.com/arcnid/ffc-decomp/blob/main/docs/PLAYBOOK_WAVE3.md)
- The callee-saved-seed cluster is "invariant across ~65 source shapes, all pragma combos, and EVERY mwcc build in tools/ (1.1 through 2.0, all patches)". — same
- Full-game pipeline: "~19.4k functions game-wide (arm9 8163, overlays 11242); ov002 = 1179 real functions". All 22 modules relink via patched dsd. — [STATUS.md](https://github.com/arcnid/ffc-decomp/blob/main/STATUS.md)

### Inferences
- arcnid's "finisher" design (autopsy, best source and untried levers, ~25 compiles) is the same idea as sm64ds refine and AWDS partials. Its ~65% on stuck targets is close to sm64ds's "~70% Opus at div≤25". The model is unstated; it is probably Opus before the credits ran out (**unverified**).
- The compiler discrepancy (arcnid: DSi 1.1 build 1018, and some functions at -O4,p; FFC: DSi 1.2p2) is worth a cheap multi-build and -O4,p sweep over FFC's fail_sonnet near misses before more LLM spend.

### Gaps
- No token or $ data. Per-wave models are not recorded except "Sonnet 5" after credits ran out.

## 5. GoldieLeGenie/DQIV-DECOMP and other DS/LLM projects

### Takeaway
DQIV went from first commit (2026-07-09) to a "Complete matching decompilation" commit (2026-10-08) under a single author in 74 commits. The repo shows no LLM attribution, so any LLM use is unverified. No other DS decomp with published LLM cost or match data was found. The nearest published numbers are non-DS:
- Mizuchi: Sonnet 4.6, 74% on 60 functions, 12-attempt cap.
- cdlewis's N64 Snowboard Kids: Opus 4.5, one-shot "vacuum" loop with a difficulty scorer.

### Cited Findings
- DQIV git log: "2026-10-08 Goldie Complete matching decompilation", first commit 2026-07-09, 74 commits, ds-decomp/objdiff based. No Claude or Co-authored-by trailers. — [DQIV-DECOMP](https://github.com/GoldieLeGenie/DQIV-DECOMP)
- Third-party list: the only DS entry is SM64DS, whose only cost figure is "a few cents". The list says "No project… publishes a whole-game cost". Snowboard Kids (N64, 100%, 2,119 functions in 84 days, "expert input on about 4.8% of matching commits", GPT-5.5/5.6, Claude 4.5/Fable, GLM 5.2) and Melee (100%, Claude Fable/Opus, Codex) are listed. — [capitalandcompute.net](https://capitalandcompute.net/md/which-games-has-ai-decompiled.md) (aggregator, not primary)
- Mizuchi (Sonnet 4.6, m2c, decomp-permuter, objdiff):
  - "74% across six runs" on 60 functions (SA3 GBA and Animal Forest N64), with "88%" reproducibility;
  - "Limit of 12 per function. Nearly half of the AI-phase matches came on the first attempt. If a function wasn't matched by attempt 3, the chance of eventually matching fell to roughly one-quarter";
  - "Up to 5 similar, already-decompiled examples, selected by embedding similarity of normalized assembly";
  - the prompt includes caller and callee signatures plus types;
  - the permuter "mostly worked on code Claude generated";
  - Claude "resubmitted identical code 49 times";
  - no cost reported.
  - Source: [gambiconf substack](https://gambiconf.substack.com/p/can-llms-really-do-matching-decompilation)
- Chris Lewis (N64), workflow details:
  - "Most matches used Claude Opus 4.5. In a brief test, Opus matched five of seven functions that Sonnet 4.5 had marked too difficult";
  - difficulty scorer `instruction_count + 3*branch + 2*jump + 2*label + stack` (later fitted by logistic regression; stack dropped);
  - easiest first, because "62.7% of calls flow from higher complexity to lower complexity functions";
  - stop after >10 attempts without progress, logged to `difficult_functions`.
  - Source: [blog](https://blog.chrislewis.au/the-unexpected-effectiveness-of-one-shot-decompilation-with-claude/)
- Second Chris Lewis post: Claude and Codex run in parallel "to widen the search space"; no RAG; Claude "racks up dozens of attempts" on register-allocation problems. — [blog](https://blog.chrislewis.au/using-coding-agents-to-decompile-nintendo-64-games/)

### Inferences
- Across sources, most matches come in the first 1–3 attempts:
  - Mizuchi: about half on attempt 1, ~25% chance after attempt 3.
  - AWDS: 47%, then 16%, then 10% per retry.
  - FFC's 15-try budget per agent is likely mostly waste after try ~5–6, unless divergence is still dropping. sm64ds stops after 2 non-improving attempts.

### Gaps
- No other DS decomp using LLM agents with published data was found. The GitHub code search API was blocked in this session, so a systematic "claude + mwccarm" repo search was not done.

## 6. Recurring tactics across projects (synthesis)

### Takeaway
Every finished project combined:
- (1) zero-token tiers first: templates, twin/clone propagation, pragma sweeps, declaration-order permutation, local permuter;
- (2) a persistent best-draft near-miss store, ranked by differing-instruction count;
- (3) a cheaper model for bulk and a stronger model only on diagnosed near-misses, with the prior draft and diff fed in;
- (4) hard stop rules: 2 stale attempts in sm64ds; park after 2 failed retries in AWDS;
- (5) an asm policy for C-inexpressible functions.

### Cited Findings
- Example retrieval: sm64ds coddog fuzzy opcode similarity, with top-K matched siblings as few-shot examples ([coddog.py](https://github.com/tangosdev/sm64ds-decomp/blob/main/tools/coddog.py)). khdays donors share call targets ([tools](https://github.com/Yokimitsuro/khdays-decomp/tree/main/tools)). Mizuchi uses embedding-similar examples, up to 5 ([substack](https://gambiconf.substack.com/p/can-llms-really-do-matching-decompilation)).
- Diff-fed retries: cascade.py does "1 retry max, feeding back the diff"; refine_run.js says "fix ONLY those instructions"; arcnid finisher waves use a "byte-level autopsy". — sources above
- Families and batching: AWDS family heads first, then `propagate.py` (372 functions per 1M tokens for family groups), and 15 small functions per Sonnet agent ([docs/loop.md](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/loop.md)). sm64ds `clone.py`/`paramclone.py` for $0 ([notes/mwccarm-codegen.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/notes/mwccarm-codegen.md)).
- Cheap first: sm64ds runs Haiku single-shot on template near-misses, free GLM and Requesty models, and Sonnet as the default fan-out, escalating to Opus and then Fable ([tools/](https://github.com/tangosdev/sm64ds-decomp/tree/main/tools)).
- Compiler-build sweeps: sm64ds 25 builds and a recovered 2004/b56 build ([notes/arm9-endgame.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/notes/arm9-endgame.md)); khdays per-file compiler override ([README](https://github.com/Yokimitsuro/khdays-decomp/blob/main/README.md)); AWDS ruled out other builds ([issue 0052](https://github.com/sturmds/advance-wars-dual-strike-decomp/blob/main/docs/issues/0052-partials-strategy.md)).
- Human or "long-context session" for the last structural giants: sm64ds group C; arcnid "dedicated sessions each" for ~40 giants over 1,200 B. — sources above

### Inferences
These are toward a 90% cost cut for FFC. They are not measured on FFC.
- **Stop re-running full Sonnet passes on fail_sonnet.** Per AWDS, a third retry matches ~10% at ~300k tokens/match. Instead:
  - bank the best draft and its div count for every failure;
  - run $0 passes first (pragma sweep, decl-order permutation, permuter, clone/propagate, compiler-build and -O4,p sweep);
  - send only div≤~20–25 compiling drafts to one refine pass with a stronger model (sm64ds: Opus ≈70% at div≤25, ~72K tokens/landed);
  - park after that.
- Cut the per-agent budget from 15 compiles to about 6, with early stop after 2 non-improving tries. Batch 5–15 small functions per agent, AWDS style, to amortize context.
- Rank partials by differing-instruction count, not objdiff %, and retry least-retried first.
- Mark C-inexpressible classes as asm or blocked immediately: clz, `ldm/stm ^`, CP15/swi, unrolled division, and stack-padding quirks (AWDS has 246 such functions; khdays allows clz).

### Gaps
- No project reports $/match comparable to FFC's $0.26/Sonnet match. Conversions from AWDS tokens to $ would require a cache-read share that the sources do not give.
