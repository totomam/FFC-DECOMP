# Workflow

## Principle
The build is the only judge. A function is "done" only when the full ROM rebuild
is byte-identical (SHA-1) and its objdiff score is 100%. Worker claims don't count;
scripts verify everything.

## Pipeline
- `dsd` splits ARM9/ARM7/overlays into per-TU asm → ROM rebuilds matching from day one.
- Functions move asm → C one at a time; unmatched functions stay asm, so the build never breaks.
- Inner loop: `mwccarm` (via `wibo`, ~50 ms/compile) → byte diff vs. target → iterate.

## Roles
| Role | Model | Scope per task |
| --- | --- | --- |
| Orchestrator | Opus | Build system, TU splits, shared headers/structs, queue, workflow scripts, merges, handoffs. No routine matching. |
| Matcher | Sonnet 5.5 | Medium/large function, or a hard Haiku failure. One function per task. |
| Grunt | Haiku 5.5 | One small function (≤ ~40 instrs) per task, V54 ports, SDK signature labelling. |

## Haiku 100k context limit (hard requirement)
Enforced by task design, not trust:
- **One function per agent.** Target asm, callee prototypes and relevant struct
  excerpts are pasted into the prompt — no browsing the repo.
- **Compact tools only.** `tools/try <func> <file.c>` prints `MATCH` or a diff capped
  at 40 lines. Workers must not `cat` asm files, headers, or build logs.
- **Hard attempt cap:** 6 compiles, then return best attempt + best %.
- Budget: ~47k baseline (measured) + prompt ≤ 8k + 6 × ~4k attempts ≈ 80k peak. Under 100k.
- Functions too big for this budget go straight to Sonnet.

## Escalation
Haiku (6 attempts) → Sonnet (15 attempts, sees Haiku's best attempt) → Opus/manual queue.
Every failure records best match % + one-line reason in the queue.

## Isolation & merging
- Workers never edit the repo. Each writes only to `work/<func>/` (scratch, gitignored).
- `tools/integrate` (deterministic script) moves verified matches into the TU's C file,
  removes the asm, rebuilds, and checks SHA-1. Any failure → revert that function.
- No git worktrees needed → no conflicts, cheap fan-out.

## Fan-out
- Workflow tool, `pipeline()` over the queue: triage → Haiku → (fail) Sonnet → integrate.
- Concurrency is 2 agents per workflow here, but concurrent workflows stack → run several sharded workflows at once (e.g. one per overlay group).
- To go wider: additional cloud sessions, each owning a disjoint set of TUs/overlays,
  pushing to its own branch; orchestrator merges.

## Queue
`queue.csv`: `func, tu, size, difficulty, status, tier, attempts, best_pct, note`.
Difficulty triage is scripted (instr count, calls, branches, loops), not LLM-judged.

## Phases
0. Setup (Opus): verify ROM, `dsd` init, matching asm rebuild, `tools/try`, `tools/integrate`.
1. Identify NitroSDK/TwlSDK/NitroSystem library code (signature matching).
2. Port V54's 206 matched + 77 behavioural functions.
3. Scripted triage of every function.
4. Matching waves, smallest first (builds struct knowledge for larger ones).
5. Naming/documentation pass (Sonnet).

## Handoff
Orchestrator keeps `docs/STATUS.md` current (progress %, active waves, blockers, next steps).
At ~200k context: stop, update STATUS.md, commit, push, write handoff.
