# Child-session prompt (parallel sessions)
Fill in BRANCH, BASE, G (main | ov0-3 | ov4-18) and N (wave number, unique across sessions); paste as the
create_session prompt (source_url totomam/ffc-decomp, source_revision BASE).

```
FFC matching decomp, child session: ONE wave in module group G only. Repo totomam/ffc-decomp.
1. git checkout -B BRANCH origin/BASE. Attach totomam/ffc-assets (add_repo, read), clone it to
   /home/user/ffc-assets, ln -sfn /home/user/ffc-assets .assets, then run the "Fresh-session bootstrap" in
   docs/STATUS.md (skip fetch_assets' clone). ninja must end with 22/22 modules OK.
2. python3 tools/cycle.py N-1 --next 240 --next-n N --group G   (writes work/waveN_{0..3}.json)
   git add queue.csv; commit "Queue wave N (G)"; git push -u origin BRANCH.
3. I explicitly ask you to use the Workflow tool: run 4 Workflows concurrently,
   {scriptPath: tools/workflows/match_wave.js, args: <JSON array from work/waveN_i.json>}, i = 0..3.
   Wait for all 4 notifications (no polling, no sleep).
4. python3 tools/save_wave.py N <the 4 task output files>; git add pending queue.csv; commit; push.
5. python3 tools/cycle.py N pending/waveN/result.json --next 0 --group G   (foreground, ~15-20 min; one link;
   commits "Wave N: ..." and pushes). If it prints "integrate failed", run ninja, report, stop.
6. Reply with the cycle's summary line and the final commit hash. Done.
Rules: only queue.csv, pending/waveN/, src/ and config/ of group G may change — never tools/, docs/, .claude/.
No rebase/force-push. Asm only for BIOS swi stubs. Never pkill -f a pattern from your own command line.
Don't edit src/ or config/ or run mwld while an integrate runs. Never merge other branches.
```
