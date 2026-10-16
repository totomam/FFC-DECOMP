# FFC decomp — read this first

**Child sessions** (your prompt says "child session: waves ..."): ignore this file and follow your prompt.

**Everyone else: you are the orchestrator.** Handoff from session 22 (2026-10-16): read docs/STATUS.md "Done (session 22)" first, then 21/20.

- Branch: **`claude/ffc-port-continue-3y9arg`** (session 22; based on rxibxu). Develop on the branch
  your session is given, starting from this one.
- **Goal changed (human): Windows + browser port, personal use.** Paid LLM matching is stopped. Read, in order:
  docs/LONGTAIL_PLAN.md (top sections), reports/DS PC port approaches.md (roadmap P0-P6), docs/STATUS.md
  "Done (session 17)". No Opus without the human's OK.
- Bootstrap: add_repo totomam/ffc-assets, clone to /home/user/ffc-assets, `ln -sfn /home/user/ffc-assets .assets`,
  then `tools/setup.sh && tools/fetch_assets.sh && tools/setup.sh .assets/cw && tools/bin/dsd rom extract --rom
  rom/baserom_usa.nds --output-path extract/usa && python3 tools/configure.py && ninja` in the background, 2 h
  timeout (setup.sh needs the human's OK in this chat). Confirm 22/22.
  Reference repos (public): cybervisi0n/libntr, cybervisi0n/libntrsystem, cybervisi0n/pokeplatinum (the libntr
  port), arcnid/ffc-decomp (`GIT_LFS_SKIP_SMUDGE=1 git clone --depth 1`).
- Queue unchanged: 15,972 done, 2,050 fail_sonnet, 1,000 todo, 377 blocked, 10 skip_integrate.
- Session 22: sdk_override.c (PXI, OS threads as host coroutines, DMA, CARD from ROM file); host reaches FS_Init
  and segfaults (OS_GetBootType != ROM?). 22/22 confirmed. Next: (b) boot type,
  more traps toward title; (c) recover_funcs --apply + import_arcnid; (d) wasm (needs -sASYNCIFY for fibers) + win32.
- Session 21: lifter wired + ARM mode (stand-ins 107), C crt0, host hangs in PXI init handshake; recover_funcs
  fixed (split + start-move), not applied. Next: (a) sdk_override.c (PXI/ARM7 stand-in, FS from ROM file);
  (b) confirm 22/22, recover_funcs --apply, ninja, 22/22, import_arcnid; (c) wasm rebuild + size; (d) win32.
- Session 20: wasm links (LTO + data-decl rewrite), HAL memory map + C BIOS, host boots to first trap
  (__sinit), tools/port_lift.py written (not run), recover_funcs --apply broke delink -> reverted. Next: (a) wire +
  run port_lift on host; (b) wasm 17 KB/ENV issue; (c) win32 build; (d) fix recover_funcs split, re-apply, 22/22.
- Session 19: P1 gate met (82%), P2 host i386 link works, recover_funcs fixed but not applied, wasm link fails on type
  mismatches. Next: (a) recover_funcs --apply, configure, ninja, 22/22, import_arcnid on recovered ov002; (b) wasm link;
  (c) win32 (mingw) target; (d) P3 bring-up (HAL shim, SDK init, boot loop).
- Session 18 did P0 (versions, MMIO) and P1 tooling (tools/sdk_compile.py, sdk_match.py, docs/sdk_map.txt: 59% of
  main SDK range unique). Next: (a) confirm 22/22; (b) raise SDK coverage: compile MSL C/C++ runtime + -O4,s variant,
  tighten ambiguous; (c) `tools/recover_funcs.py` (dry run, inspect work/recover_funcs.txt, then --apply, configure,
  ninja, 22/22) then `tools/import_arcnid.py` on the recovered ov002 funcs; (d) P2.
- **Old next list (P0/P1, all ~$0):**
  1. Find SDK/NitroSystem/MSL version strings in arm9 (extract/usa/arm9/arm9.bin); count raw MMIO (0x04000000)
     accesses in game code.
  2. SDK naming (P1): compile libntr's arm-target SDK sources (sdk_version_major=5, twl_hyb) and libntrsystem with
     our mwcc (tools/mwccarm/1.2p2 via wibo), byte-match each function (relocs masked) against FFC functions,
     write a side map func_XXXX -> SDK name (do not rename config/ yet). Gate: >=80% of SDK-range functions named
     and covered by libntr's API.
  3. Free decomp tiers in parallel (long-tail report): arcnid recheck, clone, permuter; recover the ~500 ov002
     vtable-only functions (pointer-table scan -> symbols).
  4. Then P2: port/ tree (outside src/), clang -m32 host build + Emscripten target, trap stand-ins.

Rules: the orchestrator only merges child branches and edits tools/, docs/STATUS.md and docs/LONGTAIL_PLAN.md
(session 15 ran integrate/clone itself with no children running — allowed as an explicit exception). No src/,
config/ or delinks.txt edits and no mwld while an integrate/ninja runs. Asm only for BIOS swi stubs. Never
`pkill -f`/`pgrep -f` a pattern from your own command line (it kills your shell; kill by PID). Commit and push
often. At the context-guard warning: update STATUS.md, push, rewrite this handoff, end with a paste-ready
handoff prompt.
