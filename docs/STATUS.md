# Status / Handoff

## Phase
0 done → 2/4 starting. Sonnet tier exhausted (session 13); Opus phase planned, not started. Full ARM9 rebuild matches: `ninja` → `dsd check modules` all 22 modules OK.
**14,696 queue rows done (~76%)** (see `cut -d, -f5 queue.csv | sort | uniq -c`). Build: 22/22 modules OK.

## Policy change (human, 2026-10-17)
- **Asm allowed for SDK/library functions that cannot be C** (mwcc `asm` bodies: mrs/msr/swp/clz/mcr, MI copy/fill,
  OS interrupt helpers, CARD/SND), never game logic. The port build skips asm TUs and lifts/overrides them.
  Pending integration: work/sdk_import (146 matches, 71 asm) and work/xmatch/matches (24, 21 asm).

## Done (session 26) — CARD_LockRom hang fixed (r0-value voids), host reaches game threads, $0 model spend
- Branch claude/ffc-decomp-port-continue-op63wf (from dh1p2g). Bootstrap OK (refs, emsdk, apt). Main ninja: see
  work/ninja_s26.log (was in mwld at handoff; confirm 22/22 with `tail work/ninja_s26.log`).
- **Why IME stayed 0**: not an IME site. NitroStartUp (func_02056898) -> OSi_InitCommon -> CARD init -> CARD_LockRom
  (func_0207cabc) waited forever: OS_TryLockByWord (func_02086974) is a `void` def that tail-returns
  OSi_DoTryLockByWord; port_argpad's return passthrough gave callers r0 = first arg (0x41) -> "lock busy" -> VAlarm
  retry, which needs IRQs -> deadlock before the game ever reaches its OS_EnableIrq.
- **tools/port_r0.py** (new): classifies what a function leaves in r0 at its returns from the ROM (linear capstone
  scan: arg0 / call / other). **port_argpad**: void defs whose class has 'call' (subset of call+arg0; 3,940 defs)
  become `unsigned int f() { unsigned int __r0 = arg0; ... __r0 = g(..) / ({__auto_type __v = g(..); __r0 = __v;
  __v;}) ...; return __r0; }`; port_lift's VOID_DEFS excludes them. Fixed CARD hang and allocator func_0205681c.
- **Header-declared functions unblocked** for passthrough params: port_configure writes `pad_header()` copies of
  include/ to build/port/<t>/include (searched first); ninja cc rule now has gcc depfiles.
- Host after r0 fix: past NitroStartUp, game threads run; crashed in func_020095b8(tmp, 0) from func_0205323c
  (header-declared -> was zero-padded; real r1 passthrough). Header fix rebuilt at handoff (work/port_host_s26c.log)
  — **not yet run**. Next: `FFC_RUN=1 gdb -batch -ex run -ex bt build/port/host/ffc`, trap on toward title.
- wasm: `-sASYNCIFY -sASYNCIFY_STACK_SIZE=65536` added to the wasm link flags (not built). win32: not built.
- Progress chart: queue.csv unchanged (16,650 done) -> no refresh needed.
- Cost: $0 model spend (no subagents); orchestrator context ~200k.

## Done (session 25) — host past func_0204f6b0, game loop spins (IME never enabled), $0 model spend (Sonnet subagents only)
- Branch claude/ffc-decomp-port-continue-dh1p2g (from 8p6a9g). Bootstrap OK, **22/22 confirmed** (work/boot_s25.log).
- **tools/port_argpad.py** (new, hooked into port_configure's fix/ copy): (1) short callee decls get the def's params,
  short calls padded with the caller's own params at those positions (ARM passthrough); (2) transitive: fixpoint over
  all src/ (6 rounds, 988 defs extended with `__padN` params, 1890 calls padded, 46 zero-pads); (3) **return-value
  passthrough**: a void-def callee whose result is used -> `({ T __rv = A0; g(__rv,...); (R)__rv; })` (2821 calls, 407
  callees; e.g. ctor func_02060448 returned `this` via untouched r0). C++ callees used as fn pointers are skipped.
- **port_lift**: `CALLV(f)` for src callees defined void (keeps r0/r1).
- port_configure: mwcc lvalue-cast rewrite `((T*)x) = v` -> `(*(T**)&x) = v` (not after `*`).
- port/src: OS_Halt (func_02088f94) override = ffc_hal_vblank(); hal.c raise_irq wakes OSi_IrqThreadQueue
  (data_02fe0544, via OS_WakeupThread) like OS_IrqHandler_ThreadSwitch; VCount IRQ raised each frame if enabled.
- **Host state**: no crash; game thread sleeps, idle thread halts, frames tick, but **IME (0x04000208) is never
  written** (gdb watch from ffc_crt0: no write), so no IRQ is ever dispatched (DISPSTAT 0xc020, IE=4 VCount).
  Next: find the game's OS_EnableIrq site (63 literal-pool refs to 0x04000208 in arm9; src/main candidates via
  `grep -rln 0x04000208 src/main`, e.g. func_02088f30, func_020866bc, func_0204f338) — check whether it runs on host
  (maybe a lifted/stand-in or rewrite_abs mapped it wrongly) and why IME stays 0.
- Progress chart refreshed (124 commits, 16,650 done): https://claude.ai/artifact/2S63n827gd12BcrUgMoNU2
- Not done: wasm (-sASYNCIFY) and win32 rebuilds.
- Cost: $0 model spend (1 Sonnet subagent, 3 rounds); orchestrator context ~200k.

## Done (session 24) — free tiers integrated: +567 matched, recover_funcs applied, $0 model spend (Sonnet subagents only)
- Branch claude/ffc-decomp-port-continue-8p6a9g (from lkc03y). Bootstrap OK, **baseline 22/22** (cold ninja ~2 h incl. setup).
  pret clones must be named /home/user/ref/{pokediamond,pokeheartgold,pret_pokeplatinum} (xmatch.py paths).
- **recover_funcs fixed + applied, 22/22**: real failure = 9 arcnid "functions" at 0x021d3368+ lie in our ov002 .rodata,
  so their callers' BL relocs resolved to overlapping ov012 (dsd delink "No symbol found ... overlay 12"). Fix: skip
  arcnid starts outside ov002 code; drop candidates that BL into their own non-code section. 0x021bbe84 is a start.
  630 ov002 functions added (symbols, 3260 relocs, todo rows). Fast repro trick: a git worktree with extract/ + tools/bin
  symlinked, `dsd delink --config-path config/usa/arm9/config.yaml` takes 1 s (no full ninja needed).
- **import_arcnid** on the 630: **392 MATCH**, 93 SKIP, 4 NO (work/arcnid_import/, log work/arcnid_import.log).
- **Integrated 567/571** (tools/integrate --list work/all_pairs.csv, one ninja, 37 min): arcnid 392 + sdk_import 146 +
  xmatch 23 (1 dup) + permuter 6; 4 compile errors (ov002 021bf880/021c7e2c/021c7eb0/021c8124). queue.csv marked done.
- **sdk_match bl/blx mask** (as xmatch.xmask) + sdk_layout rerun: unique 1223->1230, fuzzy100 156->159; import_sdk rerun
  -> only 1 new (func_0208641c, already from xmatch). 2 old matches no longer reproduce (0207b684, 02085758; already done).
- Queue after integration: **16,539 done** / 20,040 (82.5% funcs, 45.3% code bytes), 1,927 fail_sonnet, 1,230 todo,
  333 blocked. Progress chart: https://claude.ai/artifact/2S63n827gd12BcrUgMoNU2 (data: git history of queue.csv).
- **clone.py run**: 78 cloned, **77 integrated** (22/22). **Permuter full run**: 501 runnable fail_sonnet >=90% (<=0x200,
  5 C++ skipped), --stack-diffs, 180 s cap, 3 parallel, 7.7 h -> **34 exact (6.8%)**, all verified, **34/34 integrated**
  (22/22). Sources work/permuter/matches2/, REPORT2.md; scripts *2.py in work/permuter/.
- Queue at end: **16,650 done / 20,040** (83.1%), 1,893 fail_sonnet, 1,153 todo. Session total: +678 matched.
- Pitfall: a watcher `while pgrep -f "tools/clone.py run"` matched its own command line and never exited.
- Not done: port step (passthrough calls via port_argcheck.py; host crash in func_0204f6b0) — untouched this session.
- Cost: $0 model spend (2 Sonnet subagents); orchestrator context ~200k.

## Done (session 23b) — free decomp tiers measured, nothing integrated yet, $0 model spend (Sonnet subagents only)
- Remaining at start: 3,438 non-done (2,050 fail_sonnet, 1,000 todo, 377 blocked, 10 skip_integrate, 1 fail_haiku).
- **tools/import_sdk.py** (libntr source -> our names via relocs, verify with tools/try; `--kinds`, `--jobs`):
  287 sdk_map unique/fuzzy100/layout rows -> **146 MATCH** (102 fail_sonnet, 8 todo, 36 blocked; 71 are mwcc `asm`
  bodies) in work/sdk_import/<func>.c, results.txt; near-misses in nomatch/ (~20 at 97-99.6%). 78 SKIP = MSL/C++
  runtime with no libntr source (MSL headers extracted to /home/user/cwmsl/msl; MSL sources not tried).
  Files are standalone (own typedefs, `/* cflags */` line): integration needs one TU per func + delinks entries.
- **tools/xmatch.py** (compile pret/pokeplatinum, pokeheartgold, pokediamond lib C with our mwcc, masked byte-match):
  **24 MATCH** (16 fail_sonnet, 8 blocked; 21 asm, 3 C: CRYPTO_RC4Init 0208f09c, RC4FastInit 0208f0f0, OS_WaitIrq
  0208641c) in work/xmatch/matches/. Low yield (pokediamond = SDK 3 / mwcc 2.0). Clones in /home/user/ref/.
  **sdk_match.py gap**: ARM `bl` vs ROM `blx` to Thumb callees not masked -> apply xmatch's xmask, rerun
  sdk_layout.py, then import_sdk.py for more candidates.
- **Permuter pilot** (upstream decomp-permuter arm32 mode, /home/user/permuter, wrap.py compile backend,
  binutils-arm-none-eabi): 50 fail_sonnet at >=98.8% -> **6 exact** (12%, 20-130 s each) in work/permuter/matches/,
  REPORT.md. Use `--stack-diffs` (else false score 0); skip `-lang c++` TUs. Full run: 544 fail_sonnet >=90% (533
  <=0x200) ~7 h on 4 cores at 3 min cap -> ~65 matches expected; 742 at >=80%.
- **recover_funcs**: apply + ninja failed twice (work/ninja_recover.log); a subagent was on attempt 3 (631 funcs
  applied, recover_funcs.py edited) at handoff. If config/ + queue.csv are still dirty and ninja is not 22/22:
  `git checkout config/ queue.csv`, diagnose from the log, fix tools/recover_funcs.py, retry. Then import_arcnid
  (arcnid has 498 ov002 funcs not in our queue -> est. ~350 matches).
- Research (ranked): permuter > cross-repo lib matching > decomp.me/DS Decomp Discord > Batch API + caching for paid
  waves (~50% off) > m2c drafts. No other Fossil Fighters code decomp exists.
- **Free-tier total ready or estimated: ~146 + 24 + 6 + ~65 (permuter full) + ~350 (arcnid) ≈ 590.**

## Done (session 23) — host boots into ffc_main + game threads, $0 model spend
- Bootstrap OK (branch claude/ffc-port-continue-lkc03y, from 3y9arg). **22/22 confirmed** (ninja EXIT 0, work/ninja_s23.log).
- Boot fixes (host, `FFC_RUN=1 build/port/host/ffc`):
  - hal.c: OSBootInfo.boot_type = 1 (ROM) at 0x027ffc40/0x02fffc40.
  - **port_configure rewrite_abs**: absolute DS addresses in src/ that fall in a data/rodata/bss section of the TU's
    module, main, itcm or dtcm become `(ffc_blob_<mod>_<sec> + off)` in the fix/ copy (210 TUs). Cause: matched TUs
    write globals via `ABS(u32, 0x0214075C)` while data symbols live in host blobs (CARD_Enable flag was never seen).
  - **DTCM = one 16 KB host blob** (port_gendata.port_sections; used by configure + lift); hal.h FFC_DTCM /
    FFC_INTR_CHECK_BUF use it. port_lift maps raw literal-pool constants in 0x02fe0000-0x02fe3fff to the blob
    (linker arena/stack bounds).
  - Overrides for **register-passthrough decomps** (matched code that relies on r0-r3 surviving a call):
    CARDi_ReadRomSyncCore 0207d8b0, FS_SetCurrentDirectory 0207e220 (sdk_override.c); MSL mem/str funcs on host libc
    (new port/src/msl_override.c: memset wrapper called __fill_mem(object)).
  - **tools/port_argcheck.py** (new): lists calls whose callee decl has fewer params than its src definition ->
    work/port_argcheck.txt: **351 calls in 321 TUs**. Candidates for an automatic fix (pad missing args with the
    caller's same-position params, as ARM passthrough does) or per-function overrides.
- Host now passes NitroStartUp, FS_Init, static ctors, crt0 callbacks, enters **ffc_main**, creates the game thread;
  **current crash**: game thread func_02049684 -> 01ff8be8 -> 02049764 -> 02049784 -> 0204e89c -> 0204e8b8 ->
  func_0204f6b0 (+101, reads *esi, esi bad). Debug: `FFC_RUN=1 gdb -batch -ex run -ex bt build/port/host/ffc`.
- Not done: steps 2 (recover_funcs/import_arcnid, waits on 22/22) and 3 (wasm, win32).
- Cost: $0 model spend; orchestrator context only (~200k).

## Done (session 22) — host boots into FS_Init, $0 model spend
- Bootstrap OK (branch claude/ffc-port-continue-3y9arg, from rxibxu). Extras installed (i386/multilib/mingw, emsdk).
  **22/22 confirmed** (ninja EXIT 0, after the handoff).
- **port/src/sdk_override.c** (new): PXI_InitFifo (func_02089100, no handshake, ARM7 handler bits all set),
  PXI_SendWordByFifo (func_02089218 -> ffc_arm7_recv stub + reply queue delivered via data_021418c8 =
  FifoRecvCallbackTable; no tags emulated yet), OSi_SyncWithOtherProc (func_020867f4, no-op),
  **OS threads via host coroutines** (port/src/coro.c: ucontext / Win32 fibers / emscripten fibers):
  OS_InitContext 020872d8, OS_SaveContext 02087344 (notes the running coroutine, returns 0), OS_LoadContext
  02087390 (switch; resumed thread returns from it = SaveContext's TRUE); MIi_DmaSetParameters 01ff8f28 ->
  ffc_hal_dma_kick (hal.c: immediate DMA, repeat DMA ignored, dummy DMA to 0 skipped); CARD: ReadRomWithCPU
  0207d67c (memcpy from ROM file), IsRomDmaAvailable 0207d830=0, ReadRomIDCore 0207d55c, ReadRomStatusCore,
  RefreshRomCore no-ops.
- **port_configure**: a src/ TU defining a function that port/src defines is skipped (DEF_RE); its other functions
  get lifted. Host/lift built with -fno-omit-frame-pointer -funwind-tables: gdb bt now works.
- hal.c: loads ROM (FFC_ROM, default rom/baserom_usa.nds), copies header to 0x027ffe00/0x02fffe00, card ID at
  0x02fffc00; IRQ dispatch runs in IRQ mode (ffc_cpsr) and does OS_IrqHandler_ThreadSwitch (data_02141510 ->
  func_02086c78).
- **Host run**: first thread starts; now **segfaults in FS_Init** (func_0207fe54 -> FSi_InitRomArchive 0207fd30 ->
  FS_SetCurrentDirectory -> FSi_FindPathDefault 0207f078, NULL path/FNT). Cause: OS_GetBootType (func_02088a2c)
  is probably not 1 (ROM) -> no ROM archive tables loaded. Next: make OS_GetBootType return 1 (override, or set
  the IPL boot-type word it reads), then continue trapping. Debug scripts: run under `gdb -batch -ex run -ex bt`.
- Not done: steps 2 (recover_funcs/import_arcnid) and 3 (wasm rebuild, win32) — blocked on 22/22 first.
- Cost: $0 model spend; orchestrator context only (~185k).

## Done (session 21) — lifter wired + ARM mode, host boots to PXI handshake, $0 model spend
- Bootstrap OK (branch claude/ffc-port-continue-rxibxu, from 6zcx73). **22/22 confirmed** (ninja EXIT 0).
  cwmsl (MSL headers + CW libs) NOT set up.
- **port_lift wired** (port_configure: lift step after src objs -> build/port/<t>/lift/lift_0NN.c, 32 chunks,
  compiled with cc_lift, added to gendata objs (objs_all.txt) and the link). ffc_r1, ffc_cpsr in runtime.c,
  ffc_lift_swi in bios.c. gendata counts undefineds from lift objs too.
- **ARM mode added to port_lift** (data processing w/ shifter carry, ldr/str/ldrh/ldrd, ldm/stm, mul/long/DSP mul,
  swp, clz, mrs/msr -> ffc_cpsr, mcr/mrc -> 0, swi, b/bl/blx/bx, conditional exec, `mov lr,pc` + pc write = call,
  `subs pc, lr` = return). Result: **3438 functions lifted (5 partial), stand-ins 2354 -> 107** (rest = abs symbols
  with no module: 0x01ffxxxx/0x021dxxxx, plus *_unk). Host compiles + links clean.
- Boot: ROM `Entry` (crt0) lifted runs ITCM-copied probe stubs -> crash; replaced by C `ffc_crt0` in runtime.c:
  NitroStartUp (func_02056898) -> ctors -> func_02004da0 -> ffc_main. **Now hangs in func_02089100 = PXI init
  handshake** (polls REG_PXI_CNT/SYNC 0x04000180/184 for ARM7). Next: port/src/sdk_override.c — any symbol defined
  in port/src is skipped by the lifter, so override PXI init (no-op), then PXI_SendWordByFifo (0x02089218) / FIFO
  callbacks with an ARM7 stand-in (FS/CARD rom reads -> read the ROM file, RTC -> host clock, sound -> nop),
  OS_GetBootType etc. as traps appear. Debug: `FFC_RUN=1 build/port/host/ffc &` then `gdb -p` + bt (lift code has no
  frame pointers; consider -fno-omit-frame-pointer in cc_lift).
- **recover_funcs.py fixed (not yet applied)**: BL targets of candidates (+ all relocs) inside a candidate split it
  (Thumb) or drop it (ARM); uncovered call targets pull an adjacent candidate start back (<=4 bytes, varargs
  `push {r0-r3}`) or become new candidates. Real cause of the session-20 failure: target 0x021bbe84 = `push {r0-r3}`
  2 bytes before arcnid's 0x021bbe86. Dry-run before the 2nd rule: 559 -> 568 candidates; re-run the dry run
  (check `grep moved work/recover_funcs.txt` shows bbe84), then `git revert 11f33df4` is NOT right anymore (old
  symbols) — instead run `recover_funcs.py --apply`, configure, ninja, 22/22, import_arcnid.
- wasm: runtime boots unconditionally on emscripten (FFC_RUN=0 disables); not rebuilt. win32 not built.
- Pitfall: `pkill -f tools/recover_funcs.py` killed the shell (pattern in own cmdline) — kill by PID.
- Cost: $0 model spend; orchestrator context only (~185k).

## Done (session 20) — wasm links, P3 HAL started, Thumb lifter written, $0 model spend
- Bootstrap OK (branch claude/ffc-port-continue-6zcx73). Extras as session 19, plus `apt-get update` first (else
  gcc-multilib "no candidate") and `apt-get install gcc-mingw-w64-i686` for win32. **22/22 not re-confirmed** this
  session: the only ROM ninja ran with recover_funcs applied and failed (below); tree is reverted to the session-19
  config, which was 22/22.
- **recover_funcs --apply breaks dsd delink** (commit df1fb23c, reverted in 11f33df4): 4 BL relocs in ov002
  (from 0x021b140c/0x021b1458/0x021b14aa/...) target 0x021bbe84, which now falls inside recovered func_ov002_021bbe78
  (dsd: "No symbol found ... use to:0x021bbe78 add:0x8"). Fix in recover_funcs.py: a reloc/BL target strictly inside
  a candidate must split it (start a new function there) or drop the candidate; then re-apply (`git revert 11f33df4`
  is the quick way back), configure, ninja (~75 min), 22/22, then import_arcnid. Log: work/ninja_recover_fail.log.
- **wasm link fixed (gate met)**: (1) 9 TUs declare functions as data (`extern uint8_t func_X[];`, address-only use)
  -> port_configure compiles a rewritten copy (build/port/<t>/fix/) with `void func_X();`; (2) cross-TU prototype
  mismatches -> wasm built with **-flto** (one LLVM module; WebAssemblyFixFunctionBitcasts writes adapters);
  (3) `-sGLOBAL_BASE=256MB` (emcc wants a size suffix) keeps DS addresses below 0x10000000 free.
  `ninja -f port/build.wasm.ninja` -> build/port/wasm/ffc.{js,wasm} links with 0 warnings. **Open: ffc.wasm is only
  17 KB** — LTO dropped the game: under node `getenv("FFC_RUN")` is not process env (emscripten ENV), and probably
  the whole call graph from ffc_main got pruned or main never references it at runtime. Next: run boot path
  unconditionally on wasm (or `-sENVIRONMENT=node` + `ENV` preRun), check wasm size (~tens of MB expected).
- **win32**: not built yet. Toolchain verified: `clang --target=i686-w64-windows-gnu -fuse-ld=lld -static` makes a
  PE32 (needs gcc-mingw-w64-i686). Target flags are in port_configure (image base 0x40000000). Next: build, fix.
- **P3 started**: port/src/hal.c maps the DS address space at its real addresses (ITCM, 16 MB main RAM incl. DTCM
  0x02fe0000, WRAM, I/O, palette, VRAM, OAM, GBA slot=0xff) via mmap/VirtualAlloc; host exe linked at 0x40000000
  (`-Wl,-Ttext-segment`). VBlank/IRQ emulation dispatches through OS_IRQTable (= data_02fe0020, from sdk_map's
  OS_SetIrqFunction), IF owned by the HAL, HW_INTR_CHECK_BUF 0x02fe3ff8. port/src/bios.c = C for all 18 swi stubs.
  gendata now emits `ffc_ctors` (main + overlay .ctor tables); runtime.c runs main's ctors then ffc_main.
  gendata no longer counts libc refs of port/src objects as game undefineds (they had become zero-data globals).
  **Host run**: `FFC_RUN=1 build/port/host/ffc` -> maps OK, first trap `__sinit_020a6638` (163 __sinit funcs are
  queue-blocked: never decompiled).
- **tools/port_lift.py (written, NOT yet run/compiled)**: Thumb->C static recompiler for every Thumb function no
  TU defines (2,180 stand-ins, 727 KB; 129 ARM stay traps). Uniform ABI `u32 f(r0..r3, s0..s5)`, r1 via ffc_r1,
  local stack array, relocs -> host symbol addresses, pc values point into a static copy of the function bytes,
  `add/mov pc` dispatch via switch. Still to add: `ffc_r1` + `ffc_lift_swi()` in port/src (runtime.c/bios.c),
  ninja wiring in port_configure (lift step after src objs: `port_lift.py --objs objs.txt --out <t>/lift`, compile
  lift_*.c, add to the gendata objs and link), then test on host: expect C compile fixes first, then the boot trace.
  This replaces paid LLM waves for the boot path (P4 can later swap lifted fns for real C one by one).
- Cost: $0 model spend; orchestrator context only (~190k).

## Done (session 19) — P1 gate met, P2 host link, $0 model spend
- Bootstrap OK, **22/22** (cold ninja + mwld ~75 min on 4 cores). Branch claude/ffc-port-continue-jyx4n9.
  Container-local extras: ref repos are now at /home/user/ref/{libntr,libntrsystem,pokeplatinum} (sdk_compile.py
  expects these names); MSL headers/sources at /home/user/cwmsl/msl; **prebuilt CW libs** (MSL_C/CPP/Extras,
  NITRO_Runtime, A/Ai/T) extracted with `unzip -qjo .assets/cw/cw_dsi-1_1-patch1-20090525.zip "*.a"` + `ar x`
  per lib into /home/user/cwmsl/obj/<lib>/ (rename members without .o suffix to *.o); `apt-get install
  libc6-dev-i386 gcc-multilib` for the host link; emsdk at /home/user/emsdk (`./emsdk install latest`, activate).
- **P1 SDK naming, gate met: main SDK range 1036/1269 = 82% named** (807 unique byte matches + 95 layout + 134
  fuzzy), MSL/runtime range 0x02090000-0x0209d2b4: 284/354 (181 unique + 26 layout + 77 fuzzy). docs/sdk_map.txt.
  How: prebuilt CW MSL/Runtime libs as extra --objs (MSL range 0 -> 51% unique); libntr TCM header fix
  (SDK_IRQ_STACKSIZE type, HW_EXCP_VECTOR_BUF; in tools/patches/libntr-twl.patch) -> os_thread/os_arena/
  os_interrupt/os_reset/os_exception compile (+35 unique); new **tools/sdk_layout.py** (object function order between
  anchors: exact-count gaps = "layout", order-preserving DP alignment with masked-token similarity >=0.8 = "fuzzyNN";
  scoped to main 0x02077000-0x0209d2b4 + itcm/dtcm, game-range anchors are noise); **tools/sdk_cov.py** = coverage.
  -O4,s variant adds nothing (SDK is -O4,p). Rebuild: `sdk_compile.py --thumb --out build/sdk_t` and
  `--out build/sdk_a`, then `sdk_match.py --objs build/sdk_t/obj build/sdk_a/obj /home/user/cwmsl/obj --out X`,
  `sdk_layout.py --objs (same) --map X --out docs/sdk_map.txt`. Still failing ARM9 files: libntr asm blocks mangled
  by clang-format (os_system, mi_memory, os_systemCall, mi_secureuncompress), fs_command/card_request (missing defs).
- **P1b recover_funcs**: dry run checked (work/recover_funcs.txt): 559 ov002 candidates, 11 rejected. Fixed the end
  sweep (pad 0000/46c0 belongs to a function only if a pool follows = dsd convention; arcnid sizes win when they
  fit). **--apply NOT run yet** (ROM ninja was busy) -> next.
- **P2 host skeleton: links (gate met)**. `python3 tools/port_configure.py [--target host|wasm|win32]` then
  `ninja -f port/build.<target>.ninja`. 15,954/15,972 src TUs compile (18 BIOS asm stubs skipped, port supplies C)
  with clang -m32 (-ffreestanding, -Dmain=ffc_main, C++ TUs via `-lang c++` cflags). **tools/port_gendata.py**
  emits LLVM IR per module: one blob per section (ROM bytes, bss zero), 13,455 data pointer words relocated
  (relocs.txt `load`) to function symbols or blob+offset, 9,328 data-symbol aliases, 2,354 trap stand-ins
  (`ffc_trap`, port/src/runtime.c). Result build/port/host/ffc (i386 ELF, 5.5 MB) runs ("linked");
  FFC_RUN=1 calls the game main -> segfault (no HAL/SDK init yet = P3).
  **wasm**: all TUs compile (1 min); wasm-ld fails on *symbol type mismatch* (func_* declared as data/var in some
  TUs vs function elsewhere, plus __stack_pointer/__indirect_function_table from -ffreestanding objects?) -> next.
  Expect also wasm signature mismatches (same func, different prototypes across TUs) -> stand-in traps at call.
- Cost: $0 model spend; orchestrator context only (~185k).

## Done (session 18) — P0 + P1 start, $0 model spend
- Bootstrap: setup/fetch/extract/configure OK; ninja was at 15975/15978 (link pending) at handoff -> **re-check 22/22**.
  Extra container-local deps: MSL headers from cw_dsi-1_1 zip -> /home/user/cwmsl/msl
  (`unzip -qo .assets/cw/cw_dsi-1_1-patch1-20090525.zip "*ARM_EABI_Support/msl/*"`, move msl/ there);
  libntr needs tools/patches/libntr-twl.patch (`git -C /home/user/ref/libntr apply`; nitro/memorymap.h defers to twl/).
- **P0 versions** (arm9 module params @0x02000fcc): SDK word 0x05047531 = **TwlSDK 5.4, relstep 30001**;
  `[SDK+NINTENDO:DWC5.3.30054.20100706.1000_TWLDWC_5_3_PATCH1_SSLGDB4]`, `[SDK+NINTENDO:WiFi3.3.30052.201006221129]`,
  `[SDK+Actimagine:Mobiclip SDK V1.2.1]`, UBIQUITOUS CPS/SSL, MSL C++ (Metrowerks:: streambufs). No NitroSystem string.
- **P0 MMIO** (`tools/mmio_count.py --sdk-map docs/sdk_map.txt`): literal-pool I/O refs: game 244 funcs / 365 words
  (mostly 0x0400020x IME/IE/IF, 0x04000000 DISPCNT, 0x04001000 sub DISPCNT), SDK 98 / 175. Small -> HAL shim is cheap.
  (Not yet split: some "game" hits are unnamed SDK funcs in 0x02090000-0x0209d000.)
- **P1 SDK naming**: `tools/sdk_compile.py` (libntr twl_hyb + libntrsystem, our mwcc 1.2p2; `--thumb` = SDK_CODE_THUMB,
  FFC links the **Thumb** libs) + `tools/sdk_match.py` (symmetric BL/pool masking, reloc-target disambiguation)
  -> side map **docs/sdk_map.txt** (no config renames). ARM 320/353 + Thumb 317/353 files compile.
  Result: 2307 FFC funcs hit, 872 unique. Main SDK range 0x02077000-0x02090000: 1269 funcs, **753 unique (59%)** +
  117 ambiguous. Gate (80%) **not met yet**. 0x02090000-0x0209d2b4 (~400 funcs, 0 hits) = probably MSL/CW runtime
  (+ DWC/Mobiclip): compile MSL sources next. Overlay "ambiguous" hits are mostly tiny game funcs (noise).
- **P1b ov002 recovery**: arcnid manifest vs our ov002: our functions cover 169 KB of 252 KB .text; 570 arcnid starts
  (78.6 KB, 498 of them C in arcnid) fall in gaps no symbol covers. `tools/recover_funcs.py` written (reloc-target +
  arcnid candidates, Thumb end sweep, adds symbols + BL relocs + queue rows with --apply) but **not run** yet.
- Cost: $0 model spend; orchestrator context only.

## Done (session 17) — goal changed to a port
- Human decision: target = **Windows + browser (Emscripten) port, personal use**; licence/provenance of libntr,
  ntrtwl SDK trees and melonDS code is not a concern. Paid matching stops. See docs/LONGTAIL_PLAN.md (top) and
  reports/DS PC port approaches.md (roadmap P0-P6, gates) + reports/DS decomp long tail strategy.md (free tiers).
- Research notes: research_notes/ (8 files). No waves run, $0 model spend on matching; research ~1M subagent tokens.
- Started P0: ffc-assets cloned + .assets symlinked; bootstrap chain (setup, fetch_assets, CW stage, extract,
  configure, ninja) launched in the background -> work/setup.log, work/ninja.log ("EXIT 0" + 22/22 = done).
  A new session must redo it (container-local). Reference clones (container-local): /home/user/ref/{cybervisi0n_libntr,
  cybervisi0n_libntrsystem, cybervisi0n_pokeplatinum}, /home/user/arcnid/ffc-decomp.
- libntr: meson, targets arm/linux/win64/nx (no wasm yet), sdk_version_major=5 + hardware_type=twl_hyb for DSi;
  353 .c files / 145k lines; libntrsystem = NitroSystem (fnd, g2d, g3d, gfd, snd).

## Done (session 16)
- Bootstrap OK (22/22). New: match_wave.js takes `{names, tier: 'sonnet'}` to skip Haiku (fail_sonnet re-runs).
- **Sonnet pilot, wave 59** (`mkwave sonnet 60 --status fail_sonnet --dedup`, new prompt: plain -O4 + arcnid idioms):
  **15/60 matched (25%)**, 0 of the 15 used plain -O4 (2 C++, 1 ARM). cycle clone pass **+83** (dedup picks big
  shape groups) -> +98 done; integrated 98/99. Standalone `clone.py run` after: +0.
  Queue: 15,765 done, 2,223 fail_sonnet, 1,035 todo, 377 blocked.
- Cost (from subagent transcripts, Sonnet 5.5 rates): 7.69M cache-read, 0.87M cache-write, ~14k output tokens
  (output likely undercounted) -> ~$4 for 60 functions, ~$0.26 per wave match, ~$0.04 per function done incl. clones.
  ~26 min wall for 60 (52-wide).
- Misses: 7 near-misses >=93% (regalloc/order), ov009 STL-sort cluster (stack temps, <20%), 3 DS Protect asm stubs
  (func_ov015_021d5450, _021d6304, ...) and 1 this-adjust veneer (func_0209923c) -> should be `blocked`, not fail.
- Widening (human OK 2026-10-16), budget ~$48: dedup shapes in fail_sonnet = main 909 / ov0-3 623 / ov4-18 691, so
  one 240-wave per group (`cycle.py --status fail_sonnet`, Sonnet-only). Children spawned 06:09 UTC:
  wave 60 main session_01UjpRRQzS8qBgHr6GumNmae (claude/ffc-wave60-main), 61 ov0-3 session_01Rs2FNGiQ4fSZuqpWMdJ5P7
  (claude/ffc-wave61-ov0-3), 62 ov4-18 session_01Qbbe4FZL7Hrwaa5ezqU74j (claude/ffc-wave62-ov4-18).
  Merge: `python3 tools/merge_queue.py origin/claude/ffc-wave60-main:main origin/claude/ffc-wave61-ov0-3:ov0-3
  origin/claude/ffc-wave62-ov4-18:ov4-18`, ninja, `tools/clone.py run`. More waves (~$145 for 3x3) need the human's OK.
  **Children all blocked at once on tools/setup.sh** (auto mode ignores an approval relayed in the prompt; ~$0.40 each);
  archived. Human chose: run waves 60-62 in the orchestrator (already bootstrapped). The 45 wave-59 failures were
  dropped from the picks -> 675 functions (main 219, ov0-3 236, ov4-18 220). Children need the human to approve
  setup.sh in each child chat; prefer running waves in an already-bootstrapped session.
- **Waves 60-62 results** (Sonnet-only over fail_sonnet, 675 funcs, orchestrator, integrate overlapped with the next wave):
  | wave | group | Sonnet | clone | integrated |
  |---|---|---|---|---|
  | 60 | main | 47/219 (21%) | +6 | 53/53 |
  | 61 | ov0-3 | 62/236 (26%) | +6 | 67/68 (1 skip_integrate) |
  | 62 | ov4-18 | 63/220 (29%) | +23 | 86/87 |
  Total 172/675 (25%) + 35 clone; final `clone.py run` +1 -> +207 done. Cost ~$45 (90.5M cache-read, 10.2M cache-write,
  0.18M output, Sonnet 5.5 rates) = ~$0.26 per Sonnet match, ~$0.22 per function done. Wall ~2.5 h for 3 waves.
  Queue: 15,972 done, 2,050 fail_sonnet, 1,001 todo, 377 blocked, 10 skip_integrate.
- Recurring miss classes (for Opus / tooling): register-allocation-only near misses (many >=90%); mwcc CSE of a global
  address the target reloads from a second pool word (ov006 cluster); unexplained dead stack frames; tail calls to
  addresses with no symbol (pool word unresolved: e.g. 0x0216b128, 0x021553c4, 0x021c85d4, 0x021c8634 -> the
  missing-symbols gap, config work); non-code/asm (DS Protect ov015 stubs + data tables, clz soft-float, ldm/stm
  8-reg copies, epilogue-only fragments) -> candidates for `blocked`.

## Done (session 15)
- Bootstrap: `tools/setup.sh` needed the human's OK (auto-mode blocks external code). Cold ninja ~45 min, mwld link
  ~25-30 min on this container (STATUS said 8.7 min); give background builds a 2 h timeout.
- **arcnid import (LONGTAIL Phase 1.00)**: `tools/import_arcnid.py <arcnid clone> <out> [funcs]`. arcnid's matcher
  masks relocs, so their externs are placeholders; the importer maps each reloc to our symbol via relocs.txt,
  renames, statics the other functions of a multi-function unit, and verifies with tools/try (both -O4 and -O4,p).
  86 candidates -> 62 match exactly and are integrated (52 + 10 multi-function). Then clone.py +34.
  Queue now: 15,667 done, 2,238 fail_sonnet, 1,118 todo, 377 blocked. Build 22/22.
  Not imported: 3 compile errors (two placeholder externs = one real function with different prototypes; hand-fix),
  1 at 96%, ~16 "no reloc"/C++-mangled (targets missing from our symbols, see below).
- **Plain -O4 is real in this game**: ~half the arcnid matches need `/* cflags: -noO4,p -O4 */` (= -O4,s). Fixed
  ffclib.cc_flags_for and configure.py, which passed `-noO4,p` to mwcc (usage error). Re-flagging the saved
  fail_sonnet attempts with -O4 matched 0/661 (attempts were tuned to -O4,p), so the flag goes into the prompt.
- mkwave prompt: plain -O4 option + arcnid-proven idioms (vtable/PTMF/delete, loop/upcast/struct-copy shapes).
  mkwave `--status fail_sonnet` now picks any tier and `--dedup` no longer drops the pick's own shape.
- **Function discovery gap**: code not covered by any function symbol = 3.9% of all .text, but ov002 33% (~500
  vtable-only functions arcnid has, absent from our symbols.txt), ov010 22%, ov014 18%, ov015/016 (DS Protect).
  These are outside queue.csv, so "% done" overstates ov002. Adding them = config work (symbols + delinks).
- Next (proposed to the human): Sonnet re-run over fail_sonnet with the new prompt before any Opus spend.

## Done (session 12)
- Cycle 20 (waves 20-23, one link): 878/960, clone +7, 662 files (41daee4). First attempt hung ~2 h bisecting a
  `main` checksum failure: func_0208f404 (wave 22) passes try but breaks the main link (cause unknown; excluded in
  pending/wave22/result.json). **Faster than integrate's bisect**: diff build/usa/build/arm9.bin vs
  extract/usa/arm9/arm9.bin and map the first differing offset to its function (it was the only one).
- Parallel sessions (speed-up step 5): `ffclib.GROUPS` (main | ov0-3 | ov4-18); `--group` on mkwave/clone/cycle;
  `cycle.py N-1 --next 240 --next-n N --group G` with no outputs = mkwave only; `tools/merge_queue.py ref:G ...`
  (scope check, 3-way per-row queue merge, delinks.txt union driver via .gitattributes + duplicate-TU dedupe);
  child prompt in docs/CHILD.md.
- Pilot children (spawned from 5a45128, before cycle 20 landed): wave 24 ov0-3 (session_01BQpfagqJYJVGL8GHMJnTnR,
  branch claude/ffc-wave24-ov0-3), wave 25 ov4-18 (session_01UsLB7Pr6bvLGyPPV3xW3T6, claude/ffc-wave25-ov4-18).
  stash@{0} = killed cycle-20 partial (local only; drop).
- Pilot OK: wave 24 211/240, wave 25 204/240; merge_queue merged both (11,286 done, 19,410 rows), ninja 22/22, clone pass +0.
  Child wall time ~70 min (bootstrap ~40 of it). Round 2 (3 groups) spawned 22:14 UTC: wave 26 main
  (session_01NXCNLPFaubaFJPjXB2GYwJ), 27 ov0-3 (session_01HGe2ZxLkmmAxA9HKiVEfK5), 28 ov4-18
  (session_017sgvTySCk1eKwPVAGXvD6C). Merge: `python3 tools/merge_queue.py origin/claude/ffc-wave26-main:main
  origin/claude/ffc-wave27-ov0-3:ov0-3 origin/claude/ffc-wave28-ov4-18:ov4-18`, ninja, `tools/clone.py run`.
- Round 2 merged (22:14 -> 23:33, ~80 min): wave 26 main 208, 27 ov0-3 215, 28 ov4-18 212 -> 11,921 done;
  ninja 22/22, clone +0 (children's own clone passes already cover their groups).
- Round 3 spawned 23:34 UTC, 3 waves per child, integrate overlapped (docs/CHILD.md): waves 29/32/35 main
  (session_019xgmCnTNwdrCqiJpWvAgpY, claude/ffc-waves29-main), 30/33/36 ov0-3 (session_01LrpZvQ4LeVDTCDV2PGygCs,
  claude/ffc-waves30-ov0-3), 31/34/37 ov4-18 (session_01JiEi2RPdA98jZa6WBTjAMa, claude/ffc-waves31-ov4-18).
  When all show "Wave 35/36/37:": `python3 tools/merge_queue.py origin/claude/ffc-waves29-main:main
  origin/claude/ffc-waves30-ov0-3:ov0-3 origin/claude/ffc-waves31-ov4-18:ov4-18`, ninja, clone pass.
- Round 3 merged: main 29/32/35 = 204/200/200; ov0-3 30/33/36 = 211/48/6; ov4-18 31/34 = 157/17 (37 skipped:
  Haiku tier exhausted in overlays). 12,965 done; ninja 22/22 after the ov merges.
- Round 4 (sonnet tier in overlays; haiku in main): 38/40/42 ov0-3 (session_01HVPYDcvwvdBAaeNjrbE59y,
  claude/ffc-waves38-ov0-3), 39/41/43 ov4-18 (session_01EcvmuSm59j2zYXb5U7aR1Y, claude/ffc-waves39-ov4-18),
  44/45/46 main (session_01LcjAusF7Kg6GUuYWfyCRgs, claude/ffc-waves44-main). Merge each as it finishes
  (`merge_queue.py origin/<branch>:<group>`), ninja, clone pass; respawn that group (next free wave numbers: 47+).
- Matching takes ~15 min/wave; **integrate is the bottleneck** (children's first round-4 integrates ran >40 min,
  likely bisecting). tools/integrate now pins breaking functions by a byte diff of build/usa/build/<module>.bin vs
  extract (1a89c9db); falls back to bisect only on a size change. Children were told to sync that one file
  (merge_queue now accepts tools/ files identical to HEAD).
- Round 4 results: ov0-3 38/40/42 = 156(+37 clone)/180/178; main 44/45 = 24/34, 3/3 (main Haiku exhausted; 46 empty).
  Merged -> 13,544 done. Remaining todo: sonnet tier (main 1,466, ov0-3 688, ov4-18 1,657), opus 517, and ~320
  haiku-tier todo whose shapes wait on clone attempts. Plus ~840 fail_sonnet (future: Opus/manual).
- Running children: ov4-18 39/41/43 sonnet (session_01EcvmuSm59j2zYXb5U7aR1Y, claude/ffc-waves39-ov4-18),
  ov0-3 47/48/49 sonnet (session_016cF95xmFzrppJdiZGW9mfY, claude/ffc-waves47-ov0-3),
  main 50/51/52 sonnet (session_01Dcyo9hvbbefrgjCBbc7tQi, claude/ffc-waves50-main).
- ov4-18 39/41/43 = 160(+80 clone)/168/152 merged -> 14,127 done. The orchestrator's clone pass had integrated some
  of the same functions -> add/add conflicts; merge_queue now takes the group owner's C for those.
  Respawned ov4-18: 53/54/55 sonnet (session_01TcVSAaT6UVRui2CQtrnSnb, claude/ffc-waves53-ov4-18). Next free: 56+.
- Main 50/51/52 sonnet = 151(+134 clone)/164/139 merged (f0853d06) -> 14,696 done (76%). Respawned main 56/57/58
  sonnet (session_01PcT6CPn5rAbD6mwsbELEzx, claude/ffc-waves56-main). ov0-3 47/48 = 144/137 (49 pending).
  ov4-18 53 = 127 (54/55 pending).

## Done (session 13)
- Bootstrap note: `tools/fetch_assets.sh` is NOT optional with a symlinked .assets (it assembles rom/baserom_usa.nds).
  docs/CHILD.md updated (also: final integrate `--bg`; a foreground integrate hit the 600 s tool limit).
- ov0-3 47/48/49 = 144/137/73 merged (94ca4daa), ninja 22/22, clone pass +1 (same fn the session-12 orchestrator
  pushed as ada47910). Respawned ov0-3 59/60/61 sonnet (session_01FkoxYjDQJeNUpGE5eZvFUf): **skipped all three -
  ov0-3 Sonnet tier is dry** (24 todo left, all shape-busy or unaligned).
- ov4-18 53/54/55 = 127/109/34 (+7 clone) merged (9c39b9db), ninja 22/22, clone +0. **ov4-18 Sonnet tier dry too**:
  263 of 266 sonnet todo share an asm shape with a fail_sonnet fn (mkwave --dedup holds them) -> Opus phase. Not respawned.
- main 56/57/58 = 115/99/28 merged (0973033b), ninja 22/22, clone +0. **Sonnet tier now dry in all 3 groups**
  (mkwave --dedup picks 0 sonnet / 2 haiku in main). Queue: 15,571 done (~80%), 2,289 fail_sonnet, 1,163 todo,
  377 blocked. No children running. Next: Opus phase below - waits on the human's go-ahead (cost).

## Next phase: Opus tier (planned session 13; not started)
**Superseded in detail by docs/LONGTAIL_PLAN.md (audited session 14): read it first.** Group counts below are stale.
Remaining (queue at 6f1c47d5): fail_sonnet main 588 / ov0-3 674 / ov4-18 387; opus todo 138 / 177 / 202;
blocked 377; haiku+sonnet todo held back by busy shapes (clear themselves via clone passes).
1. Tools: `tools/workflows/match_opus.js` - one Opus fn-matcher per function, prompt carries the best prior attempt
   (best_pct + file from pending/); `mkwave --tier opus` already works, `--status fail_sonnet` exists (add sort by
   best_pct desc); save_wave/cycle: an Opus miss -> `fail_opus`.
2. Pilot on ov0-3 (its slot is free): one wave of 60 opus-tier todo, then 60 fail_sonnet with best_pct >= 90.
   Record match rate and $/match vs the Sonnet waves (child costs: ~$50-75 per 3-wave sonnet child).
3. Gate: below ~25% matched, stop and ask the human before spending more; else run it in the 3-group child loop
   as each group's Sonnet tier empties (ov4-18 855 / main 612 sonnet todo left).
4. blocked 377: read the `note` column, bucket the causes, decide manual vs tooling. Asm stays BIOS-swi-only.

## OPEN at end of session 12 (orchestrator)
- Running children (merge each when its final "Wave N:" commit lands or its session is completed):
  ov0-3 claude/ffc-waves47-ov0-3 (final 49), ov4-18 claude/ffc-waves53-ov4-18 (final 55),
  main claude/ffc-waves56-main (final 58). Merge: `python3 tools/merge_queue.py origin/<branch>:<group>`, push,
  `ninja` (22/22), `python3 tools/clone.py run`, commit src config queue.csv, push. Respawn from docs/CHILD.md
  (tier sonnet; next free wave numbers 59+). Check with `git log --oneline origin/<branch> ^HEAD --`.
- A ninja + clone pass after the f0853d06 merge may still be uncommitted if the session died: run `ninja`, then
  `tools/clone.py run`, commit.
- Remaining after Sonnet tier: ~1,340 fail_sonnet + 517 opus-tier -> needs an Opus/manual approach (next phase).
- stash@{0}: killed cycle-20 partial (local only, drop).

## Done (session 11)
- Bootstrap OK (22/22). **Cycle 19 "all modules fail" root cause found + fixed** (commit "strip_weak: ignore $d mapping symbols"): a weak C++
  dtor with a literal pool (IME save/restore guard, e.g. func_02052d10/02055070/0205509c) has a local `$d` symbol,
  which was counted as a non-weak function → the unreferenced dtor (+0x18) stayed in main → every module shifted.
  Now `$`-prefixed mapping symbols are ignored. Full ninja after the fix: 22/22.
- The killed first cycle-19 integrate's partial TUs are in `git stash@{0}` (local only; drop it).
- **Cycle 19 rerun started `--bg --next 0`** (work/cycle_19.log). If no "Wave 19:" commit: `ninja` (22/22) then
  `python3 tools/cycle.py 19 pending/wave19/result.json --next 0`.
- Waves 21 (221/240: 199 Haiku/22 Sonnet) and 22 saved in pending/ (NOT integrated, rows `queued`).
- Wave 23 saved in pending/wave23 (NOT integrated, rows `queued`).
- New Sonnet fix patterns: unnamed callee 0x021a4360 = func_ov009_021a4360 (and 0x021686f4 = func_ov000_021686f4) —
  prompt tip worth adding; 1-byte struct by value for ldrb/strb stack args. Unfixed: self-address literal with thumb
  bit (func_0208828c), clz idiom (func_0209a4cc), fragments without push (func_ov000_0214c7c8 → block).

## Done (session 10)
- Bootstrap OK (22/22). Cycle 15 landed (cbcf6be: 227/227), cycle 16 (279ce6c: 222/240 + clone 5, 227/227),
  cycle 18 (21dc95c: 210/240 + clone 1, 211/211). block_sysreg: 0 new each time. Wave 17 was never made (skipped).
- Cycle 19 integrate: 4 builds failed in ALL 22 modules (main-level shift or link error) → full bisect, >1.7 h; culprit unknown at handoff (see work/integrate.log).
- Wave 19 saved (pending/wave19); **cycle 19 was running `--bg` at session end** (work/cycle_19.log) — if no
  "Wave 19:" commit on the branch: `ninja` (22/22) then `python3 tools/cycle.py 19 pending/wave19/result.json --next 0`.
- Wave 20 saved (pending/wave20, NOT integrated; rows `queued`). Next: `python3 tools/cycle.py 20
  pending/wave20/result.json --next 240 --next-n 21 --bg`, run wave 21 meanwhile.
- Haiku hit rate falling (~85-88%), Sonnet fixes mostly r0-live passthrough, C++ virtual/RAII guard (IME save/restore
  with `sub sp,#4` frame = C++ guard struct ctor/dtor), struct-by-value params. Unfixed: stm-writeback zero fills,
  `adds rX,r0,#0` copy before beq, literal re-load instead of CSE, 8-byte frames with no stores.
- Clone yield now tiny (+1..+10/cycle).

## Done (session 9)
- Branch `claude/ffc-matching-decomp-wave7-mt7q4y`. Bootstrap order that works: `tools/setup.sh` → `tools/fetch_assets.sh`
  (builds rom/ from .assets) → `tools/setup.sh .assets/cw` → extract → configure → ninja (22/22).
- block_sysreg: +2, then +24 after cycle 11 (re-run after every cycle).
- Cycle 11 (waves 11+12+13 + clone): 657/720, clone +14, 671/671 integrated (cce14bb).
- Wave 14: 221/240 (210 Haiku/11 Sonnet) → pending/wave14; cycle 14 started `--bg --next 0`.
- Wave 15: 217/240 (209/8) → pending/wave15 (not integrated). Cycle 14 landed (4b5b431: 221/221). Cycle 15 (wave 15) started `--bg` at session end — if no "Wave 15:" commit, rerun
  `python3 tools/cycle.py 15 pending/wave15/result.json --next 0` after `ninja` 22/22.
- Wave 16: all 4 Workflows saved → pending/wave16/result.json (240 names, NOT integrated).
- Waves 15/16 were made while a cycle ran with `python3 -c "import sys;sys.path.insert(0,'tools');import cycle;cycle.mkwave(N,240,'haiku')"`
  → so run their cycles with `--next 0` or with `--next-n` past the last made wave.
- Recurring Sonnet fixes (prompt tips): pass-through params keep r0–r3 live (scratch moves to r3); return the callee
  result keeps r0 live; `volatile u32 buf[2]; (void)buf;` reserves a stack frame with no stores; C++ real virtual
  call instead of manual vtable. Unfixed class: literal address CSE'd into r4 across bl (target reloads).
- Don't `pkill -f` a pattern that appears in your own command line (kills the shell).

## Done (session 8)
- Bootstrap OK (22/22, ninja ~11 min cold). func_ov004_0214f580 blocked. `tools/block_sysreg.py`: 45 todo/fail funcs
  with mrc/mcr/mrs/msr (CP15/CPSR; mwcc has no intrinsics, workers burn Sonnet on them) → blocked. Re-run it after
  each cycle (wave 11's ~26 CP15 rows were still `queued`).
- **Link timing settled**: mwld writes `> build/x.bin` relative to the `-o` file's dir (so `-o work/t/arm9.o` →
  work/t/build/*.bin; safe scratch link, no lcf edit). `-map closure,unused` 520 s vs none 519 s, bins identical →
  keep the map; the link is ~8.7 min regardless.
- Cycle 9 (waves 9+10 + clone, first module-aware bisect) started `--bg` at ~16:58; it commits + pushes itself
  ("Wave 9: ..."). **If that commit is not on the branch, the container died mid-run**: `ninja`; if 22/22, rerun
  `python3 tools/cycle.py 9 pending/wave9/result.json pending/wave10/result.json --next 0` (precheck skips already-
  integrated TUs; record any applied-but-unrecorded TUs as done per session 3 note).
- Waves 11 (206/240: 197 Haiku/9 Sonnet; ~14 CP15 stubs wasted) and 12 (226/240: 220/6), ~8–10 min each, ~2.6M tok.
  Saved by new `tools/save_wave.py N <outputs>` → `pending/waveN/result.json` (+ C). **Not integrated.**
- Wave 13 saved to pending/wave13 (not integrated). Its rows are `queued`.
- cycle.py: `--next-n M` names the next wave (it defaulted to N+1 = 10 for cycle 9). Session trailer updated.
- Seen: func_ov001_0217c9e8 loads 0x02168b01 with an ambiguous `module:overlays(0,4)` reloc → try can't resolve it.
  Fix = pick the module in ov001 relocs.txt (config edit: only when no integrate runs). Others like it likely.
- Haiku fixes worth a prompt tip: r0-live register shifts ("return the input pointer/int keeps r0 live → temps
  in r1/r2") matched 3 Sonnet escalations in w11.

## Done (session 7)
- Bootstrap OK (22/22). cycle.py's first real run (cycle 8: wave 8 + clone, one integrate): the batch broke overlay 4 →
  plain bisect, ~7 min/link, **>2 h**. Culprit again `func_ov004_0214f580` (also reverted in w7's clone pass): clone.py
  re-picks it every pass → **mark it blocked in queue.csv**.
- `tools/integrate` now bisects by module: dsd checks modules separately, so after a failed build the items in
  passing modules are retried as one batch and only the failing modules' items are bisected (untested; committed).
- Waves 9 and 10 matched while cycle 8 integrated (overlap works; mkwave marks queued shapes busy):
  w9 229/240 (219 Haiku/10 Sonnet, ~3.2M tok, ~16 min); w10 208/240 (172/36, ~5M tok, ~36 min; Sonnet escalations
  rising: C++ virtual calls / PMF calls / dtor temps for 8-byte frames are the common fixes).
  Outputs: `work/wave9_out{0..3}.json`, `work/wave10_out{0..3}.json` (work/ is gitignored → lost with the container;
  the matched C is in work/<func>/). **Not integrated.** No worker commits.
- **Never run mwld outside ninja while an integrate may run**: the lcf writes `build/*.bin` by relative path. A
  scratch timing link overwrote them twice during cycle 8 → its checks in that window are suspect. After cycle 8:
  `rm build/usa/arm9.o && ninja` and confirm 22/22 before trusting its commit.
- Link timing (-map vs none): ~412 s vs ~416 s, but both scratch links exited 1 (see above) → redo with a scratch
  lcf whose `> build/...` paths point into a temp dir, with nothing else linking.

## Done (session 6)
- Speed-up plan steps 1, 2 and 4 are done; step 3 is code-complete but untested:
  1. Hook: `agent_id`/`agent_type` verified in subagent PostToolUse input (debug dump, 1-agent Workflow), guard skips them.
     fn-matcher.md: ignore guard messages, never git/docs. **But the Workflow harness relays the main user request to
     every worker and says it overrides the task text**: workers saw the whole campaign prompt; one (wave 8, workflow 3)
     abandoned its function and polled the clone pass for 45 min waiting to "do the session" (stopped). match_wave.js
     now tells workers to ignore session-level requests. **Keep the orchestrator's user prompt short, or check workers.**
  2. `ffclib.queue_update()` (flock `.queue.lock` + temp + `os.replace`) in mkwave/wave_done/clone; `FFC_QUEUE` env
     override. wave_done takes several outputs + `--dry` (prints CSV diff). Validated: wave 7 rebuilt from fd3a51a's
     queue diff → dry replay reproduces it exactly, as one file and split in two.
  3. `tools/cycle.py N <outputs...> [--next 240] [--bg]`: mkwave N+1 (split 60/file → work/waveN+1_<i>.json), then wave
     matches + clone.find(extra=wave matches as donors) → ONE integrate → queue → commit → push. **Not yet run.**
     Link timing with/without `-map closure,unused` not measured yet.
  4. Haiku cap 10; near-sibling hints in prompts (reg-renamed or one-instruction-different done shape: 289 haiku todo
     shapes); fixed tools/prompt (used removed mkwave.QUEUE).
- Clone pass after w7: +227/228 (func_ov004_0214f580 breaks overlay 4 → reverted; re-picked in cycle 8), committed. Run took ~1h45m because
  of the bisect. Queue: 305 blocked, 7110 done, 18 fail_sonnet, 240 queued (wave 8), 11737 todo.
- Wave 8 (4×60, first 240-name wave): 211/239 matched, ~3M subagent tok, ~10 min per workflow. Results + sources saved
  in `pending/wave8/result.json` (paths point at pending/wave8/*.c). **Not integrated.** func_ov001_0218b304 never
  finished (still `queued` → set back to todo). Wave 8's rows are `queued` in queue.csv.
- New blockers seen in w8: CP15 mrc/mcr (func_02087f04, func_02087f14) and CPSR mrs/msr (func_02088978) — not C, mark
  blocked (or allow as asm like swi stubs: decide). func_ov015_021d6304 DS Protect → blocked. func_02075780 needs
  `func_021640d1` in abs_symbols.txt. func_020376e0: literal-pool 0xf that mwcc always folds to movs.

## Done (session 5)
- Clone pass after w5: +277 (first run aborted: I broke the baseline mid-pass — never edit delinks/src while a clone
  pass may integrate). Wave 6: 56/60 (51 Haiku/5 Sonnet, ~850k tok, 10 min, run as 2 concurrent workflows of 30).
  Clone after w6: +133. Wave 7: 59/60 (54 Haiku/5 Sonnet, ~760k tok). **Clone pass after w7 NOT run yet.**
  Queue at handoff: 305 blocked    6883 done      18 fail_sonnet       1 status   12204 todo
- **Context-guard hook also fires inside wave subagents** (it reads the main transcript): in w7, 2 Haiku workers
  abandoned their function, rewrote STATUS.md and pushed (reverted; Sonnet then matched both). Fixed:
  the hook now exits early when its input has `agent_id`.
- **Absolute call targets**: `config/usa/arm9/abs_symbols.txt` = the 103 `module:none` call targets in relocs.txt
  (runtime-loaded code at 0x021d....; ov017/ov018 ambiguity). `tools/lcf_post.py` (lcf rule) defines them in the lcf;
  ffclib loads them as module `abs`, so prompts/try show `func_021d9ad8` etc. func_02082908 done.
- **Unaligned TUs** (replaces "multi-function TUs"): thumb funcs at addr%4==2. `tools/elf_align.py 2` lowers .text
  addralign on dsd gap objects (delink rule) and on unaligned complete TUs (mwcc rule); `lcf_post.py` wraps those
  objects in `ALIGNALL(2)`/`ALIGNALL(4)`. integrate: TU end is exact when non-zero bytes follow (else rounds over zero
  padding); refuses overlaps. All 11 blocked BIOS swi stubs integrated; unaligned todos now go through waves/clone.
- clone.py re-reads queue.csv before writing (mkwave's `queued` marks survive overlap); wave_done keeps `done` when
  a clone pass integrated a wave function first.
- func_ov016_02145358 blocked: DS Protect anti-tamper asm (ov015/ov016 obfuscated code is not C).
- Looked at, not done: C++ thunks are not adjacent to their target (func_0200d460 → func_0200d400): MW emits them
  with the vtable, so they need .data (vtable) TU support. `__sinit_*` store into .data globals (dynamic init) →
  need .init + .ctor + owning the globals' .data range in one TU.

## Done (session 4)
- Wave 3 clone pass: +752. Waves: w4 58/60 (56 Haiku/2 Sonnet, 712k tok, 11 min), w5 56/60 (52 Haiku/4 Sonnet, 849k tok, 15 min).
  Clone pass after w4: +283. **Wave 5 integrated via wave_done at handoff — clone pass after w5 NOT run yet.**
- **func_0200d5ec shape solved (C++)**: `/* cflags: -lang c++ */`, `extern "C"`, x - x routed through
  `inline int diff(const Num &a, int b)` where `Num` has a ctor + empty dtor → unfolded `subs` + 4-byte frame.
  mwcc emits the dtor out of line (weak, MW bind 13) → new `tools/strip_weak.py` (run by configure for C++ files)
  zeroes unreferenced weak .text sections (the original link dead-stripped them). 72/73 of the group done.
  Prompt tip added for `subs rX,rX,rX`.
- clone.py: second rewrite variant maps *derived* donor literals (`0x43<<2`=0x10c etc.; tried-cache key `f|d|d`).
- mkwave --dedup: a shape with a done sibling is re-queued once clone.py tried every pair and failed; the prompt
  then shows the sibling's matched C (`sibling_extra`). Unlocks e.g. 46/38/33-member haiku groups.
- Waiting on processes: `pgrep -f "clone.py run"` matches the waiting shell itself — use `pgrep -f "^python3 tools/clone"`.
- Unknown-symbol call: func_02082908 (96.6%) calls 0x021d9ad8 (no symbol) — add a symbol to unblock.
- Not started: C++ thunks (need class TUs + mangled names), `__sinit_*` (.init/.ctor/.bss TU: 42 in main, 121 in
  overlays), SWI asm decision: **decided — asm allowed for BIOS swi stubs only** (`wave_done.swi_stub`);
  7 integrated, 11 blocked (unaligned / padding → need multi-function TUs; `asm void f(void) { swi N\n bx lr }`).

## Done (session 3)
- Pilot wave (8 funcs): 6 Haiku + 1 Sonnet + 1 manual = 8/8 integrated; ~94k subagent tokens total.
- **Link flag `-nodead`** (was `-dead`): unreferenced matched objects were dead-stripped → whole-ROM shift.
- `tools/clone.py`: groups functions by asm *shape* (immediates/pool/symbol operands → `@`); for a todo func
  with a matched same-shape donor, rewrites the donor C (symbol renames + int literal map), verifies with
  `tools/try`, integrates. First run: **2,775 functions** cloned, all integrated in one build. `run` takes ~10 min.
  Shape cache: `work/shapes.json` (delete if symbols.txt changes).
- Waves now pass only names: `mkwave.py ... --names [--dedup]`; workers run `tools/prompt <func> <tier>`.
  `--dedup` = one rep per todo shape, biggest groups first (40 reps covered 2,682 funcs).
- `tools/workflows/match_wave.js` (Workflow scriptPath; args = name list) → `tools/wave_done.py <task .output>`
  integrates + updates queue (unintegrable matches kept in `pending/`). Then `tools/clone.py run`.
- Prompt tip added: passthrough args / stack 5th arg (the pilot's only Haiku+Sonnet failure).
- Waves: w2 40 reps → 33 (28 Haiku/5 Sonnet, 533k tok); w3 60 reps → 54 (32/22, 795k tok; Sonnet ran without
  its prompt — a `{}` in the mkwave template broke `tools/prompt`, now fixed: **escape braces in TEMPLATE tips**).
  Clone passes after w1/w2: +2,775, +527, +1,579. **Wave 3's clone pass NOT run yet** — run it first.
- `wave_done.py` rejects inline-asm matches except BIOS swi stubs (decided session 4).
- Blocked: 141 C++ this-adjust thunks (shape of func_0200d460: `push {r2}; ldr r2,=-0x80; ...; pop {pc}`) —
  compiler-generated, need C++ class TUs; 163 `__sinit_*` (break dsd; need .ctor/.init TU support).
- Manual (Opus) findings: PMF/8-byte struct args passed by value show as `push {r0-r3}` + `[sp,#0x14]` loads
  (func_020315ac). func_0200d5ec shape (73 funcs, tier→opus): unfolded `subs r1,r1,r1` + 4-byte frame; plain C,
  pointer diffs and inline helpers all fold — maybe C++ (`-lang c++` + `extern "C"` via per-file cflags, untested).
- clone.py: parallel verify (4 cpus), negative cache `work/clone_tried.json`, maps raw addresses of
  address-named symbols (V54 donors use `0x020ACEE0` literals). `run` can exceed 30 min with bisects: run with
  `nohup` in background with a long timeout. A killed integrate leaves applied-but-unrecorded TUs: if `ninja`
  passes, record them as done (see git log "Clone pass after wave 2").

## Done (session 2)
- dsd patches: main `.rodata` between `.exceptix` and `.init` (TWL layout; was shifting every overlay by 0x8880);
  gap delink files may share names in `dsd lcf`. Config re-inited (additive diff only); DSProt_BSS_ovNNN kept.
- `tools/configure.py` (ninja; from ph). Default target = `check_modules`. `check_symbols` fails on ov017/ov018
  data symbols (overlapping ITCM-region overlays) — not a byte mismatch, not yet fixed.
- `tools/ffclib.py` shared lib; `tools/try <func> <file.c>` (MATCH / capped diff, relocation-aware: BL/BLX/ABS32
  resolved from symbols.txt); `tools/asm <func>` (annotated target asm); `tools/integrate` (precheck → TU
  `src/<module>/<func>.c` + `complete` entry in delinks.txt → ninja → bisect/revert on failure; serial, locked);
  `tools/triage.py` → `queue.csv`; `tools/port_v54.py` (headers → include/ffc, per-function candidates in work/v54);
  `tools/mkwave.py <tier> <n>` → JSON items (func, prompt) for a Workflow wave, marks them `queued`.
- Compiler default 1.2p2 (build 1028; V54: all builds tie). Flags in `ffclib.CC_FLAGS` (configure imports
  nothing yet — keep both in sync). Per-file override on line 1: `/* cflags: -nothumb -nointerworking */`.

## Speed-up plan (audited end of session 5; implement in this order)
Measured: link (mwld, `build/usa/arm9.o`) ~395 s and runs twice per wave = most of the ~40 min cycle. A 33-agent
Workflow takes ~5 min; Haiku agent median 12 s, context peak median ~11k (max 22.5k) with fn-matcher — the old 47k
baseline is obsolete. Clone ceiling: only ~1,389 haiku + 637 sonnet todo funcs still have a reachable donor; ~10k need
their own agent (~170 waves of 60 at the current size).
1. Hook: verify `agent_id` reaches context_guard in subagents (temporary debug hook dumping stdin keys, 1-agent
   Workflow). Fallback: skip when the hook's `tool_use_id` is absent from the main transcript tail. Add to
   `.claude/agents/fn-matcher.md`: ignore guard messages, never touch git or docs/.
2. queue.csv: flock + write-temp/`os.replace` in mkwave, wave_done, clone (all rewrite it non-atomically; workers read
   it via tools/prompt). wave_done accepts several Workflow outputs and integrates once. Validate: replay
   work/wave7_result.json in a dry run → identical queue diff.
3. One link per cycle: clone.py takes the wave's matched `work/<func>/*.c` as donors (donor_src reads only src/ and
   pending/ today), then a single integrate for wave + clone. Time the link without `-map closure,unused` (14.6 MB
   xMAP, unused by tools). Overlap: integrate wave N while wave N+1 matches (try needs only extract/ + symbols.txt).
   Validate: 22/22 modules; integrated count = wave + clone.
4. Bigger waves: 4 Workflows × 60 names (8 concurrent agents, under the 10 guideline). One cycle command
   (wave_done → clone → mkwave → commit) printing ~3 lines. Haiku try cap 6 → 10; near-sibling C (register-renamed /
   one-instruction-different done shapes: ~156 shapes) as prompt hints via sibling_extra. Expect ~8× per session
   (240 names per ~20 min cycle).
5. Parallel sessions last: module-group filter for mkwave and clone.py (clone.py today integrates any module →
   duplicate TUs / delinks conflicts across branches). Balanced groups: main+itcm (4,814 todo) / ov000-003 (3,617) /
   ov004-016 (3,773). Row-keyed queue merge (each row from the branch owning its module); only the orchestrator edits
   tools/ and STATUS.md; after each merge: full ninja + one clone pass (178 todo shapes span groups). Child sessions
   hand off by spawning a fresh session. Pilot: 2 branches × 1 wave, merge, ninja, queue totals = 19,410. ~2.5× more.
Dropped after audit: packing several funcs per Haiku agent (saves <5%), mechanical fuzzy clone (rewritten donor C
compiles to the donor's own instructions), baseline-build stamp (ninja is already a no-op on an unchanged tree).

## Next steps (in order)
-4. Session 13 = keep the 3-group child pipeline running: see "OPEN at end of session 12".
-3. (done) Session 12 = **parallel sessions (speed-up plan step 5)**. Cycle 19 landed (cc2ec99). First: `python3 tools/block_sysreg.py`;
   integrate 20-23 in one link: `python3 tools/cycle.py 20 pending/wave2{0,1,2,3}/result.json --next 0 --bg`.
   Meanwhile build (only tools/, no src/config edits): `--group G` for mkwave.py and clone.py (G = main|ov0-3|ov4-16:
   main+itcm+dtcm / ov000-003 / ov004-018; clone must only integrate into its group); a row-keyed queue merge
   (`tools/merge_queue.py`: each row taken from the branch owning its module); child-session prompt.
   Pilot: 2 child sessions (create_session, own branches off this one) x 1 wave each, merge into this branch,
   `ninja` 22/22, one clone pass, queue totals = 19,410. Then scale to 3 groups; orchestrator only merges + edits tools/STATUS.
-2. (done) Session 11.
-1. (done) Session 10: after cycle 15 lands, `python3 tools/block_sysreg.py`; then `python3 tools/cycle.py 16
   pending/wave16/result.json --next 240 --next-n 18 --bg`; run wave 18 meanwhile.
0. Cycle 9 landed (2fdfda6: 437/480 + clone 364, 801/801 integrated, one link). `python3 tools/block_sysreg.py`.
   Then integrate waves 11+12 in one link: `python3 tools/cycle.py 11 pending/wave11/result.json
   pending/wave12/result.json pending/wave13/result.json --next 240 --next-n 14 --bg` and run wave 14 meanwhile.
   Per wave: 4 Workflows → copy the 4 task outputs to work/waveN_out{0..3}.json → `tools/save_wave.py N ...` + commit
   (survives the container) → `tools/cycle.py N pending/waveN/result.json --next-n N+1 --bg` once the previous
   cycle is done (`pgrep -f "^python3 tools/cycle"`). Workflow notifications are ~10k context each: ~4 waves/session.
1. Loop: `python3 tools/mkwave.py haiku 60 --dedup --names > work/waveN.json` → Workflow
   `{scriptPath: tools/workflows/match_wave.js, args: <names>}` → `python3 tools/wave_done.py <task .output>`
   → `python3 tools/clone.py run` → commit. Remaining multi-member shapes first, then singletons; then sonnet tier.
   Run each 60-name wave as two Workflows of 30 (they run concurrently).
2. 89 V54 behavioural non-matches: queue notes point at `work/v54/<func>.c` (regenerate with `port_v54.py check`).
3. Integrate limits: refuses functions with .data/.rodata (string literals, statics), unaligned ARM.
   Next: data-section TUs (unblocks string-literal funcs, C++ vtables+thunks, __sinit).
4. Phase 1 SDK signature labelling (`dsd sig`), naming pass later.
5. `configure.py` should import flags from `ffclib` to avoid drift; the integrated V54 files carry whole V54
   preambles (dedupe into headers later).

## Fresh-session bootstrap
No uploads needed. ROM parts + CodeWarrior zips live in the **private** repo `totomam/ffc-assets`
(attach it with add_repo, push access not needed). Then:
```sh
tools/setup.sh                     # builds patched dsd, wibo, 7zz
tools/fetch_assets.sh              # clones ffc-assets → .assets/ (or symlink an existing clone there)

tools/setup.sh .assets/cw          # stages mwccarm/mwldarm + license into tools/mwccarm/
tools/bin/dsd rom extract --rom rom/baserom_usa.nds --output-path extract/usa
python3 tools/configure.py && ninja   # delink + lcf + compile + link + check modules
```
`config/usa` is committed (from `dsd init --allow-unknown-function-calls`); don't re-run init unless needed.

## ROM
- `VDEE`, KASEKI2, 256 MiB. SHA-1 `f8263e010974259a955124b5395ec00f25079c35`, CRC32 `4b3bcd26`.
- Differs from V54's ROM hash, but the decompressed ARM9 SHA-256 matches V54's
  (`d053d0bf…5530b`), so V54's ARM9 addresses are valid.
- DSi-enhanced (TWL SDK), DS Protect in ov015/ov016, 19 overlays, 19,432 functions found (main ARM9: 8,163).

## dsd/ds-rom patches (tools/patches)
- ds-rom: ARM9 without footer (`has_footer`), TWL 16-byte autoload entries (`twl_extra`), DTCM at `0x2fe0000`.
- ds-decomp: uses patched ds-rom; `.ctor` runner search tries every entry call (TWL entry has an extra call after it);
  DS Protect relocations from overlays into main are allowed.
- `dsd rom build` still fails (DSi banner unsupported). Plan: verify per-module (`dsd check modules`);
  identical modules mean an identical ROM.

## Toolchain
- mwccarm builds 1024/1027/1028/1036 (hashes match V54); mwldarm 2.0 build 99. ~50 ms/compile under wibo.
- GitHub release downloads are blocked by this environment's network policy; `git clone` works.

## Orchestration (measured)
- 2 agents per workflow; concurrent workflows stack (3×2 ran at once).
- Haiku baseline ~47k tokens. `fn-matcher` agent type (Bash/Read/Write only) is available in new sessions.
- Context guard hook (`.claude/hooks/context_guard.py`) warns the orchestrator at 180k context.

## Prior work (V54)
- 871 functions mapped; 206 byte-exact, 77 behavioural. C sources + catalog committed in `reference/v54/`
  (`src/`, `include/`, `functions.csv`); to be ported after the build matches.

## Handoff template
At the context guard: update this file, push, then give the user a **paste-ready prompt** for the next session:
branch, bootstrap line, the first pending step (e.g. "wave N's clone pass not run yet"), the wave loop commands,
the keep-in-mind list (brace escaping, pgrep self-match, killed-integrate recovery, asm = swi stubs only,
C++ via cflags), optional manual items, and "end with a paste-ready handoff prompt".
