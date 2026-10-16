# Native PC ports of Nintendo DS games built from decompilations (and adjacent efforts): how they did the platform layer, and lessons for FFC

Research date: 2026-10-16. Method: shallow `git clone` of the public repos (the GitHub search API is blocked in this session), and reading READMEs, docs and code directly; plus web search. Local clones are in `/tmp/claude-0/-home-user-FFC-DECOMP/04cf4450-b920-5d19-b38d-50db686356a6/scratchpad/repos/`. "Observed in clone" means I read it in the repo at the commit noted. Anything marked UNVERIFIED comes only from a secondary source.

## Q1. Which DS decomps have PC ports or port branches, and how far along are they?

### Takeaway
Only one decomp-based DS PC port is fully playable as of Oct 2026: cybervisi0n's Pokémon Platinum port, built on **libntr**, a NitroSDK/NitroSystem replacement that also targets **TwlSDK (DSi)**. SM64DS has a native port in progress (smoke-test "gates", a download page exists), and Metroid Prime Hunters runs natively through a **static recompiler** (ndsrecomp), not a decomp. The other DS decomps either have no port (KH Days, Advance Wars DS, DQIV, PH, NSMB, pokeheartgold/pokediamond) or an abandoned rewrite-style fork (pokeplatinum-portable).

### Cited Findings
**Pokémon Platinum: cybervisi0n/pokeplatinum (playable; the reference design)**
- README: "experimental PC port of Pokemon Platinum based on the pret decompilation… powered by the libntr suite, a collection of libraries that replace the NitroSDK". "It should be possible to play the game from start to finish, but there could be crashes and graphical bugs." Targets: Linux, Win64 (MSYS2), NX/Switch ("working, but poor performance"), plus the original `arm` ROM build from the same tree. The user supplies a US ROM (CPUE01), and it is extracted on first launch. — [cybervisi0n/pokeplatinum](https://github.com/cybervisi0n/pokeplatinum) (observed in clone, HEAD 2026-10-10 "Traderoom: Fix crash")
- Stated goals: "Facilitate modding by allowing both a PC port and DS ROM to be compiled and debugged from the same source tree" and "Support all WiFi and multiplayer features". — [README](https://github.com/cybervisi0n/pokeplatinum)
- Policy: "Generative AI/LLM shortcuts were not used… Pull requests or code suggestions using AI will be rejected." AGENTS.md tells AI agents not to make PRs. Forks may not publish releases that bundle compiled assets. — [README](https://github.com/cybervisi0n/pokeplatinum) (relevant to FFC: we can't contribute upstream with AI-written code)
- Press: GBAtemp, "Pokemon Platinum PC port gets a surprise release". Snippets say it is fully playable with minor graphical bugs, with a 60fps patch, adjustable 3D internal resolution, LAN/internet local multiplayer, GTS partial, and no voice chat. — [GBAtemp](https://gbatemp.net/posts/10863352/) (403 on fetch; details from search snippets only, UNVERIFIED)
- Size of the game-side diff: SM64DS's analysis measured **61 commits / 318 files** of diff against pret main. Only ~34 files add `(u64)` casts, and the rest is "callback-signature widening, staticness toggles, and NitroStaticInit shims". Port-specific game code is 12 files in `src/port/` (ImGui debug panels plus a charcode converter). — [sm64ds-decomp port/docs/opie-assessment.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md)
- In my clone: 459 `#ifdef SDK_BUILD_ARM`, 137 `#ifdef SDK_PORT`, 28 `#ifndef SDK_BUILD_NX` and 17 `#ifndef SDK_BUILD_ARM` guards in `src/`. The meson `build_target` option is `arm|linux|win64|nx`. — [cybervisi0n/pokeplatinum meson.build](https://github.com/cybervisi0n/pokeplatinum) (observed in clone)

**Pokémon Platinum: arcanite24/pokeplatinum-portable (SDL3 rewrite, stalled)**
- An SDL3 fork that "does not maintain the original Nintendo DS build". Phases 1-3 are done (build, display primitives, BG/sprites, input). Game integration is in progress, and audio and FS are only "planned". Only macOS has been tested. Last commit 2025-12-08 ("new title screen"). — [arcanite24/pokeplatinum-portable](https://github.com/arcanite24/pokeplatinum-portable) (observed in clone)
- PORTING_PLAN.md measured the decomp at 956,024 LOC, 1,034 files, 649 files (62.8%) with DS-specific code, 1,302 unique NitroSDK/NitroSystem symbols and ~29,661 DS-API lines. It rejected "Stub Everything" ("Build constantly breaks (current state)") and pivoted to a "Clean Game Engine" that loads PNGs from `/res` with SDL_image and uses the decomp only as reference. Its PAL is ~6,770 lines, but 3D (~1,299 lines) and audio (~126) are "Stub only". — [PORTING_PLAN.md](https://github.com/arcanite24/pokeplatinum-portable/blob/main/PORTING_PLAN.md)

**Super Mario 64 DS: tangosdev/sm64ds-decomp `port/` (in progress, gated)**
- The decomp is 100% matched: 11,389 functions, of which 108 are byte-exact hand-written asm. CONVERTED (readable C++) is 39.6%, and LINKED is 93.5% of TUs. README: "Looking for the PC port? Download it here" → tangos.dev/downloads. — [sm64ds-decomp README](https://github.com/tangosdev/sm64ds-decomp) (observed in clone, HEAD 2026-10-16)
- port/README: "The current port is a suite of native smoke executables, not yet a standalone playable game". 32-bit Windows (MSVC x86) first. Gates 1-9: fx math, heap, FS over an asset catalog, GX display-list pump, model, animation, a fiber frame loop, the OAM sprite engine, collision, and the actor framework. — [port/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/README.md)
- Host-compile frontier on 2026-08-02: "compiles for host: 11,005 / 11,125 (98.9%) + 97 asm TUs -> HAL backlog". — [port/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/README.md)
- GamingBible (12 Jul 2026) calls it in development and "not yet available to play". — [GamingBible](https://www.gamingbible.com/news/platform/pc/super-mario-64-superior-version-pc-port-112607-20260708). The tangos.dev download page returned no readable content, so I could not confirm the state of the download (UNVERIFIED).

**Metroid Prime Hunters: mstan/MetroidPrimeHuntersRecomp (static recompilation, public alpha)**
- "Public alpha - bugs are expected… built on ndsrecomp… not a finished port." Windows and Linux v0.7.6-alpha. Has widescreen, an HD 3D renderer (up to 4x), mouse/gamepad "Prime Controls" and Wiimmfi multiplayer. The user supplies the ROM. — [MetroidPrimeHuntersRecomp](https://github.com/mstan/MetroidPrimeHuntersRecomp) (observed in clone)
- ndsrecomp: "a static recompiler for the Nintendo DS… lifts guest ARM code to C ahead of time". The runtime supplies the memory bus, two-CPU scheduling and hardware models. RAM-copied code runs on an interpreter tier. Also demonstrated: SM64DS (EU) title bring-up and Mario Kart DS Wiimmfi plus same-machine local wireless. Status is "very early pre-alpha (v0.6.10)". — [mstan/ndsrecomp](https://github.com/mstan/ndsrecomp) (observed in clone, HEAD 2026-10-04)

**Kingdom Hearts 358/2 Days: Yokimitsuro/khdays-decomp (no port in the repo)**
- 306/306 modules byte-identical, 23,125 of ~23,233 functions in real C (~99.5%). All game code is C except 2 `clz` functions. The repo "does not contain or produce a playable build". — [khdays-decomp README](https://github.com/Yokimitsuro/khdays-decomp) (observed in clone)
- amiibodoctor (15 Oct 2026) says "a companion port's front end boots natively" (boot logos, title, menus, character select) with no releases, but names no project. I could not find it. — [amiibodoctor](https://amiibodoctor.com/2026/10/15/all-decompilation-pc-ports-of-retro-games-listed/) (UNVERIFIED)
- The KH Days "PC" experience that does exist is an emulator fork, KHDays Melon Mix (a modified melonDS, single screen, controller), which is not a decomp port. — [vitor251093/KHMelonMix](https://github.com/vitor251093/KHMelonMix)

**No port found:** Advance Wars: Dual Strike (sturmds) uses melonDS/DeSmuME only as test harnesses (`make emu-smoke`) — [docs/third-party/melonds.md](https://github.com/sturmds/advance-wars-dual-strike-decomp). DQIV (GoldieLeGenie/DQIV-DECOMP) has no port mention (observed in clone). pokeheartgold and pokediamond have no port fork in search — [gittrend pret/pokeheartgold](https://gittrend.io/repo/pret/pokeheartgold). I found no PH/ST/NSMB/MKDS/Chrono Trigger decomp port. MKDS runs only via ndsrecomp. Search summaries say PH has a decomp with no port, and NSMB's decomp is early. — [web search via retroreversing list](https://www.retroreversing.com/source-code/decompiled-retail-console-games) (UNVERIFIED per-game)
- **arcnid/ffc-decomp** (same game): README goal "From there: PC ports, mods, romhacks, bugfixes". It has no port code or plan document. — [arcnid/ffc-decomp README](https://github.com/arcnid/ffc-decomp) (observed in clone, HEAD 2026-10-13)

### Inferences
- The only proven route to a playable DS decomp port is "**keep the game code, replace the SDK underneath it**" (libntr). The rewrite-the-engine route (pokeplatinum-portable) stalled before audio, FS and 3D.
- SM64DS shows the hard version: a game that hits hardware registers directly (EAD-style code that doesn't call the SDK) needs a register-level/MMIO host layer. FFC sits between the two cases. It uses the SDK (CodeWarrior + TWL/Nitro SDK), so most hardware access goes through SDK functions that a libntr-style layer can replace.

### Gaps
- I could not find the KH Days companion native port, or confirm what the tangos.dev SM64DS download contains.
- GBAtemp article details (date, author) were blocked (HTTP 403).

## Q2. How did they replace NitroSDK/TWL: 3D, 2D, VRAM, DMA, IRQ/VBlank, FS, save, touch/input, sound, dual screen, RTC, wireless?

### Takeaway
libntr replaces the SDK *library by library*. On PC, every MMIO register becomes a host global and every DS memory region becomes a host array. The 2D engines are rasterised in software from those register/VRAM/OAM globals each frame. **3D is intercepted at the API level** (each G3_* call becomes a draw message sent to an OpenGL 4.2 renderer with upscaling). Sound runs a **native C re-implementation of the ARM7 SDK sound driver** (sim7, including the SSEQ sequencer) on threads that emulate PXI. SM64DS's port does the same jobs at the register and command-FIFO level, with a software rasteriser and fibers for VBlank waits.

### Cited Findings
**libntr (cybervisi0n), the NitroSDK replacement**
- "Drop-in replacement for NitroSDK that targets Nintendo DS/DSi, PC, and other platforms… Fully compatible with NitroSDK. Translate DS 3D graphics APIs to OpenGL 4.2 with support for 3D upscaling. Simulate DS 2D graphics. Includes support for adding GUIs via Dear ImGui. Simulate local wireless multiplayer over LAN or the internet." — [cybervisi0n/libntr](https://github.com/cybervisi0n/libntr) (observed in clone, HEAD 2026-10-09)
- **DSi support (BETA):** `sdk_version_major=5` (TwlSDK), `hardware_type=twl_hyb` ("DSi enhanced application, supports running on original NDS and DSi") or `twl_ltd`. — [libntr README / meson.options](https://github.com/cybervisi0n/libntr) (observed). **FFC is twl_hyb, so this is directly relevant.**
- Sibling libraries: libntrsystem (NitroSystem/NNS), libntrwifi, libntrdwc, libvct (voice chat), consumed as meson `.wrap` subprojects. The pokeplatinum meson file pins SDK flavours with `mwrap_sdk: '2.0/sp1p2'` etc. — [pokeplatinum subprojects](https://github.com/cybervisi0n/pokeplatinum) (observed in clone)
- Layout mirrors the SDK tree: `libraries/{os,mi,gx,fs,fx,card,snd,spi,pad,rtc,wm,mb,cp,math,dsp,camera,scfg,…}` plus `sim` (host simulator: SDL2 + OpenGL via glad, ImGui, `sim_g2.cpp`, `g3_handler.cpp`, `sim_g3_CommandProcessor.cpp`, `sim_g3_TextureCache.cpp`, `sim_audio.cpp`, `sim_net.cpp`, `sim_RomExtractor.cpp`) and `sim7` (ARM7 side: `snd_seq.c` ~1,679 lines, snd_exchannel, snd_midiplayer, nvram, wm). About 215k lines in `libraries/*.c|cpp`, of which ~107k is sim/sim7/components, much of that vendored ImGui/glad. — observed in clone ([libntr](https://github.com/cybervisi0n/libntr))
- **Registers/memory:** under `SDK_PORT`, X86 hardware headers turn every register into a host global, e.g. `extern REGType32v s_reg_G3_MTX_MODE; #define reg_G3_MTX_MODE (*(REGType32v *)(&s_reg_G3_MTX_MODE))` and `extern u8 s_HW_MAIN_MEM[0x800000]; // PC Port: doubled from 0x400000`. — [sm64ds opie-assessment.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md)
- **2D is register-level:** `sim_g2` rescans `s_reg_GX_DISPCNT`, `s_reg_G2_BG0CNT`/`BG0OFS`, WIN0H, POWCNT, `s_HW_OAM` and `s_HW_BG_VRAM` every frame and rasterises into per-layer RGBA textures (bg0..3, sub bg0s..3s, oam0..3, obj windows, mosaic table), which are then composited in GL. — opie-assessment plus observed `sim_g2.cpp` in [libntr](https://github.com/cybervisi0n/libntr)
- **3D is API-level:** each `G3_*` immediate inline under `SDK_PORT` mallocs a `draw_msg_t` and calls `SIM_HandleG3Command`. `GXFIFO` has no readers. `MI_DmaSend32` degenerates to memcpy into a dead global. Several 3D entry points (G3_Normal, G3_LightVector, G3_MultMtx44…) had no port branch at the time of the assessment. There is also a packed display-list decoder `DecodeG3Op` fed by `MI_SendGXCommand`. — [opie-assessment.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md)
- **VBlank/threads:** `sim_main.cpp` uses pthreads and SDL threads. It runs the VBlank interrupt from the host frame loop, limits to 60 fps (16.6 ms), signals a `vcountVblankSemaphore`, and runs PXI ARM9↔ARM7 traffic on `SIM_procPxiThread`/`SIM_procPxi7to9Thread` threads plus a network thread. It reads the ROM header into `HW_ROM_HEADER_BUF`. — observed in `libraries/sim/src/sim_main.cpp` ([libntr](https://github.com/cybervisi0n/libntr))
- **Sound:** "libntr's sim7 is not an emulator — it is a native C reimplementation of the SDK ARM7 sound component, including a ~1,679-line SSEQ sequencer over an SDL2-semaphore PXI layer." — [opie-assessment.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md). Audio output goes through `sim_audio.cpp` with blip-buf resampling (observed).
- **FS/ROM:** first launch extracts the user's .nds to a directory next to the exe (`nds-extract.cpp`, ImGuiFileDialog ROM picker). NARCs are then read as files (the README tells users to swap `msgdata/msg.narc` to change language). There is `fs_archive_fatfs.c`. `firmware.bin` "only contains an offset address and enough space to keep the WiFi config". — [pokeplatinum README](https://github.com/cybervisi0n/pokeplatinum) plus libntr tree (observed)
- **Wireless:** local wireless is simulated over LAN/internet (`sim_net.cpp`, `wm`, enet dependency). DWC/WFC goes through libntrdwc. — [libntr README](https://github.com/cybervisi0n/libntr), [pokeplatinum README](https://github.com/cybervisi0n/pokeplatinum)
- **64-bit pointers:** the biggest class of change in the game tree is `u32`→`u64` cast patching under `#ifdef SDK_PORT` (e.g. `VRAM_TRANSFER_DST`). — [opie-assessment.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md)

**SM64DS port/ntr + port/hal (register-level host layer, written from GBATEK)**
- "Register and hardware semantics are from GBATEK only: no SDK source, no emulator code." `io.cpp`/`mmio.h` maps "real memory mapped at the DS addresses (main RAM, I/O, palettes, VRAM, OAM) in the 32-bit process, plus side-effect dispatch for write-triggered registers (CP divider/sqrt, GXFIFO)". `gx.cpp` handles geometry-engine command decode from FIFO/port writes, matrix stacks, lighting and a **software raster**. `texture.cpp` covers all 7 texture formats. `ppu.cpp` does text-mode BG scan-out. `rt.cpp` provides a "fiber scheduler (the game blocks in VBlankIntrWait; the host frame loop lives on the other fiber), IRQ state, CpuSet/DMA/CP15 shims". There are also LZ77 and FNT/FAT backends. — [port/ntr/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/ntr/README.md)
- `tools/hostgen.py` rewrites `*(volatile T *)0x04xxxxxx` derefs in *copies* of src files into `NTR_MMIO()` proxied accesses, so `src/` is never edited. — [port/ntr/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/ntr/README.md)
- Measured register surface: 317 files / 1,959 MMIO refs, about 1,400 of them 2D, ~250 3D, ~60 CP divider, ~130 IRQ/POWCNT/VRAMCNT. "Dead registers do not produce a blank screen, they produce a hang", because of spin-waits on DMA busy and IPC. — [opie-assessment.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md)
- Pointer width: the 32-bit (i686) host comes first because 179 files truncate addresses via `(u32)&`/`(int)&` and loaders fix up 32-bit pointers in place. "`VirtualAlloc` at literal `0x02000000`… succeed[s]… so DS addresses can even be mirrored 1:1". Use `-fno-strict-aliasing`. — [opie-assessment.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md)
- Audio plan: the ARM9 side is the stock SDK `SND` command queue over SDAT (PXI tag 7), so the plan is to "validate libntr's sim7/snd against SM64DS's command-ID table". — [opie-assessment.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md)

**pokeplatinum-portable (PAL rewrite)** puts SDL3 renderer BG/tilemap and sprite systems in `src/platform/sdl/pal_*_sdl.c`. 3D and audio are stubs, and SDAT was to be "Convert[ed] to modern formats". — [PORTING_PLAN.md](https://github.com/arcanite24/pokeplatinum-portable/blob/main/PORTING_PLAN.md)

**ndsrecomp** runs the whole machine, recompiled: dual-CPU event scheduler, card/KEY1, DMA, SDL video/touch/keyboard/audio, and adaptive widescreen. Renderer policy `NDS_3D_RENDERER=auto|soft|compute`, where auto prefers an OpenGL 4.3 compute backend and falls back to the software one. — [ndsrecomp README / HLE_ARCHITECTURE.md](https://github.com/mstan/ndsrecomp)

### Inferences
- For FFC the cheapest path is a libntr-like layer: implement the SDK/TwlSDK API surface FFC actually links. Treat 2D as register/VRAM scan-out (easy and accurate in software) and 3D as API/command-stream translation to GL. Run the ARM7 sound driver natively rather than emulating FFC's ARM7 binary. FFC's 3D battles plus 2D menus fit this split.
- Touch, RTC and backup: libntr has `spi`, `rtc`, `card` and `nvram` libraries, so these are handled at the SDK API level (TP_*, RTC_*, CARD_*backup). I did not read their host implementations in detail (see Gaps).

### Gaps
- I did not inspect how libntr maps TP (touch) to the mouse, how CARD backup is persisted, or how the two screens are laid out (side by side or stacked, configurability). I saw a `sim_screenquads.c` and fullscreen support only.
- I did not check whether libntr's TWL path covers DSi-only features FFC may use (SCFG, extended WRAM, DSi camera/sound/`SNDEX`). The `scfg`, `camera`, `dsp` and `snd/sndex.c` libraries exist, but their port completeness is unknown.

## Q3. Did any port reuse emulator code (melonDS, DeSmuME)? License implications?

### Takeaway
libntr and the SM64DS port do **not** reuse emulator code. ndsrecomp/MPH **vendors melonDS's GPU3D** (software and compute renderers), which makes its release binaries GPL-3.0-or-later. The bigger licensing issue for libntr is its **SDK ancestry**: it is a fork of the unlicensed `ntrtwl/NitroSDK` trees.

### Cited Findings
- ndsrecomp: `runner/vendor/melonds/` (GPU3D.cpp, GPU3D_Soft, GPU3D_Compute, Texcache…) and `runner/src/melonds_compute/` "are derivative works of melonDS and are under GPL-3.0-or-later". `nds_runner` links them, so it is "distributable only under GPL-3.0-or-later". The rest of the framework is PolyForm Noncommercial 1.0.0 (formerly MIT), with MIT islands kept GPL-compatible. melonDS (and DeSmuME as secondary) also serve as a separate differential "accuracy oracle". — [ndsrecomp THIRD_PARTY_ATTRIBUTION.md](https://github.com/mstan/ndsrecomp/blob/main/THIRD_PARTY_ATTRIBUTION.md) (observed in clone)
- MPH Recomp: "Release binaries are a GPL-3.0-or-later combined work". — [MetroidPrimeHuntersRecomp README](https://github.com/mstan/MetroidPrimeHuntersRecomp)
- SM64DS port/ntr: "no SDK source, no emulator code". The emulator-hybrid (tangOS) is kept only as the verification harness. "natives inside the hybrid are performance-neutral (~2% of the emulated clock)", which was the argument for building a real port. — [port/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/README.md)
- libntr now ships a LICENSE file: MIT, "Copyright (c) 2026 cybervisi0n" (observed in clone 2026-10-09). The pokeplatinum README requires forks to comply "with the MIT license on libntr". — [libntr](https://github.com/cybervisi0n/libntr), [pokeplatinum README](https://github.com/cybervisi0n/pokeplatinum)
- The SM64DS assessment (dated 2026-08-01, before the MIT file appeared or written without seeing it) found all five cybervisi0n repos are GitHub forks of `ntrtwl/NitroSDK`, `NitroSystem`, `NitroWiFi`, `NitroDWC` and `libvct`, which carry no license and have stripped copyright headers. It also found in-tree prebuilt ARM blobs (`components/ichneumon_sub.sbin` ~162 KB, `libcht.a`, `libdgt.a`, `libe3s.a`). It noted pret/pokeplatinum *main* already pulls `ntrtwl/NitroSDK` as a build-time `.wrap` for matching. Its policy: never vendor SDK implementations into src, a build-time wrap is "defensible", and cybervisi0n's own port layer should not be copied without asking. — [opie-assessment.md §2f](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md)
- Advance Wars DS uses melonDS 1.1 only as an external system dependency for boot/smoke tests. It is not linked. — [AW docs/third-party/melonds.md](https://github.com/sturmds/advance-wars-dual-strike-decomp)

### Inferences
- An MIT label on libntr does not clean up the Nintendo-derived SDK code inside it. Distributing a port binary that links libntr is legally murkier than distributing GPL emulator-derived code. FFC should expect the "user supplies the ROM, source only, no bundled assets" model all these projects use.
- Linking melonDS's renderer is a fast, accurate route for 3D, but it forces the whole port to GPL-3. That is fine for a fan port, but it is a one-way decision.

### Gaps
- I did not verify the current license and fork status of the `ntrtwl/*` parents via the API (blocked). The MIT file in libntr may conflict with its fork ancestry.

## Q4. Did ports require 100% decompiled C? How were asm/unmatched functions handled?

### Takeaway
None of them needed 100% *matching*, but all of them needed every function the PC build runs to exist as **host-compilable C** (or a recompiled equivalent). Platinum was ~fully C on the game side. SM64DS keeps unmatched-but-correct versions in a separate `port/unmatched/` tree and handles the remaining asm TUs in the HAL. Recompilation sidesteps the question entirely.

### Cited Findings
- SM64DS rule: "Logically-correct-but-unmatched implementations live in `port/unmatched/`, never in `src/`. The NDS hybrid build keeps selecting delinked ROM bytes for those functions; the PC build selects these." Asm TUs (`asm void`, mwccarm syntax) are "DS hardware operations that SHOULD not compile on a host. CP15 cache management is a host no-op, block copy/fill is memcpy, context switch is the threads seam" → 97 asm TUs went into the HAL backlog. — [port/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/README.md)
- SM64DS builds the port in "slices": each gate lists the source files it compiles (`slice_gate*.txt`), and `tools/host_frontier.py` measures how much of src/ compiles for host. So the port grew while the decomp was still incomplete. — [port/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/README.md)
- Platinum: pret/pokeplatinum's game code is C. The port kept the original SDK/NNS API boundary, and the SDK itself is replaced wholesale by libntr rather than decompiled. — [cybervisi0n/pokeplatinum](https://github.com/cybervisi0n/pokeplatinum), [opie-assessment](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md)
- ndsrecomp needs no decomp: it lifts ARM to C ahead of time and interprets code copied into RAM. MPH v0.7.5 "harvested" compiled coverage across all 66 rooms to avoid interpreter fallback, and v0.7.6 added native HLE replacements for vector math. — [MetroidPrimeHuntersRecomp](https://github.com/mstan/MetroidPrimeHuntersRecomp), [ndsrecomp](https://github.com/mstan/ndsrecomp)
- KH Days: 2 game functions remain asm because they need `clz`, and library asm (NitroSDK/MSL/MobiClip) is kept as asm. — [khdays-decomp README](https://github.com/Yokimitsuro/khdays-decomp)

### Inferences
- For FFC (~84% of functions matched, but by bytes less than half the code is done according to docs/LONGTAIL_PLAN.md), a PC port needs **functionally-equivalent C for the remaining ~16% of game functions**. It does not need matching C. The SM64DS pattern of a `port/unmatched/` tree with differential testing against an emulator is a good fit. SDK/library functions should be *replaced* (libntr-style), not decompiled.
- A hybrid is possible in the meantime: ndsrecomp-style recompiled banks for not-yet-decompiled functions. Nobody has published a decomp+recomp hybrid for DS, though (UNVERIFIED that none exists).
- Local observation: in both the FFC tree here and arcnid's tree, a grep for SDK prefixes (`G3_`, `GX_`, `FS_`, `SND_`, `NNS_G3d`, `OS_`, `CARD_`…) in src/include/config finds **zero** named SDK functions. Everything is named by address. To reuse a libntr-style SDK replacement, FFC first has to **identify the SDK/NNS functions it links by signature** (KH Days has an `sdk/` byte-match identification harness for this — [khdays-decomp sdk/](https://github.com/Yokimitsuro/khdays-decomp)). Otherwise FFC faces SM64DS's harder register-level situation.

### Gaps
- I could not measure how much of FFC's ARM9 is SDK/NNS library code versus game code (arcnid's README says "a sizable chunk of the main binary is NitroSDK library code").

## Q5. Size of effort (time, people, LOC)

### Takeaway
The libntr-based Platinum port is a small game-side diff (61 commits, 318 files) sitting on a large SDK replacement (~100k+ lines of non-vendored code across the libntr suite), largely by one person (cybervisi0n). SM64DS's register-level port has taken several months of gated work and is still not playable.

### Cited Findings
- Platinum game-side diff: 61 commits / 318 files, plus 12 `src/port/` files. — [opie-assessment.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md)
- libntr: ~215k lines in `libraries/**/*.c|cpp` (in my count, sim/sim7/components hold ~107k lines, including vendored ImGui ~60k and glad ~10k). — observed in clone ([libntr](https://github.com/cybervisi0n/libntr))
- pokeplatinum-portable: ~6,770 lines of PAL before stalling (Dec 2025). — [PORTING_PLAN.md](https://github.com/arcanite24/pokeplatinum-portable/blob/main/PORTING_PLAN.md)
- SM64DS: port/ntr was imported 2026-08-02 from a "port research repo (MIT… twelve commits, each landing one seam with a visual harness)". The gates ran from August to October 2026 and the port is still not playable. — [port/ntr/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/ntr/README.md), [GamingBible](https://www.gamingbible.com/news/platform/pc/super-mario-64-superior-version-pc-port-112607-20260708)
- ndsrecomp/MPH: releases v0.4 → v0.7.6 alpha during 2026. The maintainer joined the "RetroPortingToolkit" collective. — [ndsrecomp README](https://github.com/mstan/ndsrecomp), [newreleases.io MPH](https://newreleases.io/project/github/mstan/MetroidPrimeHuntersRecomp/release/v0.6.0-alpha)

### Inferences
- Lessons for FFC, ranked:
  1. Identify the SDK.
  2. Adopt or emulate the libntr architecture: SDK-API replacement, software 2D scan-out, 3D→GL, native ARM7 sound driver. libntr already advertises TwlSDK `twl_hyb` builds.
  3. Keep `src/` matching and put host fixes behind guards, with unmatched C in a separate tree.
  4. Decide early between a 32-bit host and u64 cast patching.
  5. Expect spin-wait hangs on any inert register.
  6. Decide licensing up front (GPL via melonDS, versus SDK-derived libntr, versus a clean-room GBATEK layer like SM64DS's).
- Note that libntr and pokeplatinum reject AI-generated contributions, so FFC could *use* libntr as a dependency but not upstream fixes made with LLMs.

### Gaps
- I found no stated person-hours or headcount for the libntr/Platinum port.
