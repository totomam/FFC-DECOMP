# Workflow

## Principle
The build is the only judge. A function is "done" only when the full ROM rebuild
is byte-identical (SHA-1) and objdiff reports 100% for it. Worker claims don't count.

## Pipeline
- `dsd` splits ARM9/ARM7/overlays into per-TU asm → ROM rebuilds matching from day one.
- Functions move asm → C one at a time; unmatched functions stay asm, so the build never breaks.
- Inner loop: `mwccarm` (via `wibo`) → objdiff vs. target → iterate.

## Roles
| Role | Model | Does |
| --- | --- | --- |
| Orchestrator | Opus | Build system, TU splits, shared headers/structs, queue, review, merges, handoffs. Doesn't do routine matching. |
| Matcher | Sonnet 5.5 | Medium/large functions, one TU per task; infers local structs. |
| Grunt | Haiku 5.5 | Tiny leaf functions (≤ ~20 instrs), porting V54 matches, SDK signature labelling, renames, scans. |

## Escalation
Haiku (budget: 3 compile iterations/function) → Sonnet (budget: ~15) → Opus.
Every failure records best match % + a one-line reason in the queue.

## Work units & conflicts
- Unit of work = one translation unit (TU). One worker per TU, own git worktree.
- Shared headers (`include/`): workers may only *append* new declarations;
  struct changes go back to the orchestrator as proposals.
- Orchestrator merges worktrees, runs full build, rejects anything that breaks SHA-1.

## Queue
Single `queue.csv`: `func, tu, size, difficulty, status, owner, best_pct, note`.
Difficulty triage is scripted (size, calls, branches), not LLM-judged.

## Worker contract
- Input: fixed prompt template + `CLAUDE.md` conventions + TU name + function list.
- Output: short structured report only — matched list, failed list with best %, header proposals.
  No diffs or asm dumps back to the orchestrator (protects its context).

## Phases
0. Setup (Opus): verify ROM, `dsd` init, matching asm rebuild, objdiff config, `tools/check` script.
1. Identify NitroSDK/TwlSDK/NitroSystem library code (Haiku, signature matching) — match or leave as lib.
2. Port V54's 206 matched + 77 behavioural functions (Haiku; failures → Sonnet).
3. Scripted triage of all functions by difficulty.
4. Matching waves: Haiku on small, Sonnet on medium/large, parallel by TU.
5. Naming/documentation pass (Sonnet).

## Concurrency
~4–8 parallel workers. Larger fan-out uses the Workflow tool — requires explicit user opt-in.

## Handoff
Orchestrator keeps `docs/STATUS.md` current (progress %, active TUs, blockers, next steps).
At ~200k context: stop, update STATUS.md, commit, push, write handoff.
