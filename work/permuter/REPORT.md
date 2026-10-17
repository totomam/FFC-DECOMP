# decomp-permuter pilot on fail_sonnet near-misses

Result: 6 of 50 near-misses (12%) reached an exact match, each verified with tools/try; 2 more could not run, so 6 of 48 runnable (12.5%).
Sources are in work/permuter/matches/ (preprocessed, first line holds the cflags comment). They are NOT integrated.

## Setup
- Tool: upstream simonlindholm/decomp-permuter, cloned to /home/user/permuter/upstream. It already has an `arm32` arch.
  The laqieer `arm` branch is an older MIPS-based hack with debug prints, so I did not use it.
- Installed `binutils-arm-none-eabi` with apt, which provides arm-none-eabi-objdump. Python deps were already present.
- /home/user/permuter/wrap.py is the compile.sh backend and does three things:
  1. Compiles with ffclib.compile_c, using the per-file cflags from a sidecar cflags.txt.
  2. Resolves relocations with ffclib.resolve_func, exactly as tools/try does.
  3. Emits a relocation-free ELF with the function bytes only, via arm-none-eabi-as `.incbin` plus a `$t`/`$a` mapping symbol.
  target.o is built the same way from the ROM bytes (ffclib.target_bytes). The permuter score is therefore a diff of resolved bytes, like tools/try.
- work/permuter/setup.py builds runs/<func>/ with these files:
  - base.c: `cpp -P -undef -D__MWERKS__ -Iinclude` applied to the best pending/ source.
  - cflags.txt, compile.sh, target.o.
- pick.py recompiles every pending/*/<func>.* attempt and takes the best by byte %.
- eval.py collects the scores and verifies each result with tools/try.
- Run command: `permuter.py --stop-on-zero -j1 runs/<f>`, 300 s cap, 4 in parallel (4 cores), via run1.sh and xargs.

## Setup issues
- Score blind spot: the permuter ignores stack-slot differences by default, so a function can score 0 while it is not an exact match.
  - func_ov004_0214e6c4 hit "score 0" at iteration 1 and tools/try said 98.8%, a sp-slot swap.
  - I reran it with `--stack-diffs` (base 16) and it matched in 77 s at -j4.
  - Use `--stack-diffs` for the full run.
- 2 of 50 are `-lang c++` sources (func_02049784, func_ov011_021c94bc, `extern "C"`). pycparser cannot parse C++, so they were not run.
- The score ignores registers and branch targets only partly, so the base score is often 5-15 even at 99% byte match.
- Speed is about 6 iterations/s per core, because wibo+mwcc takes about 0.15 s per compile.

## Results (50 candidates; 47 of the 48 runnable ran the full 300 s cap)
Selection: fail_sonnet, best_pct >= 90, size <= 0x200, highest pct first, at most 8 per TU. TUs covered: main/itcm and ov000-ov013. All candidates were 98.8-99.6% by bytes.

Matches (time to match, 1 thread):
- func_02073ea8: 47 s
- func_02005e88: 45 s
- func_ov000_0214fe4c: 129 s
- func_ov000_021592ac: 21 s
- func_ov001_02173bcc: 20 s
- func_ov004_0214e6c4: 77 s (with --stack-diffs, -j4)

Four of the six matched in under 2 minutes, and none of the rest matched after a full 5 minutes.
Improvements without a match, base -> best permuter score:
- func_ov003_0216b028: 10 -> 5 (not exact, tools/try 99.2%)
- func_ov009_021ae84c: 10 -> 5 (not exact, 96.1%)
- func_ov000_0214a8e8: 20 -> 10 (not exact, 99.5%)

Everything else stayed at its base score. The reported scores hide stack differences, so they are optimistic.

## Full-run plan
- fail_sonnet totals: 2050 functions. best_pct >= 95: 336. >= 90: 544 (533 of them with size <= 0x200). >= 80: 742.
- At about a 12% yield that is about 65 matches from the 544 candidates >= 90, at an average of about 4.4 CPU-min each (5 min cap, with early stops).
- Budget a 3 min cap (4 of 6 matched in <= 2 min): 544 x 3 min / 4 cores = about 6.8 h wall-clock, or about 27 CPU-h.
- At the 5 min cap that is about 11 h wall-clock. Including 80-90%: 742 x 5 / 4 = about 15.5 h wall-clock.
- Run with `--stack-diffs`.
- Skip the `-lang c++` sources, or strip the `extern "C"`.
- Use more cores if available. Scaling is linear since each function is independent.
- Cost is $0 of model spend.
