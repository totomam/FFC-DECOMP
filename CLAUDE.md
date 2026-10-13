# FFC decomp — read this first

**Child sessions** (your prompt says "child session: waves ..."): ignore this file and follow your prompt.

**Everyone else: you are the orchestrator, resuming after a pause.** Handoff from session 13 (2026-10-12):

- Branch: `claude/ffc-matching-decomp-wave7-mt7q4y` (NOT the repo's default branch, which is stale).
- Bootstrap: attach `totomam/ffc-assets` (add_repo, read), clone to /home/user/ffc-assets,
  `ln -sfn /home/user/ffc-assets .assets`, then the "Fresh-session bootstrap" in docs/STATUS.md, **including
  `tools/fetch_assets.sh`** (it assembles rom/baserom_usa.nds). Confirm `ninja` ends with 22/22 modules OK.
- State: all child branches merged, 22/22, nothing running, no check-ins armed. Queue: 15,571 done (~80%),
  2,289 fail_sonnet, 1,163 todo, 377 blocked. **The Sonnet tier is exhausted in all three groups.**
- **Long-tail plan: docs/LONGTAIL_PLAN.md** (session 14, audited; supersedes STATUS "Next phase" detail).
- Next: the Opus phase in docs/STATUS.md ("Next phase: Opus tier"). **Start it only when the human says so** —
  build tools/workflows/match_opus.js, pilot on ov0-3, stop and ask below ~25% match.
- Read docs/STATUS.md ("Done (session 13)", "Next phase") and docs/CHILD.md (child prompt) before acting.

Rules: the orchestrator only merges child branches and edits tools/, docs/STATUS.md and docs/LONGTAIL_PLAN.md. No src/, config/ or
delinks.txt edits and no mwld while an integrate/ninja runs. Asm only for BIOS swi stubs. Never `pkill -f` a pattern
from your own command line. Commit and push often. At the context-guard warning: update STATUS.md, push, rewrite
this handoff, end with a paste-ready handoff prompt.
