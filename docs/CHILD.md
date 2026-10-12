# Child-session prompt (parallel sessions)
Fill in BRANCH, T (haiku | sonnet: queue tier), G (main | ov0-3 | ov4-18) and waves A B C (unique across sessions; A-1 is any number);
paste as the create_session prompt (source_url totomam/FFC-DECOMP, source_revision = orchestrator branch,
outcome_branch BRANCH).

```
FFC matching decomp, child session: waves A, B, C in module group G only. Repo totomam/ffc-decomp.
1. git checkout -B BRANCH origin/claude/ffc-matching-decomp-wave7-mt7q4y. Attach totomam/ffc-assets (add_repo,
   read), clone it to /home/user/ffc-assets, ln -sfn /home/user/ffc-assets .assets, then run the "Fresh-session
   bootstrap" in docs/STATUS.md (skip fetch_assets' clone). ninja must end with 22/22 modules OK.
2. python3 tools/cycle.py A-1 --next 240 --next-n A --group G --tier T   (mkwave only: work/waveA_{0..3}.json)
   git add queue.csv; commit "Queue wave A (G)"; git push -u origin BRANCH.
3. For W = A, B, C (NEXT = the following wave; none after C):
   a. I explicitly ask you to use the Workflow tool: run 4 Workflows concurrently,
      {scriptPath: tools/workflows/match_wave.js, args: <JSON array from work/waveW_i.json>}, i = 0..3.
      Wait for all 4 notifications (no polling).
   b. python3 tools/save_wave.py W <the 4 task output files>.
   c. Wait until no cycle runs: a background Bash `while pgrep -f "^python3 tools/cycle" >/dev/null; do sleep 30; done`.
      Check the previous work/cycle_*.log ends with "pushed"; if it says "integrate failed", run ninja, report, stop.
   d. git add pending queue.csv; commit "Save wave W (G)"; push.
   e. W < C: python3 tools/cycle.py W pending/waveW/result.json --next 240 --next-n NEXT --group G --tier T --bg
      (integrates W in the background while you go straight on to a. for NEXT).
      W = C: same with --next 0 and no --bg (foreground). If mkwave yields 0 names, skip the remaining waves.
4. Reply with the three "Wave N:" summary lines and the final commit hash. Done.
Rules: only queue.csv, pending/, src/ and config/ of group G may change — never tools/, docs/, .claude/.
No git commits while a cycle runs (it commits itself). No rebase/force-push/merges. Asm only for BIOS swi stubs.
Never pkill -f a pattern from your own command line. Don't edit src/ or config/ or run mwld while an integrate runs.
```
