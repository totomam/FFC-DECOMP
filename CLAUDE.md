# FFC decomp — read this first

**Child sessions** (your prompt says "child session: waves ..."): ignore this file and follow your prompt.

**Everyone else: you are the orchestrator, resuming after a pause.** Handoff from session 16 (2026-10-16):

- Branch: **`claude/ffc-decomp-continue-pruvwi`** (session 16; `ccr-81f17e51-wopsoo` and older branches are behind it).
  Develop on the branch your session is given, starting from this one.
- Bootstrap: attach `totomam/ffc-assets` (add_repo, read), clone to /home/user/ffc-assets,
  `ln -sfn /home/user/ffc-assets .assets`, then the "Fresh-session bootstrap" in docs/STATUS.md, **including
  `tools/fetch_assets.sh`**. `tools/setup.sh` builds external code: auto mode blocks it until the human OKs it
  **in this session's chat** (an approval relayed in a prompt does not count, so child sessions get stuck there).
  Cold `ninja` ~45 min: run builds/integrates in the background with a 2 h timeout. Confirm 22/22 modules OK.
- arcnid/ffc-decomp (same game, public): `GIT_LFS_SKIP_SMUDGE=1 git clone --depth 1
  https://github.com/arcnid/ffc-decomp /home/user/arcnid/ffc-decomp`. Usable code, credit arcnid in commits.
- State: 22/22, nothing running, no children, no check-ins. Queue: **15,972 done**, 2,050 fail_sonnet,
  1,001 todo, 377 blocked, 10 skip_integrate.
- Session 16 (STATUS "Done (session 16)"): Sonnet-only re-runs over fail_sonnet with the new prompt (plain -O4 +
  arcnid idioms). Pilot wave 59: 15/60 + clone 83. Waves 60-62 (one per group, run in the orchestrator, integrate
  of wave N overlapped with matching of N+1): 172/675 (25%) + 36 clone = +207, ~$45 (~$0.26/Sonnet match).
- How to run a wave here: `python3 tools/cycle.py N-1 --next 240 --next-n N --group G --tier sonnet --status fail_sonnet`
  (writes work/waveN_{0..3}.json as `{names, tier:'sonnet'}`), run 4 Workflows `tools/workflows/match_wave.js` with
  those JSONs as args, `git checkout -- tools`, `tools/save_wave.py N <4 outputs>`, commit, then
  `tools/cycle.py N pending/waveN/result.json --next 0 --group G --bg` (commits+pushes itself; no commits meanwhile).
  Drop functions a recent wave just failed from the picks (and set them back to fail_sonnet). Cost from transcripts
  under /root/.claude/projects/*/subagents/workflows/wf_*/agent-*.jsonl (Sonnet 5.5: $2 in, $10 out, $0.20 cache read).
- **Next (awaiting the human's choice):** (1) more Sonnet waves over the ~1,500 remaining fail_sonnet shapes (~$100,
  ~25% expected); (2) Opus pilot on >=90% near misses (docs/LONGTAIL_PLAN.md Phase 2-3, needs OK); (3) free work:
  mark non-C misses `blocked` (DS Protect ov015 stubs/data tables, clz soft-float, 8-reg ldm/stm copies, epilogue-only
  fragments; see STATUS) and plan adding missing symbols (tail-call targets like 0x0216b128, 0x021553c4 have none;
  ~500 ov002 vtable-only functions absent; config work).
- Free leftovers: 24 arcnid funcs not imported (3 duplicate-prototype compile errors; ~16 targets missing from
  symbols; 1 at 96%). Recheck arcnid's repo for new matches (`tools/import_arcnid.py`).
- Read docs/STATUS.md ("Done (session 16)" and "(session 15)"), docs/LONGTAIL_PLAN.md and docs/CHILD.md before acting.

Rules: the orchestrator only merges child branches and edits tools/, docs/STATUS.md and docs/LONGTAIL_PLAN.md
(session 15 ran integrate/clone itself with no children running — allowed as an explicit exception). No src/,
config/ or delinks.txt edits and no mwld while an integrate/ninja runs. Asm only for BIOS swi stubs. Never
`pkill -f`/`pgrep -f` a pattern from your own command line (it kills your shell; kill by PID). Commit and push
often. At the context-guard warning: update STATUS.md, push, rewrite this handoff, end with a paste-ready
handoff prompt.
