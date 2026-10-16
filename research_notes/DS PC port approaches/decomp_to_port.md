# Decomp-to-native-PC-port: case studies, frameworks, pitfalls, lessons for a DS (FFC) port

Scope: how console decomps became native PC ports, and what that means for Fossil Fighters Champions (DS, CodeWarrior C/C++, ~84% functions matched, LLM-driven). Researched 2026-10-16. Many 2026 facts come from secondary aggregators (heldgames.com, capitalandcompute.net, news sites) and are marked as such. Items from background knowledge that I could not re-verify this session are listed only under Gaps.

## Case studies: did the decomp need to be 100% matching before porting, how were unmatched/asm functions handled, and how long did the port take?

### Takeaway
No port in this set needed a byte-perfect 100% match. What they needed was a **complete, compilable C source** for all game logic, with no remaining asm in game code. The closest analogue for FFC is SM64DS: a DS decomp whose PC port links matched translation units (TUs) one by one and fills the rest with "stand-ins" (93.5% linked). Halo and SA2 show ports running well ahead of or alongside matching. Once complete C existed, a framework-backed team took about 3-5 months (SoH: Dec 2021 to spring 2022). Full GameCube ports took about 5 months after the decomp finished (TP Dusk: Dec 2025 decomp, May 2026 release).

### Cited Findings
**Super Mario 64 DS (DS): the most relevant precedent**
- tangosdev/sm64ds-decomp README: "The PC port is built from this same source" and it "runs natively on Windows from your own cartridge dump", with "higher resolutions, texture filtering, anti-aliasing and smoothed models." — [sm64ds-decomp](https://github.com/tangosdev/sm64ds-decomp)
- The project tracks three separate metrics. MATCHED means "the source compiles to the cartridge's exact bytes" (100%, 11,389 functions). CONVERTED means readable "real C++ classes with their real names, bases and vtables" (39.6%, 4,509/11,386). LINKED means matched TUs compiled into the PC port (93.5%, 10,595/11,328). — [sm64ds-decomp](https://github.com/tangosdev/sm64ds-decomp)
- "Each newly linked file replaces a stand-in the port used before." So the port ran before every TU was linked, with stand-ins covering the gaps. The README does not say what the stand-ins are. — [sm64ds-decomp](https://github.com/tangosdev/sm64ds-decomp)
- Asm policy: only routines with an "instruction C cannot express at all" are hand asm (cache control, DS firmware calls, CPU mode switching, some compiler math routines). There are 108 such functions. Code not yet reproduced is marked `NONMATCHING`, not asm. — [sm64ds-decomp](https://github.com/tangosdev/sm64ds-decomp)
- AI use: a multi-agent protocol, with harder functions matched "with AI assistance at a few cents of usage each" (Claude, Codex, Kimi named per aggregator). — [sm64ds-decomp](https://github.com/tangosdev/sm64ds-decomp); [capitalandcompute](https://capitalandcompute.net/blog/which-games-has-ai-decompiled/)
- The SM64DS README says nothing about how 3D/2D rendering, dual screens, touch, or audio are done in the port. — [sm64ds-decomp](https://github.com/tangosdev/sm64ds-decomp)

**Kingdom Hearts 358/2 Days (DS): unverified, single secondary source**
- 100% code and data, "all 306 modules of the European build rebuild byte-identical", 23,000+ matched functions; reached full match about 3 months after the repo was created (June 2026). A separate companion project is building a native PC runtime, kept apart from the matching repo. Its asset pipeline covers textures, UI, fonts, models, skeletal animation, text and audio. The front end boots natively through title, menus and character select. There is an "experimental gameplay harness" in one room. No releases. — [heldgames](https://heldgames.com/guides/games-100-percent-decompiled-what-next)
- A search for the KH Days decomp repo itself found only KH Melon Mix, a modified melonDS emulator, not a decomp. The repo was not independently confirmed. — [KHMelonMix](https://github.com/vitor251093/KHMelonMix/blob/master/README.md)

**Ocarina of Time: Ship of Harkinian (Harbour Masters)**
- ZRET finished "a two-year project in 2021" turning OoT into compilable C. Port coding began in mid-December 2021. On 24 Jan 2022 it was about 90% done, with the public repo planned for late February and refinement until 1 April 2022. — [VGC](https://www.videogameschronicle.com/news/exclusive-a-fully-functioning-zelda-64-pc-port-is-90-complete/)
- In Jan 2022 audio "hadn't been decompiled", yet the port was underway. So a port can begin with subsystems still undecompiled. — [VGC](https://www.videogameschronicle.com/news/exclusive-a-fully-functioning-zelda-64-pc-port-is-90-complete/)
- Harbour Masters said it would start the MM port only after the MM decomp (then 37%) reached 100%. — [VGC](https://www.videogameschronicle.com/news/exclusive-a-fully-functioning-zelda-64-pc-port-is-90-complete/)

**Super Mario 64 (sm64 port, 2020)**
- A fan decomp produced the PC port in 2020. The repo has native Linux/Windows targets and requires extracting assets from a user copy. The first port binary was DMCA'd "because it included all of the game's original assets." Fast3D is the renderer written for that port and was later reused by SoH/libultraship. — [sm64-port](https://github.com/UnderVolt/sm64-port); [PC Gamer](https://www.pcgamer.com/au/a-90-complete-fan-made-pc-port-of-zelda-ocarina-of-time-could-be-ready-by-april)

**Perfect Dark (fgsfdsfgs/perfect_dark)**
- Fork of n64decomp/perfect_dark. Supports Windows/Linux i686 and x86_64, macOS x86_64/arm64, and Switch arm64. Credits "Raf" for "the 64-bit port". The README describes it as "mostly functional" with "minor graphics- and gameplay-related issues, and possibly occasional crashes". It uses the libultraship version of fast3d, needs GL 3.0/ES3, and requires a user ROM in `data/`. — [perfect_dark](https://github.com/fgsfdsfgs/perfect_dark)
- 2023 mirrors said "currently only 32-bit platforms are supported". So the first release shipped 32-bit only and 64-bit came later. — [mirror](https://git.new.deadbsd.org/falso/perfect_dark/src/commit/83c1bd3ffd0e7a30c4dfe24c076bc69ce80f3aaf)

**Twilight Princess: Dusk (Twilit Realm)**
- The TP decomp was reported complete in Dec 2025. Dusk was announced 12 Apr 2026 and released 11 May 2026, for Windows/macOS/Linux/Android/iOS. It was built by members of the TP decomp team, speedrunners, and the "Aurora team". It requires the user's own game files. It has uncapped framerate via skeleton interpolation ("finds the vertexes for the current frame and the next and does a linear interpolation"). A second, independent port (Courage Reborn) also exists. — [Time Extension](https://timeextension.com/news/2026/05/the-legend-of-zelda-twilight-princess-has-unofficially-been-ported-to-the-pc)
- Decomp work started in 2020: "over 4,000 commits, 5 years". — [Zelda Universe](https://zeldauniverse.net/2026/05/17/twilight-princess-fans-create-a-decompiled-pc-port-called-dusklight/)

**Animal Crossing (GameCube): ACGC-PC-Port**
- A native port built on ac-decomp by an anonymous developer (flyngmt/FlyingMeta), reported July 2026. It runs the decompiled C on x86 with a translation layer converting GX calls to OpenGL 3.3. The repo has no assets "nor assembly". It supports only US Rev 0 (GAFE01) and is Windows-only (Steam Deck via Proton). Features: 4K, SDL2 controllers, GCI saves, Dolphin HD texture packs, 60 fps default up to 960. It is "not 100% finished", with audio problems and visual glitches. — [Notebookcheck](https://www.notebookcheck.net/Animal-Crossing-for-the-Nintendo-GameCube-just-received-an-unofficial-native-PC-release-with-support-for-4K-widescreen.1253295.0.html); [Ground News/Korben](https://ground.news/article/an-animal-crossing-pc-recompilation)
- Unverified, single Italian source: the port was "built using Claude Code", which was poorly received by the decomp community. — [tecnoandroid](https://www.tecnoandroid.it/news/animal-crossing-gamecube-ora-gira-su-pc-come-e-stato-possibile-1837542/)

**Super Smash Bros. Melee**
- 100% matched (19,828 functions) on 7 Sep 2026 after six years. The final stretch was AI-assisted; commit co-authors name Claude/Codex models. The FAQ says the project is "not promising a PC port", and no port exists. — [capitalandcompute](https://capitalandcompute.net/blog/which-games-has-ai-decompiled/); [melee FAQ](https://github.com/doldecomp/melee/wiki/FAQ); [TweakTown](https://www.tweaktown.com/news/113457/super-smash-bros-melee-pc-port-is-on-the-way-as-gamecube-classic-gets-decompiled/index.html)
- Melee is a counterexample: 100% matching does not automatically lead to a port. Petari (SMG), Star Fox Adventures, Legend of Mana and FE8 also have no ports. — [heldgames](https://heldgames.com/guides/games-100-percent-decompiled-what-next)

**Halo CE (Xbox): port far ahead of matching**
- 7.17% code matched, 125/833 units registered, yet "a native port is playable" with Linux/Windows/Android arm64 builds on every commit and cross-platform multiplayer. — [heldgames](https://heldgames.com/guides/games-100-percent-decompiled-what-next)

**Mario Kart 64 (SpaghettiKart) / Star Fox 64 (Starship)**
- Both are Harbour Masters ports on libultraship. They require a user ROM with an exact hash (SpaghettiKart: US only). Starship 1.0 shipped Windows-first, with macOS/Linux delayed. Credits include torch, splat, n64split and decomp.me. — [Time Extension](https://www.timeextension.com/news/2025/06/mario-kart-64-has-been-ported-to-pc); [SteamDeckHQ](https://steamdeckhq.com/news/star-fox-64-native-pc-port-starship-released)

**Sonic Advance 2 (GBA)**
- HiroStuff/sa2: "100% from C files with ~60 functions which currently don't match". It builds SDL targets (Linux/macOS 64-bit, Win64), PSP and PS2 at widescreen 426x240. SAT-R/sa2 (sa2.dev) is "A decompilation and port" with an m4a sound driver implemented for PC. — [HiroStuff/sa2](https://github.com/HiroStuff/sa2); [sa2 mirror](https://code.heni.lol/decomp/sa2)
- This is direct evidence that a port needs all-C, not all-matching: non-matching functions written as C are fine.

**Pokémon Emerald**
- A native port on the decomp in C/SDL2 at 426x240 (secondhand). EmeraldRecomp instead takes only symbol metadata from the decomp and models GBA hardware in a separate runtime. pokeemerald-wasm compiles the decomp C straight to WASM. — [PokeCommunity](https://www.pokecommunity.com/threads/pok%C3%A9mon-emerald-pc-port-the-project-you-missed.541024/); [EmeraldRecomp](https://raw.githubusercontent.com/mstan/EmeraldRecomp/HEAD/README.md); [braindetox](https://braindetox.kr/en/posts/pokemon_emerald_webassembly_2026.html)

**Super Metroid / A Link to the Past (snesrev): non-matching reimplementation**
- These are not matching decomps. The C runs alongside the original machine code, and the two are compared frame by frame. On a mismatch the port saves a snapshot and shows a counter. Users supply their own ROM for asset extraction. — [Kowatek](https://blog.kowatek.com/?p=12246); [sm_rewrite](https://github.com/enderandrew/sm_rewrite)

### Inferences
- The gating requirement is "all game code is C/C++ and builds for the host". A byte match is not required. FFC at about 84% matched has a gap of about 16% (about 3,400 functions in fail/todo/blocked). For a port, these need *functionally equivalent* C, not matching C. That is a cheaper target: the expensive Sonnet waves are paying for exact register allocation and instruction order, which a port does not need.
- The SM64DS "stand-in" model is the best template for FFC: build a host executable now, link every matched or equivalent TU, and fill the rest with stand-ins. Options for stand-ins: (a) a non-matching C version checked by differential testing, or (b) an ARM interpreter shim that runs the original function from the ROM. This needs confirmation of how SM64DS actually does it.
- Rough schedule: a game-agnostic framework plus a focused team gave a 3-5 month port. DS has no libultraship-equivalent, so FFC must budget for building one.

### Gaps
- Not re-verified this session, from background knowledge: sm64 decomp/port release around May 2020 and the sm64ex/Render96 forks (Render96 adds models and textures). 2Ship2Harkinian (MM) released 2024. OpenGOAL (Jak) reimplemented the GOAL compiler and decompiled to GOAL source, not matching C, with a custom PC renderer. Treat all of these as unverified.
- How SM64DS stand-ins work (HLE C? an ARM interpreter?) and how its port renders the DS 3D engine, 2D engines, dual screens and touch.
- Whether SoH started from 100% matched OoT, or only a "complete" OoT decomp with some NON_MATCHING. VGC gives no percentage.
- KH 358/2 Days repo URL and port details (single source).
- Melee "port" reports conflict: egamers says "plays on PC" while the FAQ says no port is promised.

## Shared port frameworks: what do they provide, and is there an equivalent for DS?

### Takeaway
libultraship is an N64 SDK reimplementation: Fast3D display-list renderer, SDL3 input/audio/window, a resource manager over .otr/.o2r archives, ImGui menus, and C-mod scripting. It underpins SoH, 2Ship, SpaghettiKart, Starship and parts of the PD port. GameCube ports use GX-to-GL translation layers ("Aurora" for Dusk; a custom one in the AC port). No public, reusable DS equivalent (a "libnitroship" that reimplements NitroSDK/NitroSystem G2/G3/OS/FS/SND on a modern GPU) was found. FFC would have to build or borrow one, possibly from melonDS's renderer code.

### Cited Findings
- libultraship: "a library meant to provide reimplementations of libultra (n64 sdk) functions that run on modern hardware". Components: Fast3D display-list renderer with OpenGL and Metal backends; SDL3 "window manager, controllers, and audio player"; game data in `.otr` (MPQ) or `.o2r` (ZIP) archives with a threaded resource manager and tinyxml2 resource loaders; ImGui UI; libtcc C-mod scripting. Builds for Linux, macOS, Windows, iOS and Android, and includes a "Porting Guide: How to port an N64 game to PC using LUS". — [libultraship](https://github.com/Kenix3/libultraship)
- SoH resource model: N64 code used raw pointers to assets. The port instead "tags assets by string location in the archive", and a resource manager loads them on a separate thread. Patches in the archive enable texture packs. Widescreen comes from Fast3D. — [VGC](https://www.videogameschronicle.com/news/exclusive-a-fully-functioning-zelda-64-pc-port-is-90-complete/)
- Animal Crossing port: GX calls are translated to OpenGL 3.3 on the fly. — [Notebookcheck](https://www.notebookcheck.net/Animal-Crossing-for-the-Nintendo-GameCube-just-received-an-unofficial-native-PC-release-with-support-for-4K-widescreen.1253295.0.html)
- Dusk credits the "Aurora team", which the article does not explain. — [Time Extension](https://timeextension.com/news/2026/05/the-legend-of-zelda-twilight-princess-has-unofficially-been-ported-to-the-pc)
- DS: SM64DS and KH Days each appear to use their own project-specific runtime. Neither README describes a reusable framework. — [sm64ds-decomp](https://github.com/tangosdev/sm64ds-decomp); [heldgames](https://heldgames.com/guides/games-100-percent-decompiled-what-next)
- An emulator-side alternative for DS is melonDS with game-specific mods (KH Melon Mix: single-screen layout, widescreen hack, controller mapping). — [KHMelonMix](https://github.com/vitor251093/KHMelonMix/blob/master/README.md)

### Inferences
- A DS port layer has a larger surface than libultra: GXFIFO/geometry commands, 2D BG/OBJ engines on both screens, VRAM bank mapping, the NitroSystem G3D (NSBMD/NSBTX/NSBCA) runtime, SND/SSEQ/SBNK/SWAR sequenced audio, a touch screen, the save chip, and the FS/overlay loader.
- Two strategies for FFC:
  - (1) Reimplement SDK calls at a high level (G3_*, G2_*, FS_*, SND_*).
  - (2) Keep the game and SDK code as C and emulate hardware register and VRAM semantics in a software layer, i.e. "HLE of the hardware".
  - (2) is easier to make correct if the SDK is also decompiled; (1) is faster and enables enhancements. libultraship sits at (1) for libultra plus a GPU translator (Fast3D) for the display lists.
- The Aurora (GX) and Fast3D sources are the best design references for a DS GXFIFO-to-GL translator. melonDS's GPU3D/GPU2D sources (GPL, check licence compatibility) are references for exact DS semantics: toon/edge marking, polygon ID, 1-dot depth, and the 2D layering of BG and OBJ.

### Gaps
- No search confirmed or ruled out an existing open DS port library (e.g. in pret/pokeplatinum or pokeheartgold port forks, or the KH Days runtime). This needs a dedicated search.
- What "Aurora" is exactly, and its repo and licence.
- How SM64DS renders on PC.

## Common technical pitfalls: 64-bit pointers in structs, endianness, UB that matching C relies on, fixed-point math, frame timing/VBlank, ROM data vs extracted assets, legal model

### Takeaway
The recurring pitfalls are:
- 32-bit pointer assumptions, which made Perfect Dark ship 32-bit-only first.
- Raw pointers into loaded data blobs, which SoH replaced with named resource lookups.
- Asset distribution, where the sm64 binary with embedded assets was DMCA'd; everyone since uses "bring your own ROM" plus extraction.
- Frame-rate uncapping, which needs interpolation (Dusk) because game logic is tied to the original tick.

DS on x86/ARM64 has the same endianness (little-endian), which removes the main N64/GameCube pain point. A 32-bit host build is a legitimate first milestone.

### Cited Findings
- Perfect Dark: initially "only 32-bit platforms are supported (x86 Windows and Linux)". The 64-bit port was later separate work credited to one contributor, with commits like "port: 64-bit: replace another long". — [mirror](https://git.new.deadbsd.org/falso/perfect_dark/src/commit/83c1bd3ffd0e7a30c4dfe24c076bc69ce80f3aaf); [perfect_dark](https://github.com/fgsfdsfgs/perfect_dark)
- SpaceCadetPinball decomp: commit "Converted memory to direct pointers". x64 worked "on the first try", but a ball-collision bug "may have been lost in decompilation or introduced in x64 port/not present in x86 build". — [SpaceCadetPinball](https://git.fliegendewurst.eu/administration/SpaceCadetPinball/src/commit/a09ea75d801a35c2c4785ed218d3881da4d88f8d)
- Asset pointers: "The N64 used pointers for assets." SoH switched to string-tagged archive resources. — [VGC](https://www.videogameschronicle.com/news/exclusive-a-fully-functioning-zelda-64-pc-port-is-90-complete/)
- Legal model: sm64 port binaries were DMCA'd for bundling assets. SoH keeps assets in an external archive built from the user's ROM, which the team believes may help avoid takedowns. Every modern port (PD, Starship, SpaghettiKart, Dusk, AC, SM64DS) requires a user dump, often with a hash check. — [PC Gamer](https://www.pcgamer.com/au/a-90-complete-fan-made-pc-port-of-zelda-ocarina-of-time-could-be-ready-by-april); [VGC](https://www.videogameschronicle.com/news/exclusive-a-fully-functioning-zelda-64-pc-port-is-90-complete/); [SteamDeckHQ](https://steamdeckhq.com/news/star-fox-64-native-pc-port-starship-released); [sm64ds-decomp](https://github.com/tangosdev/sm64ds-decomp)
- Single-region support is common at launch: AC supports only US Rev 0, SpaghettiKart only US. — [Notebookcheck](https://www.notebookcheck.net/Animal-Crossing-for-the-Nintendo-GameCube-just-received-an-unofficial-native-PC-release-with-support-for-4K-widescreen.1253295.0.html); [Time Extension](https://www.timeextension.com/news/2025/06/mario-kart-64-has-been-ported-to-pc)
- Frame timing: Dusk uncaps via skeleton vertex interpolation between logic frames. PD's high framerate has issues above about 165 FPS. AC defaults to 60 fps with up to 960. — [Time Extension](https://timeextension.com/news/2026/05/the-legend-of-zelda-twilight-princess-has-unofficially-been-ported-to-the-pc); [perfect_dark](https://github.com/fgsfdsfgs/perfect_dark); [Notebookcheck](https://www.notebookcheck.net/Animal-Crossing-for-the-Nintendo-GameCube-just-received-an-unofficial-native-PC-release-with-support-for-4K-widescreen.1253295.0.html)
- Post-release bugs are normal: PD has "occasional crashes", and AC has audio and visual glitches. — [perfect_dark](https://github.com/fgsfdsfgs/perfect_dark); [tecnoandroid](https://www.tecnoandroid.it/news/animal-crossing-gamecube-ora-gira-su-pc-come-e-stato-possibile-1837542/)
- Differential testing catches divergence: snesrev ports run the original code in parallel and compare state frame by frame. — [Kowatek](https://blog.kowatek.com/?p=12246)

### Inferences (FFC-specific)
- **Pointers**: DS code stores pointers in `u32` fields, packs pointers in file structs (relocated offsets in NSBMD/NARC-style data), and uses fixed addresses (0x02xxxxxx, 0x027Exxxx DTCM, I/O at 0x04000000). These are the first 64-bit breakers. The cheapest path is a 32-bit host build (i686, `-m32`) first, then a 64-bit clean-up like PD's.
- **Endianness**: not an issue. ARM9 is little-endian, like x86-64 and arm64.
- **UB in matching C**: CodeWarrior-specific behaviours to audit:
  - signed shifts and overflow
  - `char` signedness (CW ARM `char` is unsigned)
  - type-punned unions
  - out-of-bounds struct access used for matching
  - uninitialised locals that happen to work
  - `int`-sized enums
  - CW-only extensions and inline asm
  - `#pragma` and `__declspec` sections
  - reliance on overlay load addresses
  - bitfield layout differences between CW and GCC/Clang
- **Fixed-point**: FX32/FX16 math is integer, so it is deterministic on any host. Code relying on `smull` 64-bit intermediates is fine if written with `s64`. Hardware divider and sqrt registers (0x04000280/2B0) must be emulated or replaced by C functions (FX_Div, FX_Sqrt).
- **VBlank and timing**: DS games tick at 60 Hz, or 30 Hz for many 3D titles, from VBlank interrupts (OS_WaitVBlankIntr, IRQ handlers). The port loop must call game frame plus VBlank handlers explicitly, and DMA/HDMA-timed effects need emulation.
- **Overlays**: FFC uses many overlays (ov002, ov015, ...), overlaid at shared addresses. A native build can link all overlays into one executable, but name collisions and code relying on overlay unload/reload state must be handled.
- **ROM data**: FFC loads NitroFS files at runtime, so the port can keep a "mount the user's .nds as a filesystem" approach (FS_* reimplemented over the ROM file), which avoids an extraction step. This is simpler than N64, where assets are embedded in code segments.

### Gaps
- No source found on CodeWarrior-to-GCC UB issues specifically. The list above is reasoning, not cited.
- No source on how any DS port handles dual screens or touch on PC.

## Role of non-matching ("functionally equivalent") C and documentation/naming in porting

### Takeaway
Ports consume functionally equivalent C freely (SA2: ~60 non-matching functions built for SDL/PSP/PS2; snesrev: entirely non-matching but differentially tested). Naming and documentation matter mostly for porting interfaces: rendering, asset loading, the main loop, and save/input. Game logic can stay as `func_0201xxxx`. SM64DS deliberately separates "matched", "converted" (readable) and "linked into port", which shows those are separate axes of progress.

### Cited Findings
- SA2: "100% from C files with ~60 functions which currently don't match", yet it builds SDL, PSP and PS2 ports. — [HiroStuff/sa2](https://github.com/HiroStuff/sa2)
- SM64DS: ports linked 93.5% of TUs while only 39.6% is "converted" (readable). Port progress is not gated on readability. — [sm64ds-decomp](https://github.com/tangosdev/sm64ds-decomp)
- Snowboard Kids 2 author: "A 100% match doesn't mean the source is perfectly understood." — [capitalandcompute](https://capitalandcompute.net/blog/which-games-has-ai-decompiled/)
- Halo CE: playable port at 7% matched code, so the port's C is overwhelmingly non-matching reconstruction. — [heldgames](https://heldgames.com/guides/games-100-percent-decompiled-what-next)
- EmeraldRecomp needs only symbol metadata (names, addresses, sizes) from the decomp and does no source-level porting. — [EmeraldRecomp](https://raw.githubusercontent.com/mstan/EmeraldRecomp/HEAD/README.md)

### Inferences
- For FFC's remaining ~16%, writing *equivalent* C and verifying it differentially (run the original via an ARM emulator vs the C on the same inputs, as snesrev does per frame) is likely much cheaper than further matching attempts. LLM success rates for "equivalent" should be far above the ~25% Sonnet match rate. This is an inference; no data was found.
- Documentation should focus on struct layouts containing pointers (for 64-bit) and on SDK/hardware call sites.

### Gaps
- No quantitative data on how much documentation SoH or Dusk needed before porting.

## LLM use in ports

### Takeaway
LLMs are now common in matching decomps (Melee, Snowboard Kids 1/2, SM64DS, Klonoa) and are appearing in ports (DKR-R co-authored by Claude Opus 5/5.5, a Banjo-Tooie port whose README says AI generated "substantial portions", reportedly the AC PC port). Community reception is split: Zelda64Recomp and N64Recomp ban generative-AI code, and Harbour Masters accepts AI PRs but is "Anti Slop". Expect provenance scrutiny if FFC's port is published.

### Cited Findings
- Ports with LLM use: Banjo-Tooie independent PC recompilation (README: "AI tools generated substantial portions"; disowned by DarioSamo of the Banjo: Recompiled project). DKR-R commits co-authored by Claude Opus 5/5.5. GoldenEye-Recomp (X360 remaster): "Yes, AI was used". — [capitalandcompute](https://capitalandcompute.net/blog/which-games-has-ai-decompiled/)
- Policies: Zelda64Recomp "has not, does not, and will not use generative AI tools". N64Recomp: "AI must not be used to generate code". Harbour Masters: "not an Anti AI organization, however, we are Anti Slop". — [capitalandcompute](https://capitalandcompute.net/blog/which-games-has-ai-decompiled/); [Zelda64Recomp](https://github.com/Zelda64Recomp/Zelda64Recomp); [HM code of conduct](https://github.com/HarbourMasters/code-of-conduct)
- DarioSamo (5 Oct 2026): "Any claims you've seen about AI speeding up this 'tedious' process are false when recompilation is involved." — [Bluesky via capitalandcompute](https://bsky.app/profile/dariosamo.bsky.social/post/3mx3qilejkc2d)
- Klonoa decomp: when stuck, the agent "it'll start trying to cheat". This is relevant to unattended equivalent-C generation and argues for differential tests. — [gambiconf](https://gambiconf.substack.com/p/starting-a-decompilation-project)
- Chromatron Rust recompile: Opus 4.6 reached "307,199 out of 307,200 pixels" matching, which shows pixel-diff verification as an LLM oracle. — [Quesma](https://quesma.com/blog/chromatron-recompiled/)
- Snowboard Kids author found "Codex continued to outperform Claude". — [Chris Lewis blog](https://blog.chrislewis.au/decompiling-a-nintendo-64-game-in-84-days/)

### Inferences
- LLM-driven porting works best with a hard oracle: screenshot/framebuffer diffs vs melonDS, or a per-function differential test against an ARM emulator. Free-form "make it run" leads to cheating and slop.

### Gaps
- Model names and figures above come largely from one aggregator (capitalandcompute.net, 2026-10-12) and were not checked against the repos.
- No published cost or effort numbers for any LLM-built port.
