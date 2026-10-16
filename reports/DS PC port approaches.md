# Replace the SDK, not the hardware

The only Nintendo DS decompilation that has become a playable native PC port did it by **keeping the game code and swapping the SDK underneath it**. That project is cybervisi0n's Pokémon Platinum, built on **libntr**, a drop-in NitroSDK replacement that already advertises a **TwlSDK `twl_hyb` (DSi-enhanced) mode**, the same build type as Fossil Fighters Champions (FFC) ([libntr](https://github.com/cybervisi0n/libntr), [cybervisi0n/pokeplatinum](https://github.com/cybervisi0n/pokeplatinum)). The register-level alternative is Super Mario 64 DS (SM64DS). It is 100% matched and its port has gone through nine smoke-test "gates" since August 2026, but it is still not a playable game ([port/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/README.md)). Static recompilation (ndsrecomp, which runs Metroid Prime Hunters as an alpha) gets a ROM running fastest. What it produces, though, is a recompiling emulator under a noncommercial-plus-GPL license, not a source port ([ndsrecomp](https://github.com/mstan/ndsrecomp)).

For FFC, the fastest and cheapest credible path is a **32-bit host build** of the existing matched C. That build should sit on a **libntr-style SDK replacement** running in plain DS (NTR) mode, with DS Protect stubbed. The remaining ~3,900 functions should then be closed as **functionally equivalent C checked by differential testing, not by more matching**. That last change matters most for spending. No port in the survey required a byte-perfect decomp, but every one required **all game code to exist as host-compilable C**. Paid matching rounds over twice-failed functions are therefore the wrong spend for a port. The two most valuable cheap steps are **naming the SDK by signature** (today zero SDK functions are named) and **recovering the ~500 missing ov002 vtable functions**. All effort and cost figures below are estimates extrapolated from other projects, not measurements on FFC.

## One playable DS port exists, and it kept the game code above the SDK line

Four public DS projects run natively on PC or are trying to, and they split cleanly by where they cut the stack. The table summarises their state as of October 2026.

| Project | Where it cuts | State (Oct 2026) | Lesson for FFC |
|---|---|---|---|
| cybervisi0n/pokeplatinum + libntr | SDK API (NitroSDK/NNS replaced) | "Should be possible to play the game from start to finish", with crashes and graphical bugs. Linux, Win64 and Switch. ([README](https://github.com/cybervisi0n/pokeplatinum)) | The proven route. Small game-side diff on top of a large SDK replacement. |
| GabeSud0/pokeplatinum-3ds | Hardware layer (SDK code kept, registers are plain arrays) | All 1,012 C files link, boots to title and new game, "Nothing playable yet", 3D next. ([README](https://github.com/GabeSud0/pokeplatinum-3ds)) | Clearest subsystem-by-subsystem design document. Needs SDK source as C. |
| tangosdev/sm64ds-decomp `port/` | MMIO/register level, clean-room from GBATEK | "A suite of native smoke executables, not yet a standalone playable game". 98.9% of TUs compile for host. ([port/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/README.md)) | Needed because EAD code pokes hardware directly. Slow. |
| mstan/MetroidPrimeHuntersRecomp on ndsrecomp | Whole machine, recompiled | "Public alpha - bugs are expected", v0.7.6, widescreen, HD 3D, Wiimmfi. ([MPH Recomp](https://github.com/mstan/MetroidPrimeHuntersRecomp)) | No decomp needed. Not a source port. GPL plus noncommercial license. |
| arcanite24/pokeplatinum-portable | Engine rewrite on SDL3, assets as PNG | Stalled December 2025. 3D and audio "Stub only". ([PORTING_PLAN.md](https://github.com/arcanite24/pokeplatinum-portable/blob/main/PORTING_PLAN.md)) | The rewrite route failed before FS, audio and 3D. |

The Platinum port's game-side change is small. SM64DS's own assessment measured it at **61 commits and 318 files** of diff against pret's tree. Only about 34 of those files add `(u64)` pointer casts. The rest are callback-signature widening, static toggles and static-initialiser shims, plus 12 port-only files for ImGui debug panels ([opie-assessment.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md)). The same tree still builds the original ARM ROM, behind 459 `SDK_BUILD_ARM` and 137 `SDK_PORT` guards ([cybervisi0n/pokeplatinum](https://github.com/cybervisi0n/pokeplatinum)). The heavy lifting is in libntr itself, about **215k lines** across its libraries. Roughly half of that is the host simulator and the native ARM7 replacement, and a large share of that half is vendored ImGui and glad ([libntr](https://github.com/cybervisi0n/libntr)). The repos credit one author, but no person-hours are published.

Matching percentage turned out to be a poor predictor of porting progress across platforms. Sonic Advance 2 builds SDL, PSP and PS2 ports from "100% … C files with ~60 functions which currently don't match" ([HiroStuff/sa2](https://github.com/HiroStuff/sa2)). Halo CE has a playable native port at **7% matched** ([heldgames](https://heldgames.com/guides/games-100-percent-decompiled-what-next)). Melee reached 100% matched in September 2026 and its FAQ promises no port ([melee FAQ](https://github.com/doldecomp/melee/wiki/FAQ)). SM64DS tracks three separate axes: **matched 100%, readable "converted" 39.6%, linked into the port 93.5%** ([sm64ds-decomp](https://github.com/tangosdev/sm64ds-decomp)). Once complete C existed, framework-backed teams needed about three to five months to ship. Ship of Harkinian started port work in mid-December 2021 and was "90% complete" by late January ([VGC](https://www.videogameschronicle.com/news/exclusive-a-fully-functioning-zelda-64-pc-port-is-90-complete/)). Twilight Princess: Dusk followed a decomp declared complete in December 2025 with a May 2026 release ([Time Extension](https://timeextension.com/news/2026/05/the-legend-of-zelda-twilight-princess-has-unofficially-been-ported-to-the-pc)). Those teams had libultraship or Aurora under them. DS has no equivalent shared framework apart from the young libntr ([libultraship](https://github.com/Kenix3/libultraship)).

FFC's same-ROM sibling, arcnid/ffc-decomp, names "PC ports" as a goal but has no port code or plan ([arcnid README](https://github.com/arcnid/ffc-decomp)). Nobody else is already doing this for FFC.

## FFC uses the SDK, so it sits on the easy side of the API-versus-register split

The architectures differ in where the PC code meets the game, and that decides what the decomp must provide.

**libntr (SDK-API replacement).** On PC every MMIO register becomes a host global and every DS memory region a host array. 2D is software-rasterised each frame from the BG/OBJ registers, VRAM and OAM, then composited in OpenGL. **3D is intercepted at the API level**: each `G3_*` call becomes a draw message to an OpenGL 4.2 renderer with upscaling. A display-list decoder handles `MI_SendGXCommand` streams. Sound runs `sim7`, a **native C reimplementation of the SDK's ARM7 sound driver** with a ~1,679-line SSEQ sequencer, over threads that stand in for PXI. VBlank is driven from the host frame loop at 60 Hz. On first launch the user's ROM is extracted next to the executable ([opie-assessment.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md), [libntr](https://github.com/cybervisi0n/libntr)).

**pokeplatinum-3ds (hardware layer).** It runs on the same idea of registers as plain arrays, but keeps the vendor SDK code compiled for the host. It maps the subsystems as follows ([HARDWARE_LAYER.md](https://github.com/GabeSud0/pokeplatinum-3ds/blob/main/docs/HARDWARE_LAYER.md)):

- `MI_*` DMA becomes `memcpy`, and `DC_*` cache operations are no-ops.
- `CARD_*` save is a 512 KB file.
- `TP_*` touch maps to the mouse, and `RTC_*` to the system clock.
- `OS_WaitIrq` maps to the platform VBlank wait.
- Wireless is stubbed.
- **All overlays are linked into one binary**, with per-overlay data/BSS renamed and reset on "load".

Its audio PR compiled NitroSDK's ARM7 sequencer for the host on a 16-voice software SPU model at 32,768 Hz, with a sequencer tick of 2,728 µs ([PR #50](https://github.com/GabeSud0/pokeplatinum-3ds/pull/50)).

**SM64DS (register level).** It has to work at the hardware level because EAD code writes registers directly: **1,959 MMIO references across 317 files**. Its `hostgen.py` rewrites those dereferences in copies of `src/`, so the matching tree is never edited. It found that "dead registers do not produce a blank screen, they produce a hang", because the game spin-waits on DMA busy bits and IPC ([port/ntr/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/ntr/README.md), [opie-assessment.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md)). FFC was built with CodeWarrior against the TWL/Nitro SDK, so most of its hardware access should go through SDK calls that a libntr-style layer already replaces. That conclusion is an inference. It needs confirming with a count of raw `0x04xxxxxx` accesses in FFC's game code, and that count is cheap to take.

**Static recompilation.** Here the decomp is optional. ndsrecomp "lifts guest ARM code to C ahead of time". It covers ARMv5TE and Thumb, a dual-CPU scheduler, card/KEY1, DMA and a vendored melonDS 3D device, and it runs RAM-copied code through an interpreter tier. Its own README calls it "very early pre-alpha (v0.6.10)" and says nothing about DSi mode ([ndsrecomp](https://github.com/mstan/ndsrecomp)). The SM64DS recomp uses the decomp only for "exact … function names, modes, sizes, and module boundaries" and "does not compile the decomp's matched C" ([supermario64dsrecomp](https://github.com/mstan/supermario64dsrecomp)). That makes it an emulator built ahead of time, not a port of FFC's source.

**Hybrid decomp plus recomp.** This is the novel option, and it is closest to the N64Recomp/XenonRecomp pattern. Recompiled functions are emitted as weak symbols, and decomp C overrides them by linker precedence as it lands ([N64Recomp](https://github.com/N64Recomp/N64Recomp), [XenonRecomp](https://github.com/hedge-dev/XenonRecomp)). FFC already holds the hard metadata a recompiler needs. dsd's `symbols.txt`, `relocs.txt` and `delinks.txt` give exact function boundaries, ARM/Thumb mode, jump tables and cross-overlay targets, which is more than N64Recomp gets from an ELF. A literal per-instruction emitter (`ctx->r4 = ADD32(...)` over a guest-RAM array) is therefore a plausible few-week tool (estimate). Its real cost is the **ABI bridge**. Decomp C and recompiled C have to share pointers, so all game data must live at its original 32-bit guest addresses.

SM64DS's assessment notes that a 32-bit Windows process can `VirtualAlloc` at literal `0x02000000` and mirror DS addresses 1:1 ([opie-assessment.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md)). If FFC's host build is 32-bit with main RAM mapped there, native pointers and guest pointers become the same numbers. The bridge then shrinks to marshalling r0–r3 and the stack. Nobody has published a DS decomp-plus-recomp hybrid, so this remains unproven.

The FFC-specific mapping below combines these patterns. Every "approach" cell is a recommendation drawn from the cited precedents, not something tested on FFC.

| FFC subsystem | Recommended host approach | Precedent | Open FFC question |
|---|---|---|---|
| 3D battles (NNS G3D) | Keep the NNS code from the decomp. Translate the `G3_*`/GX command stream to GL. | libntr G3→GL 4.2. pokeplatinum-3ds FIFO interpreter. | Does FFC use display capture or 3D on both screens? (Needs a runtime trace.) |
| 2D menus, dual screens | Software scan-out of registers, VRAM and OAM per frame (per scanline if HBlank effects exist). | libntr `sim_g2`, `port_render2d.c` | Are HBlank scroll or window effects used? |
| Sound (SDAT) | Keep ARM9 `SND`/NNS calls. Use a native ARM7 driver (libntr sim7) or a clean-room sequencer ([FSS](https://github.com/fincs/FSS), WTFPL). | libntr sim7, PR #50 | FFC has no ARM7 code in the decomp. Do any STRM streams exist? |
| FS, overlays | FS over the user's ROM. Link all 19 overlays, renaming per-overlay data/BSS and resetting it on load. | pokeplatinum-3ds (122 overlays) | Code that compares code addresses across overlays. |
| Save, touch, RTC, input | `CARD_*` to a file, `TP_*` to the mouse, `RTC_*` to the clock, `PAD_Read`. | pokeplatinum-3ds table | None significant. |
| DSi features | Run in NTR mode and force `twl_hyb` paths off. | libntr `twl_hyb` (beta) | Which TWL calls FFC makes. |
| DS Protect (ov015/ov016) | Stub to "pass". Do not port. | Repo STATUS already treats these as stubs and tables. | Whether any game state depends on its side effects. |
| CP15, swi, clz, ldm/stm copies | Host no-ops and C intrinsics (`memcpy`, `__builtin_clz`). | SM64DS asm-TU backlog. | None significant. |
| 64-bit pointers | Build 32-bit first and clean up to 64-bit later. | Perfect Dark shipped 32-bit first ([mirror](https://git.new.deadbsd.org/falso/perfect_dark/src/commit/83c1bd3ffd0e7a30c4dfe24c076bc69ce80f3aaf)). SM64DS i686 first. | macOS has no 32-bit target, so it waits for the 64-bit pass. |

## Licensing decides which code may be linked, and libntr carries the heaviest baggage

Every modern port uses the same distribution model: **source only, and the user supplies the ROM**. The sm64 port binary was DMCA'd for bundling assets ([PC Gamer](https://www.pcgamer.com/au/a-90-complete-fan-made-pc-port-of-zelda-ocarina-of-time-could-be-ready-by-april)), and the Platinum, SM64DS, MPH and Dusk ports all require a user dump. FFC should adopt that model regardless of the option chosen. Beyond it, each building block carries a different obligation.

| Component | License | Consequence for an FFC port |
|---|---|---|
| libntr (+ libntrsystem, etc.) | MIT file added in 2026 ([libntr](https://github.com/cybervisi0n/libntr)) | The label sits on a fork of the unlicensed `ntrtwl/NitroSDK` trees, which have stripped copyright headers and in-tree prebuilt ARM blobs ([opie-assessment §2f](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md)). Usable as a build-time dependency, but the Nintendo-derived ancestry is not cleaned by the MIT label. Its projects **reject AI-written contributions** ([pokeplatinum README](https://github.com/cybervisi0n/pokeplatinum)), so FFC can consume it but not upstream fixes. |
| melonDS renderers | GPL-3.0-or-later ([melonDS](https://github.com/melonDS-emu/melonDS)) | Copying or linking the code makes the port binary GPL-3. Reading it as documentation does not. This is one-way: ndsrecomp's runner became a "GPL-3.0-or-later combined work" this way ([THIRD_PARTY_ATTRIBUTION.md](https://github.com/mstan/ndsrecomp/blob/main/THIRD_PARTY_ATTRIBUTION.md)). |
| ndsrecomp framework | PolyForm Noncommercial 1.0.0 with MIT islands. The runner is GPL-3 ([ndsrecomp](https://github.com/mstan/ndsrecomp)). | Fine for a noncommercial fan port. It ties FFC to a pre-alpha framework's license and API churn. |
| apicula (NSBMD/NSBCA decoders) | 0BSD ([apicula](https://github.com/scurest/apicula)) | Free format knowledge for a G3D reference or debug viewer. |
| FSS sequencer | WTFPL ([FSS](https://github.com/fincs/FSS)) | A clean-room ARM7 sound replacement can lift it freely. |
| BlocksDS libnds headers | Zlib ([BlocksDS](https://blocksds.skylyrac.net/docs/introduction/licenses)) | Register bitfield definitions only. Not a PC renderer. |
| pokeplatinum-3ds port layer | GPL-3.0 ([README](https://github.com/GabeSud0/pokeplatinum-3ds)) | Same one-way effect as melonDS if code is copied. |
| FFC's own decomp (including its SDK functions) | Derived from the Nintendo binary, like every decomp | Same risk profile as all matching decomps. SDK bodies in FFC's `src/` are no cleaner than libntr's. |

SM64DS's policy is the conservative benchmark. Its port layer is written from GBATEK only, with "no SDK source, no emulator code". It does not vendor SDK implementations into `src/` and treats a build-time wrap as "defensible" ([port/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/README.md), [opie-assessment.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/docs/opie-assessment.md)). That gives the human three positions to choose from. The **pragmatic** one depends on libntr as an external wrap and is fastest. The **clean-room** one writes a GBATEK/FSS/apicula-based layer: slowest, but the cleanest provenance. The **GPL** one takes melonDS's 3D and 2D renderers for accuracy and accepts GPL-3 for the whole binary. These positions can be combined. A plausible blend is libntr for OS, FS, CARD and SND plumbing with a clean-room 3D translator. Provenance scrutiny of AI-written code is a separate social risk. Zelda64Recomp and N64Recomp ban generative-AI code, and Harbour Masters is "Anti Slop" ([capitalandcompute](https://capitalandcompute.net/blog/which-games-has-ai-decompiled/), [HM code of conduct](https://github.com/HarbourMasters/code-of-conduct)). A publicly released FFC port should disclose its LLM use up front.

## A port goal reorders the decomp: name the SDK, stop paid matching, write equivalent C

The long-tail report's central claim still holds: FFC's tail is a scheduling and policy problem. Its prescription was free CPU sweeps first, then parking twice-failed functions, then one capped refine pass. That prescription assumed byte matching was the goal. The repo's plan header now says the goal is a PC port: "Every function must end up as C (matching or functionally equivalent)", and "SDK/hardware code is reimplemented by the port layer rather than decompiled" ([LONGTAIL_PLAN.md](../docs/LONGTAIL_PLAN.md)). Several priorities change under that goal.

**Function count overstates progress.** By bytes, the remaining code is larger than the matched code: **0.90 MB done against 0.42 MB fail_sonnet and 0.64 MB todo**, including 189 todo functions of 1 KB or more ([LONGTAIL_PLAN.md](../docs/LONGTAIL_PLAN.md)). The port backlog is therefore about 1.06 MB of code plus ~500 functions with no symbol. That is more than "16% of functions" suggests, and it is dominated by large functions.

**SDK identification moves to the front.** Today zero SDK functions are named; every one is `func_XXXXXXXX` (checked in both FFC's and arcnid's symbol files). Naming them determines which leftovers the port layer replaces and so drops out of the C backlog. It also determines whether libntr can link against FFC at all. KH Days identified **979 NitroSDK functions** "single-pass, zero agent cost". It compiled SDK source with its matching compiler and byte-searched the ROM ([khdays sdk/README.md](https://github.com/Yokimitsuro/khdays-decomp/blob/main/sdk/README.md)). No public TwlSDK C tree exists among FFC's reference repos. libntr's `arm` target does build TwlSDK-mode SDK code from source, though ([libntr](https://github.com/cybervisi0n/libntr)). Compiling it with CodeWarrior for DSi 1.2p2 purely to generate `dsd sig` signatures would ship nothing derived from it, which makes it a plausible identification source. That is an inference and has not been tried. What survives byte search can be labelled from string references, call graphs and FFC's own matched SDK donors.

**Paid matching stops, free matching continues.** Exact matching is worth something to a port only as a correctness guarantee and as a source of clone donors. Free tiers keep both benefits: build, flag and pragma sweeps, decomp-permuter, clone and coddog passes, and arcnid imports. Fresh Sonnet rounds over twice-failed functions do not, and the long-tail report already showed they decay toward a ~10% yield. The refine pilot (Opus at div≤25), which the long-tail report endorsed, drops to optional. Its ~70% landing rate ([sm64ds mwccarm-codegen.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/notes/mwccarm-codegen.md)) buys byte-exactness that a port does not need.

**Functionally equivalent C plus an oracle replaces those rounds.** SM64DS keeps "logically-correct-but-unmatched implementations" in `port/unmatched/`, never in `src/`. The DS build keeps the delinked ROM bytes, and the PC build selects the C ([port/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/README.md)). FFC can do the same without touching the orchestrator's `src/` rules. The verification layer has two levels, and both are buildable from published pieces.

At function level, a Unicorn harness runs the original bytes and the candidate C from the same RAM snapshot (taken from a melonDS save state at a call site) and compares register and memory writes, with callees trapped. AFL-Unicorn shows the single-function pattern ([AFL-Unicorn](https://medium.com/hackernoon/afl-unicorn-fuzzing-arbitrary-binary-code-563ca28936bf)). DecompileBench validates decompiled functions by substituting them and comparing side effects ([DecompileBench](https://arxiv.org/abs/2505.11340)).

At whole-game level, ndsrecomp's oracle syncs a melonDS process on hardware-event counts and bisects to "the first VBlank where any tracked region diverges" ([oracle/README.md](https://raw.githubusercontent.com/mstan/ndsrecomp/HEAD/oracle/README.md)). snesrev's ports compare state frame by frame and snapshot on mismatch ([Kowatek](https://blog.kowatek.com/?p=12246)).

An oracle is not optional when LLMs write the code. One decomp author reports that a stuck agent "will start trying to cheat" ([gambiconf](https://gambiconf.substack.com/p/starting-a-decompilation-project)). LLM refinement of decompiler output has been measured to "recompile more and preserve less" ([summary](https://deeplearn.org/arxiv/819351/when-llm-decompilers-recompile-more-and-preserve-less)). No public decomp project runs per-function emulator equivalence tests yet, so FFC would be building this harness first.

The table revises the long-tail phases for a port goal.

| Long-tail item | Matching verdict | Port-goal verdict |
|---|---|---|
| Free CPU tiers (sweeps, permuter, clone, arcnid import) | Do first | **Keep.** Cheap, and each match is guaranteed-correct C plus a clone donor. Cap at 1–2 CPU-days. |
| Further Sonnet waves over fail_sonnet | Stop after two failures | **Stop.** Re-queue those functions for equivalent C. |
| Opus refine pilot at div≤25 | Fund one capped pass | **Optional.** Only if equivalent C stalls on a specific near-miss class. |
| Batched cheap tier on never-tried todo | Fund | **Redirect** the same batching (10–15 per agent, coddog examples) to equivalent C, with the oracle as judge. |
| 71 system-register asm functions | Allowlist as asm | **Skip.** They become host no-ops or HAL calls (CP15, CPSR, cache). |
| clz soft-float, 8-register ldm/stm copies | Allowlist as asm | **Skip** if they are SDK/MSL (replaced). Otherwise trivial C. |
| DS Protect ov015/ov016 | Block | **Skip.** Stub as "pass". |
| 163 `__sinit` functions | Per-symbol C pilot | **Needed.** Static constructors run at startup on PC too. Equivalent C is easy. |
| 141 C++ this-adjust thunks | Park as compiler-generated | **Needed but trivial.** Hand-written equivalent C, or emitted by the host compiler once classes are declared. |
| ~500 ov002 vtable-only functions missing from symbols | Symbol recovery | **Critical path.** Game code the port cannot run without. Recover with pointer-table scans, then write equivalent C. |
| SDK/NNS/MSL functions in fail or todo | Match like everything else | **Drop from the C backlog** once identified, if the port layer is libntr-style. Keep them only under a hardware-layer design. |

## Fastest credible path: a 32-bit libntr-style port with stand-ins, closed by verified equivalent C

The cheapest way to *play* FFC on PC already exists: melonDS. KH Days' "PC experience" today is a modified melonDS ([KHMelonMix](https://github.com/vitor251093/KHMelonMix)). A native port is justified by moddability, enhancements (resolution, widescreen, framerate), and a source tree that builds both the ROM and the PC binary. The roadmap therefore optimises for reaching a bootable native build early and growing it gate by gate, the way SM64DS grew its port in "slices" while the decomp was incomplete ([port/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/README.md)).

Missing functions start as stand-ins that trap loudly. They are then replaced in order of runtime coverage, measured by tracing which functions melonDS actually executes from boot through title, overworld and first battle. A literal recompiler, or an interpreter running the original bytes, is held back as a fallback stand-in for giant functions. It is worth building only if the 32-bit 1:1 address mapping works and equivalent C stalls on large functions.

| Phase | Work | Gate to proceed | Effort (estimate) | Token cost (estimate) |
|---|---|---|---|---|
| P0. Decisions and inventory | Human picks D-A to D-E below. Find SDK/MSL build strings. Count raw MMIO accesses in game code. Trace a melonDS run (boot → first battle) for executed functions, display capture and HBlank use. | Decisions recorded. Coverage list exists. | 1 session | <$20 |
| P1. Name the SDK | Signature-identify NitroSDK/TwlSDK/NNS/MSL (KH Days method, `dsd sig`). Label the rest by call graph and strings. Mark SDK leftovers "replaced by port". | ≥80% of SDK-range functions named, and libntr's API covers the named set (else switch to the hardware-layer variant) | 1–3 sessions | $0–50 |
| P1b. Free decomp tiers (parallel) | Sweeps, permuter, clone, arcnid recheck. Recover the ~500 ov002 vtable functions and tail-call targets with pointer-table scans. | <5% yield, then stop | 1–2 CPU-days | ~$0 |
| P2. Host skeleton | `port/` tree outside `src/`. Clang `-m32` build of all matched TUs, a CodeWarrior-isms compatibility header, 19 overlays statically linked with data/BSS reset, generated trap stand-ins for every missing function. Measure a host-compile frontier as SM64DS does. | ≥95% of done TUs compile and link for host | 2–4 sessions | $50–200 |
| P3. Platform bring-up | libntr (or the chosen layer) in `twl_hyb`/NTR mode. FS over the user's ROM, VBlank loop, 2D scan-out, input, save file, DS Protect stubbed. | **Native boot to the title screen.** No stand-in hit on the boot path. | 3–6 sessions | $100–300 |
| P4. Equivalent-C closure | Unicorn per-function oracle. Batched LLM equivalent C ordered by coverage, then by clone family. Pilot 60 functions first. | Pilot: ≥60% pass the oracle at ≤$0.30 per function. Else redesign the prompts, or use the emitter for giants. | 4–10 sessions | $700–2,500 for ~3,400 functions (~$350–700 small, ~$400–1,900 for giants) |
| P5. 3D, audio, battles | G3/GX → GL translator (or libntr's), NNS G3D verified, SND via sim7 or a clean-room driver, touch. melonDS frame-diff oracle. | **First battle completes** with music, and frame diffs pass on scripted inputs | 4–8 sessions | $150–500 |
| P6. Parity and polish | Scripted playthrough against melonDS, 64-bit cleanup, then optional widescreen, upscaling and interpolation. Release as source only with a user-ROM hash check. | Full playthrough without crash | open-ended | $200+ |

Summed, the estimate for a first playable native build is roughly **15–35 sessions and $1–3.5k in tokens**. Calendar time is a few months of orchestrated work, consistent with the 3–5 months framework-backed N64 and GameCube ports took after complete C. These figures are **estimates**. None of the per-function rates has been measured on equivalent C for FFC, and the byte-heavy giants dominate the range. If libntr does not cover FFC's TwlSDK version or NNS usage and the platform layer must be written clean-room, add several more sessions to P3 and P5. SM64DS's register-level layer has taken over two months without reaching playability ([port/README.md](https://github.com/tangosdev/sm64ds-decomp/blob/main/port/README.md)).

The risks rank roughly in this order:

1. **Coverage of libntr's young TWL beta.** It has been tested on one game.
2. **Hidden hardware dependence**: display capture, HBlank effects, spin-waits on inert registers.
3. **Oracle fidelity** for functions that touch hardware or have long call chains, where Unicorn snapshots are weakest.
4. **Giants.** 189 todo functions are 1 KB or larger, and a handful of 6–13 KB functions could each cost tens of dollars.
5. **The ~500 missing symbols.** These turn into stand-in hits in ov002 battle code.
6. **Licensing and AI-provenance friction** at release.
7. **Repo rules.** The orchestrator rules forbid `src/` and `config/` edits during integrates, so the port must live in its own tree with its own build.

The human must make five decisions before P2:

| Decision | Options | Recommendation |
|---|---|---|
| D-A. Goal | A native source port, or just "FFC on PC" | Native port. Otherwise melonDS already suffices. |
| D-B. Platform layer | libntr dependency, clean-room GBATEK/FSS/apicula layer, or melonDS-derived code under GPL | libntr as a build-time wrap for bring-up, with a clean-room 3D translator. Revisit before any binary release. |
| D-C. Definition of done (replaces long-tail D1) | Matched only, or matched plus oracle-verified equivalent C | Matched or verified equivalent C. Asm only for HAL-replaced code. |
| D-D. Spend policy (replaces long-tail D3) | More Sonnet matching waves, an Opus refine pilot, or an equivalent-C pilot | Stop paid matching. Fund the 60-function equivalent-C pilot after P2. |
| D-E. Host bitness and stand-ins | 32-bit 1:1 mapping, or 64-bit from the start. Trap stand-ins only, or also a recomp emitter. | 32-bit first with trap stand-ins. Build an emitter only if P4's pilot fails on giants. |

## Conclusion

The research reverses the decomp's implicit theory of value. Matching was the measure of progress because a matching ROM was the deliverable. For a port, the deliverable is **a complete, host-compilable, behaviour-verified C program above an SDK boundary**, and the 2,050 twice-failed functions are no harder to reach than the never-tried ones once byte-exactness is dropped. The highest-leverage work right now costs almost nothing in tokens. Naming the SDK draws the boundary the port layer plugs into. Recovering the missing ov002 symbols removes the largest unknown from the battle code. A 32-bit host skeleton turns "84% matched" into a measurable "percent that runs natively".

FFC's position is unusually good for a DS port. It uses the SDK rather than raw registers, it has only 19 overlays, and its DSi-hybrid build type is the one libntr already targets. Its matching pipeline also gives a byte-level oracle for free, which no rewrite-style port had. The open question that most affects the schedule is not model capability. It is whether a young, single-author, provenance-murky SDK replacement can carry a second game, so P1's coverage check should run before anything else is spent.
