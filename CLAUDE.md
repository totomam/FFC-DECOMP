# FFC decomp — read this first

**Child sessions** (your prompt says "child session: waves ..."): ignore this file and follow your prompt.

**Everyone else: you are the orchestrator, resuming after a pause.** Handoff from session 15 (2026-10-16), updated session 16:

- Branch: **`ccr-81f17e51-wopsoo`** (session 15 work; `claude/ffc-matching-decomp-wave7-mt7q4y` is behind it,
  the repo's default branch is stale). Develop on the branch your session is given, starting from this one.
- Bootstrap: attach `totomam/ffc-assets` (add_repo, read), clone to /home/user/ffc-assets,
  `ln -sfn /home/user/ffc-assets .assets`, then the "Fresh-session bootstrap" in docs/STATUS.md, **including
  `tools/fetch_assets.sh`**. `tools/setup.sh` builds external code: auto mode blocks it until the human OKs it.
  Cold `ninja` ~45 min, mwld link ~25-30 min here: run builds/integrates in the background with a 2 h timeout.
  Confirm `ninja` ends with 22/22 modules OK.
- arcnid/ffc-decomp (same game, public): `GIT_LFS_SKIP_SMUDGE=1 git clone --depth 1
  https://github.com/arcnid/ffc-decomp /home/user/arcnid/ffc-decomp`. Usable code, credit arcnid in commits.
- State: 22/22, nothing running, no children, no check-ins. Queue: **15,667 done**, 2,238 fail_sonnet,
  1,118 todo, 377 blocked. Session 15 (no LLM spend): +62 arcnid imports, +34 clone pass. See STATUS "Done (session 15)".
- Key findings: plain `-O4` (= -O4,s) is used by this game (`/* cflags: -noO4,p -O4 */`, now in the prompt);
  arcnid's idioms are in the mkwave prompt; ~500 ov002 vtable-only functions are missing from our symbols
  (ov002 33% of .text uncovered) — outside queue.csv.
- **Session 16: pilot done (wave 59): 15/60 Sonnet + clone +83, ~$4. See STATUS "Done (session 16)". Waves 60-62 done in the orchestrator: 172/675 Sonnet (25%) + 36 clone − 1 integrate skip = +207, ~$45. Queue 15,972 done / 2,050 fail_sonnet / 1,001 todo. Nothing running. Next waves or Opus need the human's OK; see STATUS "Done (session 16)".**
- (was) **Next (APPROVED by the human 2026-10-16):** Sonnet pilot wave (~60) over fail_sonnet with the new prompt:
  `mkwave sonnet 60 --status fail_sonnet --dedup` (any tier now picked), record match rate and
  $/match in STATUS, then widen (ask before widening if the rate is near zero).
  Opus (docs/LONGTAIL_PLAN.md Phase 2-3) only for what Sonnet leaves.
- Free leftovers: 24 arcnid funcs not imported (3 duplicate-prototype compile errors -> hand-fix; ~16 targets
  missing from symbols; 1 at 96%). Recheck arcnid's repo for new matches (`tools/import_arcnid.py`).
  Adding the ~500 missing ov002 functions = config work (symbols + delinks), plan it first.
- Read docs/STATUS.md ("Done (session 15)"), docs/LONGTAIL_PLAN.md and docs/CHILD.md before acting.

Rules: the orchestrator only merges child branches and edits tools/, docs/STATUS.md and docs/LONGTAIL_PLAN.md
(session 15 ran integrate/clone itself with no children running — allowed as an explicit exception). No src/,
config/ or delinks.txt edits and no mwld while an integrate/ninja runs. Asm only for BIOS swi stubs. Never
`pkill -f`/`pgrep -f` a pattern from your own command line (it kills your shell; kill by PID). Commit and push
often. At the context-guard warning: update STATUS.md, push, rewrite this handoff, end with a paste-ready
handoff prompt.
