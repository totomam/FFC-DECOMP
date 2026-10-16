# PC platform layer replacing Nintendo DS hardware (for a native FFC port)

Scope: reusable components and approaches per DS subsystem for porting Fossil Fighters Champions (FFC: DSi-enhanced, TWL/Nitro SDK, CodeWarrior; 3D battles, 2D menus, dual screens, touch, SDAT audio). Research date 2026-10-16. Note: `gh api` could not reach most GitHub repos from this session (403 "access not enabled"), so repo facts come from WebFetch of the GitHub pages. Items marked **(unverified)** come from general knowledge and were not confirmed against a fetched source.

Local context checked: FFC-DECOMP `config/usa/arm9/symbols.txt` (10,721 lines) and overlay symbol files contain **no** SDK-prefixed names (no `GX_`, `G3_`, `NNS_`, `SND_`, `FS_`, `OS_`, `CARD_`, `TP_`...). SDK functions are still `func_XXXXXXXX`. docs/STATUS.md line 380 lists "Phase 1 SDK signature labelling (`dsd sig`), naming pass later" as future work, and line 401 notes "DSi-enhanced (TWL SDK), DS Protect in ov015/ov016". Any SDK-level HLE approach therefore first needs the SDK functions identified and named.

## 1. Approach patterns: HLE at SDK level vs emulating hardware registers (and who chose what)

### Takeaway
All three existing DS-decomp-to-native ports (all on Pokemon Platinum) replace things at the **SDK/library level**, not with a trapped MMIO emulator. The most complete one (libntr) is an MIT-licensed drop-in NitroSDK replacement with DSi/TWL "hybrid" support, OpenGL 4.2 3D and simulated 2D. The most clearly documented one (pokeplatinum-3ds) keeps the original SDK code, turns I/O, VRAM and OAM into plain memory arrays that a renderer reads each frame, and intercepts only the 3D FIFO and `G3_*` command writes. No project found traps MMIO with page faults.

### Cited Findings
- **libntr (cybervisi0n)**: "drop-in replacement for NitroSDK" meant to make it easier to port DS/DSi games to PC and other platforms. "Fully compatible with NitroSDK". DS 3D calls are translated to **OpenGL 4.2** with 3D upscaling, and DS 2D graphics are "simulated". Local wireless is simulated over LAN or the internet, and Dear ImGui is supported. Build targets (meson `build_target`): `arm` (real DS), `linux` x86_64, `win64` x86_64, `nx` (Switch via libnx). **DSi beta:** `sdk_version_major=5`, `hardware_type` = `twl_hyb` (DSi-enhanced) or `twl_ltd` (DSiWare). License **MIT**. About 128 commits, 6 stars, no releases. Related repos: libntrsystem, libntrwifi, libntrdwc — [libntr](https://github.com/cybervisi0n/libntr)
- libntr `libraries/` dirs: camera, card, cht, cp, ctrdg, demo, dgt, dsp, e3s, el, env, exi, ext, fs, fx, gx, init, math, mb, mi, nvram, os, pad, prc, pxi, rtc, scfg, sim, sim7, snd, spi, std, stubs, syscall, utest, wbt, wfs, wl_arm7, wm, wm_arm7, wvr, wxc. This mirrors the NitroSDK/TwlSDK library layout (camera, dsp and scfg are TWL-only) — [libntr/libraries](https://github.com/cybervisi0n/libntr/tree/main/libraries)
- The libntr-based Platinum port is a "64-bit PC Port of Pokemon Platinum based on the pret decomp and the libntr suite". It "should be possible to play the game from start to finish, but there could be crashes and graphical bugs". The NX (Switch) target works but performs poorly. The author states no generative AI/LLMs were used to make libntr. Build dependencies: nasm, enet, arm-none-eabi-gcc, ninja, flex, bison, and Docker — [cybervisi0n/pokeplatinum](https://github.com/cybervisi0n/pokeplatinum)
- A fork lists SDL2, ENet and SoundTouch as dependencies and still requires the user's own ROM — [elyro1/pokeplatinum](https://github.com/elyro1/pokeplatinum) (search snippet only)
- **pokeplatinum-3ds (GabeSud0)**: "Keep the decompiled C game and NitroSDK/NitroSystem code unchanged, and replace only the hardware layer beneath them". Per subsystem:
  - **I/O registers**: `HW_REG_BASE` (0x04000000) points at a virtual register block, which is a plain memory array, not trapped ("mostly a header change").
  - **VRAM banks**: plain arrays that honor `GX_SetBankFor*` mapping. OAM is a plain array.
  - **2D**: the software renderer `port_render2d.c` reads the virtual state each frame. Citro3D composites the layers, OBJ, blending and windows on the GPU.
  - **3D**: a software command interpreter captures FIFO (`reg_G3X_GXFIFO`) and `G3_*` writes, keeps matrix stacks and submits triangle batches at any resolution. Paletted and 4x4-compressed textures are converted to RGBA with caching. Fog, edge marking, toon, AA and translucent polygon IDs are "partial native, partial emulated".
  - **Copies and cache**: `MI_*` DMA becomes `memcpy`. `DC_*` cache ops are no-ops.
  - **VBlank**: `OS_WaitIrq` maps to the platform's VBlank wait.
  - **3D VRAM transfers**: `NNSi_GfdDoVramTransfer3D` runs at frame end.
  - **Save**: `CARD_*` flash is a 512 KB file. `FS_*` is reimplemented over a data pack extracted from the user's ROM.
  - **Overlays**: all 122 are linked into one binary, with per-overlay data/BSS renamed and reset on "load" (`tools/game_overlays.py`, `port_overlay.c`).
  - **Wireless**: `WM_*`/`DWC_*` are stubbed.
  - **ARM7**: services are answered in software, and PXI becomes a queue.
  - Source: [HARDWARE_LAYER.md](https://github.com/GabeSud0/pokeplatinum-3ds/blob/main/docs/HARDWARE_LAYER.md)
- pokeplatinum-3ds `tools/bootstrap.py` fetches the pret decomp at a pinned commit "plus the NitroSDK and NitroSystem decompilations", then applies patches. `3ds_port/nitro` is NitroSDK built with GCC and tested on PC, and `3ds_port/nitrosystem` has Fnd, G2d, G3d, Gfd and Snd. The project's own code is GPL-3.0, and this license does not cover the game or the decomp. Status: "Phase 1". All 1,012 C files link and the build boots to the title screen and new game, but "Nothing playable yet" and 3D is "Next" — [pokeplatinum-3ds README](https://github.com/GabeSud0/pokeplatinum-3ds)
- The HARDWARE_LAYER doc says the SDK/SystemSDK sources are "decompiled in the ntrtwl repositories". A web search for "ntrtwl" found nothing — [HARDWARE_LAYER.md](https://github.com/GabeSud0/pokeplatinum-3ds/blob/main/docs/HARDWARE_LAYER.md)
- **pokeplatinum-portable (arcanite24)**: "stub-first". All DS functions are kept as SDL3 stubs and ported incrementally behind a Platform Abstraction Layer (PAL.md). Assets are PNGs loaded with SDL_image rather than DS formats. 2D (BG, sprites) and input are done. Audio (phase 4), FS (phase 5) and 3D are not. Tested on macOS only. The original DS build is not maintained. No license is stated — [pokeplatinum-portable](https://github.com/arcanite24/pokeplatinum-portable)
- A web search found no DS decomp to native PC port other than these Platinum projects. Precedents on nearby platforms: N64 Recompiled ([readonlymemo](https://readonlymemo.com/n64-recompiled-interview-majoras-mask-emulation-native-pc-port/)), and Twilight Princess and Melee decomps with planned PC ports ([timeextension](https://www.timeextension.com/news/2025/12/zelda-twilight-princess-has-been-decompiled)).

### Inferences
- For FFC, the **libntr pattern** fits best: the game is TWL-hybrid, and libntr has a `twl_hyb` mode and an MIT license that is compatible with any project license. It is young, has few stars, and is tested on one game, so expect gaps (FFC-specific NNS G3D usage, TWL-only calls).
- The **pokeplatinum-3ds pattern** keeps vendor SDK code and emulates registers as plain arrays. It needs SDK source (decompiled or matched), and any decompiled NitroSDK carries unclear redistribution status. FFC's SDK functions are binary-matched decomp code in this repo, so the same pattern is possible. It is a hybrid: memory-array "registers" plus per-frame state renderers, with no MMIO trap.
- The **pokeplatinum-portable pattern** (stubs plus asset conversion to PNG) loses fidelity and is the most manual. It does not suit a 3D-heavy game.
- MMIO trapping (mprotect/SIGSEGV or VEH) has no precedent in these projects. Pointer-to-register macros let a port retarget `HW_REG_BASE` at compile time, which makes trapping unnecessary.
- 64-bit: libntr builds x86_64 targets and the Platinum port is advertised as 64-bit, so the pointer-size problems were solvable. Neither source documents how. pokeplatinum-3ds keeps a `host32` toolchain for tests, a hint that 32-bit host builds are an easier first step.

### Gaps
- libntr internals: how `gx` maps to GL (FIFO interpreter or `G3_*` call-level), how audio is mixed, how 64-bit pointers in packed structs are handled. Only the README and directory listing were fetched.
- Which repositories are the "NitroSDK/NitroSystem decompilations" pokeplatinum-3ds fetches, and their legal status. No source found.
- Whether libntr bundles NitroSystem (NNS) replacements, i.e. whether "libntrsystem" is NNS G3D/G2D/Snd. The name suggests it; unverified.

## 2. 3D: GX command stream and NitroSystem G3D (NSBMD/NSBTX/NSBCA) on a modern GPU

### Takeaway
There are two routes. (a) Keep the original NNS G3D code and interpret the GX FIFO/`G3_*` command stream into GPU draws (pokeplatinum-3ds design; melonDS has GPL reference renderers). (b) Replace NNS G3D with a native loader built on apicula's format knowledge (0BSD), which exports NSBMD/NSBCA to glTF.

### Cited Findings
- melonDS `src/` has `GPU3D.cpp`, `GPU3D_OpenGL.cpp`, `GPU3D_Compute.cpp`/`.h`, `GPU3D_Compute_shaders.h`, `GPU2D.cpp`, `GPU2D_Soft.cpp`, `GPU2D_OpenGL.cpp` and many `DSi_*.cpp` files (the listing was truncated) — [melonDS src](https://github.com/melonDS-emu/melonDS/tree/master/src)
- melonDS is GPL-3.0-or-later. Its README lists v1.1, and "better DSi emulation" is still a TODO — [melonDS](https://github.com/melonDS-emu/melonDS)
- melonDS 1.0 shipped a new OpenGL **compute shader** renderer that brought "more accurate graphics AND upscaling". Developers said the old GL renderer's upscaling broke when games render 3D to both screens via display capture — [r/emulation mirror](https://redlib.hackliberty.org/r/emulation/comments/1gw3jo9/melonds_10_rc_finally_here_it_is); [reddit snapshot](https://reddit.sentinel-team.org/posts/1phvpdl/snapshots/2025-12-24T01%3A21%3A14.69063Z) (secondary)
- DeSmuME has software and OpenGL 3D renderers. Its license is GPLv2, listed as "-or-later" by Fedora/RPM Fusion and as "GPL-2.0-only" for the SUSE libretro package — [GameTechWiki](https://emulation.gametechwiki.com:443/index.php/DeSmuME); [libretro docs](https://docs.libretro.com/library/desmume/); [SUSE](https://packagehub.suse.com/packages/libretro-desmume)
- **apicula** (Rust, **0BSD**):
  - Formats: NSBMD (models, textures, palettes), NSBTX, NSBCA (joint animation), NSBTP (pattern animation), and NSBTA (material animation, experimental).
  - Commands: `extract`, `view`, `convert`, `info`.
  - Exports COLLADA or glTF (.glb). Pattern and material animations work in the viewer but not in the converter.
  - Credits GBATEK and the DeSmuME debugger.
  - Source: [apicula](https://github.com/scurest/apicula)
- pokeplatinum-3ds handles the DS-specific 3D features as follows. Fog, edge marking, toon/highlight, alpha test, AA and translucent poly IDs are partly native and partly approximated. Textures A3I5/A5I3/2/4/8-bit and 4x4 compressed are converted to RGBA with caching. 3D VRAM transfers are deferred to frame end — [HARDWARE_LAYER.md](https://github.com/GabeSud0/pokeplatinum-3ds/blob/main/docs/HARDWARE_LAYER.md)
- libntr translates DS 3D calls to OpenGL 4.2 with upscaling — [libntr](https://github.com/cybervisi0n/libntr)

### Inferences
- For FFC battles (NNS G3D models, joint animation, likely material/pattern animations), a **GX command-stream interpreter** below an unchanged NNS G3D renders whatever the game emits, including any custom display lists, without reimplementing NNS. The interpreter must implement:
  - matrix stacks (projection, position, vector, texture)
  - vertex formats and polygon/texture attributes
  - the 4x4 texture compressor format
  - a w-buffer vs z-buffer switch, toon/highlight shading, edge marking, fog
  - `SwapBuffers` sorting rules (translucent sort mode)
  - a 2048-poly/6144-vert hardware limit (optional)
- melonDS's `GPU3D.cpp` is the most accurate reference for these semantics, but it is GPL-3.0+. Copying code makes the port GPL-3.0. Reading it as documentation alongside GBATEK (and apicula's 0BSD decoders) is the license-clean route.
- Display capture (3D drawn on both screens on alternate frames, or render-to-texture) needs explicit handling. melonDS needed a dedicated renderer for this, so check whether FFC battles use capture. Unverified for FFC.

### Gaps
- NitroEdit and MKDS Course Modifier/EveryFileExplorer were not fetched. Their licenses and renderer status are unverified. (MKDS Course Modifier is C#/.NET with an NSBMD OpenGL renderer: unverified.)
- melonDS compute renderer internals came from no primary blog post; the melonds.kuribo64.net page fetched was unrelated.
- Whether FFC uses display capture, or 3D on both screens, is unknown. This needs a runtime trace.

## 3. 2D: BG/OBJ engines, palettes, VRAM banks, affine, windows, blending

### Takeaway
Every approach found keeps DS-format 2D state (VRAM banks, OAM, palettes, BG/OBJ control registers) in plain memory and composites it each frame with a software or GPU renderer. Only pokeplatinum-portable rewrote 2D with converted PNGs. melonDS's `GPU2D_Soft.cpp` is the obvious accurate reference (GPL-3.0+).

### Cited Findings
- pokeplatinum-3ds: VRAM banks are arrays that honor `GX_SetBankFor*`. OAM is an array. The software 2D renderer (`port_render2d.c`) decodes tiles to textures. GPU compositing handles priorities, alpha, brightness and windows. `GX_SetDispSelect` maps engines to screens — [HARDWARE_LAYER.md](https://github.com/GabeSud0/pokeplatinum-3ds/blob/main/docs/HARDWARE_LAYER.md)
- melonDS has `GPU2D_Soft.cpp` and `GPU2D_OpenGL.cpp` (GPL-3.0+) — [melonDS src](https://github.com/melonDS-emu/melonDS/tree/master/src)
- libntr: "DS 2D graphics are simulated" — [libntr](https://github.com/cybervisi0n/libntr)
- pokeplatinum-portable: 2D primitives, backgrounds and sprites go through SDL3 with PNG assets — [pokeplatinum-portable](https://github.com/arcanite24/pokeplatinum-portable)
- BlocksDS libnds is Zlib-licensed and needs no notice in binaries. GL2D draws 2D with the 3D hardware — [BlocksDS licenses](https://blocksds.skylyrac.net/docs/introduction/licenses)

### Inferences
- A per-scanline software compositor of two engines, each 256x192 RGB555 with 4 BGs and 128 OBJ, is cheap on PC. Per-scanline evaluation keeps HBlank effects (scroll and window changes via HBlank DMA/IRQ) correct; per-frame GPU compositing loses them. Check whether FFC uses HBlank effects (unverified).
- libnds/BlocksDS is a homebrew SDK that runs on DS hardware and writes registers; it does not emulate them. Its value is as Zlib-licensed register bitfield definitions and headers, not as a PC renderer.

### Gaps
- No standalone permissive-licensed DS 2D software renderer library was found. melonDS and DeSmuME are GPL.

## 4. Audio: SDAT/SSEQ/SBNK/SWAR/STRM

### Takeaway
There are two routes. (a) Run the game's original ARM7 sequencer code, recompiled for the host, on a software model of the 16-channel SPU (pokeplatinum-3ds PR #50, merged 2026-10-12). (b) Use a reimplemented sequencer: FSS (WTFPL) or SSEQPlayer (obsolete, no license), plus the documented SDAT format. The ARM7 code in FFC is not part of the ARM9 decomp, so (a) needs the NitroSDK ARM7 sound sources from somewhere.

### Cited Findings
- pokeplatinum-3ds PR #50 compiles NitroSDK's ARM7 sequencer, channel manager, capture, bank, alarm and global sources under `SDK_ARM7` (an `N7_` symbol map keeps them apart from the ARM9 copy). It adds:
  - `port_sound_chip.c`: 16 voices (PCM8, PCM16, IMA-ADPCM, PSG square, noise), timers, volume/pan, repeat, master level, 2 capture buffers, output at 32,768 Hz stereo s16.
  - `port_snd.c`: a ring of ARM9 command-list pointers, sequencer ticks every **2,728 us** derived from output samples, completion tags in `SNDSharedWork`, and stream alarms delivered via the PXI receive interrupt.
  - On PC, audio is silent by default with a `--wav` dump option.
  - Tests: 134 virtual-ARM7, 24 mixer and 6 sequence checks.
  - Caveat: the description says the real music had not been verified, yet the page shows the PR merged 2026-10-12. The page itself contradicts this.
  - Source: [PR #50](https://github.com/GabeSud0/pokeplatinum-3ds/pull/50)
- fincs **SSEQPlayer**: a homebrew SSEQ/SBNK/SWAR player with `arm7`/`arm9`/`common` dirs. "All commands referring to variables/math are still completely unsupported". Archived, labeled "(OBSOLETE - USE FSS INSTEAD)". No license file — [SSEQPlayer](https://github.com/fincs/SSEQPlayer). A fork exists: [CaitSith2/SSEQPlayer](https://github.com/CaitSith2/SSEQPlayer)
- fincs **FSS** (FeOS Sound System): **WTFPL**. Plays SSEQ/SBNK/SWAR sequences and streamed audio, plus PSG, capture-unit reverb and mic. v0.0-prerelease — [FSS](https://github.com/fincs/FSS)
- The SDAT format is documented: SSEQ (MIDI-like sequences), SBNK, SWAR (collection of SWAV), SSAR (collection of SSEQ), STRM (streams) — [ndspy SDAT appendix](https://ndspy.readthedocs.io/en/latest/appendices/sdat-structure.html); [SDAT spec mirror (kiwids)](https://otakon273.duckdns.org/Consoles/RomHacking.net/rhdn_20240801/documents/[467]sdat.html)
- Players: the foobar2000 NCSF decoder plays SDAT/SSEQ-based NCSF rips. vio2sf (2SF) plays rips by emulating the DS (DeSmuME-derived; unverified) — [foobar2000 components](https://www.foobar2000.org/components/tag/game+music); [vio2sf.txt](https://bazaar.launchpad.net/~richardson183/ndsmusicplayer/release-1.5_i386/view/head:/vio2sf.txt)
- Maxmod (ISC) is used in BlocksDS's default ARM7 binary. It is a MOD/XM player, not SDAT — [BlocksDS licenses](https://blocksds.skylyrac.net/docs/introduction/licenses)

### Inferences
- FFC's ARM9 side (NNS_Snd or SND_ ARM9 API) stays in the decomp. The ARM7 side is not in this repo, which only covers ARM9 per the config. Pick one:
  1. Write a clean-room SSEQ interpreter plus SPU mixer behind the ARM9 `SND_*` command interface. The SSEQ command set is documented and modest; FSS's WTFPL code can be lifted freely.
  2. Decompile or obtain FFC's ARM7 sound code. ARM7 binaries are SDK-standard per SDK version (unverified), so matching code may exist in other projects.
- A sequencer tick of about 2.7 ms (stated as 2,728 us in PR #50) and 32,768 Hz output are the timing constants to reproduce. Resample to 48 kHz on PC.
- vgmstream decodes STRM/SWAV-style ADPCM (unverified). It is useful for STRM streams but not for sequences.

### Gaps
- vgmstream license and exact DS format support were not fetched. vgmstream uses an ISC-style license (unverified).
- No sseq2wav/sseq2mid primary page was retrieved.
- Whether FFC uses STRM streams or only sequences is unknown.

## 5. Other subsystems: FS/NARC, save, input/touch, RTC, IRQ/VBlank/timers/DMA, ARM7, cache, pointers

### Takeaway
pokeplatinum-3ds and libntr both replace these at the library level with host services. ARM7 is never emulated: its services (power, RTC, touch, save, sound) are answered in software, and PXI becomes a queue. Wireless is stubbed (pokeplatinum-3ds) or simulated over IP (libntr).

### Cited Findings
pokeplatinum-3ds mappings ([HARDWARE_LAYER.md](https://github.com/GabeSud0/pokeplatinum-3ds/blob/main/docs/HARDWARE_LAYER.md)):

| Subsystem | Replacement |
|---|---|
| FS | `FS_OpenFile`/`FS_ReadFile` over host files or one pack extracted from the user's ROM. NARCs are read from that pack. |
| Save | `CARD_*` → 512 KB file in flash layout |
| Touch | `TP_*` → host touch/mouse with coordinate scaling |
| Buttons and lid | `PAD_Read`, with the lid reporting open |
| RTC | `RTC_*` → system clock |
| Interrupts | `OS_WaitIrq(TRUE, OS_IE_V_BLANK)` → host VBlank wait. Game logic keeps its 30 Hz loop (every 2 VBlanks). |
| DMA | `MI_*` → `memcpy` |
| Cache | `DC_*` → no-op |
| Wireless | `WM_*`/`DWC_*` → stubbed "no connection" |
| Overlays | All linked in. Each overlay's data/BSS is renamed and reset on load. |

Other findings:
- pokeplatinum-3ds keeps "the SDK's threads, interrupts, timers and overlays" running (NitroMain runs on 3DS and PC) — [pokeplatinum-3ds](https://github.com/GabeSud0/pokeplatinum-3ds)
- libntr has TWL modules (`camera`, `dsp`, `scfg`, `nvram`) and networking simulated over LAN/internet — [libntr](https://github.com/cybervisi0n/libntr); [libntr/libraries](https://github.com/cybervisi0n/libntr/tree/main/libraries)
- melonDS models the DSi hardware in separate files (`DSi_AES`, `DSi_NAND`, `DSi_SD`, `DSi_Camera`, `DSi_DSP`, `DSi_NDMA`, `DSi_SPI_TSC`...). These are what an HLE layer avoids — [melonDS src](https://github.com/melonDS-emu/melonDS/tree/master/src)
- GBATEK (problemkaputt.de/gbatek.htm) is the standard DS/DSi hardware reference, credited by apicula — [apicula](https://github.com/scurest/apicula)

### Inferences
- FFC specifics:
  - **DS Protect (ov015/ov016)**: anti-piracy checks should be stubbed to "pass" and not ported. STATUS already labels them as stubs/data tables.
  - **TWL-only paths**: a DSi-enhanced game checks `OS_IsRunOnTwl()`-style flags (unverified name). Forcing NTR mode avoids the TWL camera, SD and NAND paths entirely.
  - **Overlays**: link all statically and reproduce the overlay data/BSS reset semantics, as pokeplatinum-3ds did. FFC has 19 overlays, which is far fewer than Platinum's 122.
- 32-bit assumptions: the CodeWarrior-era code assumes `sizeof(void*)==4` in packed structs, in pointer-to-u32 casts, and in file formats with embedded offsets (NNS resource headers converted in place to pointers; unverified for FFC). The options are:
  - a 32-bit host build first (the pokeplatinum-3ds `host32` precedent)
  - a 64-bit build with a 4 GB arena and 32-bit offsets
  - fixing structs per type
  The libntr port is advertised as 64-bit and therefore solved this somehow; the method is undocumented in the fetched pages.
- Threads: NitroSDK `OS_Thread` is cooperative and priority-based. Mapping it to host threads plus a big lock, or to coroutines/fibers, keeps determinism. pokeplatinum-3ds kept the SDK thread code; the mechanism is unverified.

### Gaps
- How libntr and pokeplatinum-3ds implement `OS_Thread` context switching on PC (setjmp, ucontext, or fibers) was not found.
- No source covers FFC-specific hardware use (capture, HBlank effects, mic, DSi camera).

## 6. Licensing summary

### Takeaway
The permissive building blocks are libntr (MIT), apicula (0BSD), BlocksDS libnds (Zlib) and FSS (WTFPL). The accurate emulators are copyleft: melonDS is GPL-3.0+ and DeSmuME is GPLv2 (only or or-later, depending on the packager). Copying emulator code makes the port GPL; using it as a reference does not. NitroSDK-derived code (decompiled or original) has its own unresolved redistribution status, independent of the port's license.

### Cited Findings
- libntr: MIT — [libntr](https://github.com/cybervisi0n/libntr)
- apicula: 0BSD — [apicula](https://github.com/scurest/apicula)
- melonDS: GPL-3.0-or-later — [melonDS](https://github.com/melonDS-emu/melonDS)
- DeSmuME: GPLv2, with packagers disagreeing on "only" vs "or later" — [Fedora/RPM Fusion](https://download0.rpmfusion.org/free/fedora/releases/40/Everything/x86_64/os/repoview/desmume.html); [SUSE](https://packagehub.suse.com/packages/libretro-desmume)
- BlocksDS libnds: Zlib. Maxmod: ISC. DSWiFi and libxm7: MIT — [BlocksDS licenses](https://blocksds.skylyrac.net/docs/introduction/licenses)
- FSS: WTFPL. SSEQPlayer: no license — [FSS](https://github.com/fincs/FSS); [SSEQPlayer](https://github.com/fincs/SSEQPlayer)
- pokeplatinum-3ds: GPL-3.0 for its own code, which does not cover the game or decomp — [pokeplatinum-3ds](https://github.com/GabeSud0/pokeplatinum-3ds)

### Inferences
- An FFC port that ships no ROM data, extracts assets from the user's ROM at first run (as every Platinum port does), and uses MIT/0BSD/Zlib/WTFPL components can keep any license. Adopting melonDS renderer code forces GPL-3.0 on the platform layer, and therefore on the binary.

### Gaps
- Per-file headers in DeSmuME and melonDS (some files may carry different licenses) were not checked.
