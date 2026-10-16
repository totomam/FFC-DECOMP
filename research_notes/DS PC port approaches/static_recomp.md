# Static recompilation / ARM-to-C lifting for the FFC leftover functions

Context: Fossil Fighters Champions (FFC), ~19,400 ARM9 functions, ~3,000 not yet decompiled, plus ~500 functions
absent from the symbol list. The repo uses a dsd-style config (`config/usa/arm9/{symbols.txt,relocs.txt,delinks.txt}`,
19 overlay dirs under `config/usa/arm9/overlays`). Research done 2026-10-16. Repo sources were read from the raw
GitHub READMEs/docs at that date. Anything not confirmed in a primary source is marked UNVERIFIED.

## Is there a DS / ARM9 static recompiler (or GBA / ARM-to-C lifter)? Status, quality

### Takeaway
Yes. **ndsrecomp** (mstan, now in the RetroPortingToolkit collective) statically recompiles ARMv5TE (ARM946E-S) and
ARMv4T code, both ARM and Thumb, to C, and has early game targets (SM64DS, Mario Kart DS, Metroid Prime Hunters, Rhythm
Heaven). It is "very early pre-alpha" (v0.6.10) and licensed PolyForm Noncommercial plus GPL-3.0 (from vendored
melonDS). It emulates the whole machine in LLE style, so it is a recompiling emulator, not a lifter that emits
readable or replaceable C. Its sibling **gbarecomp** (ARMv4T) is more mature and drives several playable GBA ports.

### Cited Findings
**ndsrecomp: status and scope**
- "ndsrecomp is a static recompiler for the Nintendo DS ... it lifts guest ARM code to C ahead of time and runs that code natively rather than interpreting the immutable banks." Status: "very early pre-alpha (v0.6.10) ... an experimental developer snapshot, not a ready-to-use emulator or a stable framework ... no compatibility promise, no stable API, and no turnkey clean-clone game build yet." — [ndsrecomp README](https://github.com/mstan/ndsrecomp)
- What works: "ARM7TDMI (ARMv4T) and ARM946E-S (ARMv5TE) decode and C emission"; a dual-CPU event-aligned scheduler; card/secure-area/KEY1, DMA, firmware launch; SDL video/touch/audio; "A separate melonDS-based accuracy oracle and machine-readable traversal evidence for differential testing." — [ndsrecomp README](https://github.com/mstan/ndsrecomp)
- Layout: `recompiler/` = "ARM/Thumb/ARMv5 decode -> IR -> C codegen; function finder"; `runner/` = "dual-CPU scheduler, bus, CP15, I/O, 2D engines, SDL host"; `tools/` holds symbol tools, and there is a `ghidra/` directory. The ARM core "began as a port of the sibling `gbarecomp/src/armv4t` implementation. ARM9 adds the ARMv5TE instructions and CP15 system-control behavior." — [ndsrecomp README](https://github.com/mstan/ndsrecomp)
- Demonstrated targets: the DS firmware menu (the "baseline target"); SM64DS EU rev0; Mario Kart DS with "real Wiimmfi online matching and experimental same-machine local wireless"; Metroid Prime Hunters "early gameplay footage". "These are narrow bring-up results, not broad compatibility claims." — [ndsrecomp README](https://github.com/mstan/ndsrecomp)
- The runner uses a vendored melonDS 3D device. The renderer "prefers the OpenGL 4.3 compute backend" and falls back to threaded software. Whole-machine save states are not implemented. — [ndsrecomp README](https://github.com/mstan/ndsrecomp)
- License: original code is "PolyForm Noncommercial License 1.0.0". `runner/src/`, `recompiler/armv4t/`, `recompiler/support/` and `oracle/` are MIT. `nds_runner` is a "GPL-3.0-or-later combined work" because it vendors melonDS. — [ndsrecomp README](https://github.com/mstan/ndsrecomp)
- Search results also listed a Rhythm Heaven title repo ("static recompilation of Rhythm Heaven (US, YLZE) on the ndsrecomp framework") and a Metroid Prime Hunters public alpha ("expect crashes and rendering and audio issues"). Seen only in search snippets — [RecompHeaven](https://github.com/jr31415/RecompHeaven) (contents not fetched, UNVERIFIED in detail)
- The project's principles say the interpreter is "informative, never load-bearing", with one exception: "The firmware copies code into main RAM at boot ... a **small ARM interpreter runs the guest's own bytes in dirty RAM**". A dispatch miss is "a P0 silent bug: add discovered functions to config, regen, rebuild, re-run, until empty." — [ndsrecomp PRINCIPLES.md](https://raw.githubusercontent.com/mstan/ndsrecomp/HEAD/PRINCIPLES.md), [ndsrecomp CLAUDE.md](https://raw.githubusercontent.com/mstan/ndsrecomp/HEAD/CLAUDE.md)
- The project's footer advertises "R.A.I.D. — Retro AI Development ... a Discord community for AI-assisted retro reverse-engineering, decomp & recomp". The ndsrecomp repo also ships a CLAUDE.md, so it is AI-assisted development. — [ndsrecomp README](https://github.com/mstan/ndsrecomp)

**SM64DS recomp (the closest analogue to FFC: a DS game with a decomp)**
- v0.0.3 is a Windows public preview that "reaches controllable castle-grounds gameplay". Known issues: "rough performance in fallback-heavy areas, incomplete title coverage outside validated routes". — [supermario64dsrecomp README](https://github.com/mstan/supermario64dsrecomp)
- "Decomp-Assisted Recompilation": `tangosdev/sm64ds-decomp` "supplies exact European ARM9 function names, modes, sizes, and module boundaries. This project uses that metadata; it does not compile the decomp's matched C". The build "recompiles all decomp-defined ARM9 main-module functions; discovers and recompiles the initial ARM7 boot closure; optionally compiles captured, content-validated ARM7 and ARM9 runtime-RAM banks" (i.e. overlays and RAM code are captured from runtime). — [supermario64dsrecomp README](https://github.com/mstan/supermario64dsrecomp)

**gbarecomp (ARMv4T / GBA)**
- Pipeline: the analyzer "discovers code, follows control flow, tracks ARM/Thumb interworking, and resolves direct and indirect dispatch where it can". The emitter writes "portable, sharded C++". The runtime "retains a safe interpreter/self-healing tier". — [gbarecomp](https://github.com/mstan/gbarecomp)
- Self-healing: code not covered statically is "bridged through the interpreter the first time, loudly, then healed", which means "JIT-compiled to native in-process" and persisted to `recomp_cache/<rom-sha1>/`. Only "symbol metadata (function names, addresses, sizes)" from the zeldaret/tmc decomp enters the repo. — [MinishCapRecomp README](https://raw.githubusercontent.com/mstan/MinishCapRecomp/HEAD/README.md)
- Game repos on it include Minish Cap, Boktai, Mother 3 and Pokémon Emerald ("Flash1M, RTC, native gameplay, and persistent coverage healing"). They are "experimental previews". — [gbarecomp README](https://raw.githubusercontent.com/mstan/gbarecomp/HEAD/README.md)

### Inferences
- ndsrecomp proves that ARMv5TE+Thumb to C works mechanically at whole-game scale. It is designed to **run the
  ROM's machine code with full hardware LLE (BIOS, firmware boot, melonDS device models)**, not to produce standalone
  C for a hand-written PC platform layer. Using its output for FFC's ~3,000 leftovers inside an otherwise-decompiled C
  port would mean adopting its CPU context struct + memory bus model (guest RAM array, `ctx->rN`) for those functions,
  plus glue at every C<->recomp boundary.
- FFC is DSi-enhanced. ndsrecomp's README does not mention DSi mode (TWL RAM, extra hardware) at all, so treat DSi
  support as absent. The game also runs in plain DS mode, so this might not matter.
- License: PolyForm NC + GPL combined works. Its output could be used for a noncommercial fan port, but derived banks
  can never be redistributed (they contain ROM-derived code), the same constraint as all recomps.
- No other DS recompiler was found (searches for "nds recomp", "ds static recompilation", "arm9 recompiler").

### Gaps
- I could not read ndsrecomp's internal docs/ (GitHub API access was blocked in this session; `docs/ARCHITECTURE.md`
  returned 404). So its exact function finder, jump-table handling, Thumb BLX/interworking handling and per-function
  C signature are unconfirmed.
- No performance numbers were published (there is a `perf-results/` dir, contents unseen).
- Whether ndsrecomp can consume an external symbol list like FFC's `symbols.txt` is unconfirmed. The SM64DS project
  converts decomp metadata into configs with a Python script, so it is probably doable.

## N64Recomp / Zelda64Recomp, XenonRecomp, PS2Recomp, ReXGlue: architecture, boundaries, indirect jumps, overlays, SMC, hardware, replacement, performance

### Takeaway
They share one design: symbol-driven, per-function, very literal instruction-to-C translation into a CPU-context
struct over a guest-memory array. Indirect calls go through a runtime lookup table, jump tables are recovered into
`switch`, and function replacement works by linker override or weak symbols. Overlays are handled by runtime lookup
plus relocation macros. Hardware is reimplemented in a runtime (often HLE: N64ModernRuntime + RT64). None of them
handle self-modifying code; ndsrecomp and gbarecomp fall back to an interpreter.

### Cited Findings
**N64Recomp**
- Input: "a list of symbols and metadata ... splitting the input binary into functions that are each individually recompiled into a C function". Currently "the only way to provide the required metadata is by passing an elf file ... The easiest way to get such an elf is to set up a disassembly or decompilation". — [N64Recomp README](https://github.com/N64Recomp/N64Recomp)
- Translation is "very literal in order to keep complexity low", e.g. `addiu $r4,$r4,0x20` becomes `ctx->r4 = ADD32(ctx->r4, 0X20);`. `jal` becomes a call. `j`/`b` "that can be identified as tail-call optimizations are also recompiled into function calls". It tries "to turn a `jr` instruction into a switch-case statement if it can tell that it's being used with a jump table". Tested on gcc 2.7.2/IDO/clang; "Modern mips gcc may trip up the recompiler". — [N64Recomp README](https://github.com/N64Recomp/N64Recomp)
- Overlays: "Statically linked and relocatable overlays can both be handled". `jalr $25` becomes `LOOKUP_FUNC(ctx->r25)(rdram, ctx);`. "The runtime can then maintain a list of which program sections are loaded and at what address". For relocatable overlays it emits e.g. `ctx->r24 = S32(RELOC_HI16(1754, 0X630) << 16);` so the runtime relocates immediates. — [N64Recomp README](https://github.com/N64Recomp/N64Recomp)
- Function replacement: "single file output mode" plus linker precedence: "providing the recompiled patches to the linker before providing the original recompiler output will result in the patches taking priority over functions with the same names". The TOML can stub/skip functions and patch single instructions. — [N64Recomp README](https://github.com/N64Recomp/N64Recomp)
- Performance claim: "simulating behaviors significantly faster than interpreters or dynamic recompilation can" (no benchmarks). — [N64Recomp README](https://github.com/N64Recomp/N64Recomp)
- Zelda64Recomp: "not based on the source code provided by a decompilation ... static recompilation bypasses the need for decompiled source code ... However ... the project uses headers and some functions from the decompilation project in order to make modifications". It uses RT64 for rendering, supports high framerates and has a mod system (Thunderstore, mod template). — [Zelda64Recomp README](https://github.com/Zelda64Recomp/Zelda64Recomp)
- Patches are built from decomp-style C via a patches Makefile/`patches.toml` (patch C compiled to MIPS, then recompiled). — [N64Recomp README links](https://github.com/Mr-Wiseguy/Zelda64Recomp/blob/dev/patches.toml) (mechanism detail beyond the README sentence is UNVERIFIED)

**XenonRecomp (Xbox 360 PPC to C++)**
- Output is "not very human-readable". "The CPU state is passed as an argument to every PPC function ... The second argument is the base address pointer". Loads and stores byteswap and are "marked volatile to prevent Clang from doing unsafe code reordering". — [XenonRecomp README](https://github.com/hedge-dev/XenonRecomp)
- Indirect calls: a "perfect hash table" placed after the XEX image in guest memory (instruction address ×2 gives the recompiled function pointer). — [XenonRecomp README](https://github.com/hedge-dev/XenonRecomp)
- Jump tables: "there is no fully generic solution". XenonAnalyse detects `mtctr r0`/`bctr` patterns and emits a TOML of switch tables. Function boundaries come from `.pdata`, then bl-target scanning. The analyzer "struggles with functions containing jump tables, since they look like tail calls", and the workaround is manual `functions` boundaries. — [XenonRecomp README](https://github.com/hedge-dev/XenonRecomp)
- No exception support. setjmp/longjmp are redirected to native versions. With the optimizations on, Unleashed's executable shrank "around 20 MB" and "frame times are reduced by several milliseconds". — [XenonRecomp README](https://github.com/hedge-dev/XenonRecomp)
- Hooks: each recompiled function is weak and aliased to `__imp__sub_XXXXXXXX`, so a user can override it and still call the original. "mid-asm hooks can be inserted directly into the translated C++ code at specific instruction addresses". — [XenonRecomp README](https://github.com/hedge-dev/XenonRecomp)

**PS2Recomp**
- Experimental. ELF to C++ with the same literal style (`ctx->r4 = ADD32(...)`). TOML stubs/skips/instruction patches. Unresolved `J/JAL` targets fall back to `runtime->lookupFunction(0x...)`. The preferred workflow for stripped games is a Ghidra export script that produces the function TOML. — [PS2Recomp README](https://github.com/ran-j/PS2Recomp)

**ReXGlue**
- Xbox 360 static recompilation SDK "built on the foundations of Xenia", inspired by XenonRecomp. Windows D3D12/Linux Vulkan, Clang 18+. Early-stage with breaking API changes. A news piece credits it with Blue Dragon, Ninja Gaiden 2 and DBZ ports. — [rexglue-sdk GitHub](https://github.com/rexglue/rexglue-sdk), [Notebookcheck (ES)](https://www.notebookcheck.org/El-debut-del-SDK-de-ReXGlue-da-lugar-a-puertos-de-Xbox-360-a-PC-para-Blue-Dragon-y-mas.1231726.0.html) (title list secondary, UNVERIFIED)

**ndsrecomp-specific mechanisms relevant to DS overlays and hooks**
- Overlays and RAM code: "Live-byte validation remains the boundary for mutable or overlay code." Dispatch tables per bank are "registered only when the loaded cartridge has the configured SHA-1." — [ndsrecomp README](https://github.com/mstan/ndsrecomp)
- HLE/replacement design: "validated RAM banks can contain multiple overlay generations at the same CPU address. A PC-only table can therefore miss calls or select the wrong routine." Replacements therefore get "a generated wrapper" that both dispatch and direct calls target, "keyed by content/bank identity rather than bare addresses". The original LLE body "stays linked, forceable, and authoritative for differential verification". — [ndsrecomp HLE_ARCHITECTURE.md](https://raw.githubusercontent.com/mstan/ndsrecomp/HEAD/HLE_ARCHITECTURE.md), [PRINCIPLES.md](https://raw.githubusercontent.com/mstan/ndsrecomp/HEAD/PRINCIPLES.md)

### Inferences
- The hard parts (function boundaries, jump tables, tail calls) are **already solved for FFC by the decomp
  itself**: dsd's `symbols.txt`/`relocs.txt`/`delinks.txt` give exact function starts and sizes, ARM/Thumb mode,
  jump-table data and relocations. That is more metadata than N64Recomp gets from an ELF. A small FFC-specific
  ARM→C emitter (N64Recomp-style: literal per-instruction C over `ctx` + `rdram`) is a plausible few-week project,
  but only for the ~3,000 known-boundary functions. The ~500 missing-symbol functions need boundaries first. They
  are probably mostly reachable only through vtables or tail calls (STATUS notes ~500 ov002 vtable-only functions), so
  vtable data scans give their entry points.
- A hybrid port then needs an **ABI bridge**: decompiled C calls a recomp function by marshalling r0-r3/stack into
  `ctx`, and recomp code calls decompiled C through a thunk table keyed by address (`LOOKUP_FUNC`). All game data
  must live in one emulated 4 MB main-RAM array at the original addresses (pointers stay 32-bit guest addresses).
  This is the main architectural cost: the decompiled C must also be compiled to use guest pointers
  (e.g. 32-bit build or base-relative pointers). XenonRecomp/N64Recomp ports avoid this because *all* code is recomp.
- Linker-precedence or weak-symbol replacement (N64Recomp, XenonRecomp) maps directly onto "replace recomp function
  with decomp C as it gets matched", which allows incremental migration.

### Gaps
- No published per-instruction speed comparison between literal recomp C and native decompiled C for any project.
- The exact Zelda64Recomp mod/patch toolchain (recompiling patches through N64Recomp) was not read in detail.

## Generic lifters (Ghidra, RetDec, Remill/McSema, rev.ng, angr): compilable C for ARMv5?

### Takeaway
None of them reliably produces compilable, behavior-preserving C for whole ARMv5/Thumb game functions. Raw Ghidra
output compiles or re-executes only ~10-25% of the time in benchmarks (and 0% in one study), RetDec is in limited
maintenance, and Remill's AArch32 is still "underway". rev.ng is the only one that claims recompilable C and
lists ARM, but it targets Linux ELF userland. For FFC the decomp's own LLM matching pipeline is already far beyond
these tools.

### Cited Findings
- Ghidra raw output: about 13.6% (HumanEval) and 16.0% (MBPP) re-executability in Decompile-Bench, dropping at higher -O. One 2026 IoT study found 0/213 Ghidra outputs compiled. SCRIBE measured 49.4% recompilation after syntax fixes (Hex-Rays 84.1%). — [Decompile-Bench](https://arxiv.org/pdf/2505.12668); [IoT executability study](https://arxiv.org/pdf/2608.06960); [SCRIBE](https://arxiv.org/pdf/2605.02121) (numbers from search summaries of these papers, not re-read in full: UNVERIFIED in detail)
- Refinement LLMs raise Ghidra's build rate from 75% to 90%, but the "Matched" (behavior) rate falls from 74% to 62% ("recompile more and preserve less"). — [When LLM Decompilers Recompile More and Preserve Less](https://deeplearn.org/arxiv/819351/when-llm-decompilers-recompile-more-and-preserve-less) (search summary, UNVERIFIED)
- DecompileBench: "LLM-based methods surpass commercial tools in code understandability despite 52.2% lower functionality correctness". It uses "runtime-aware validation" over 23,400 functions. — [DecompileBench arXiv 2505.11340](https://arxiv.org/abs/2505.11340)
- RetDec supports 32-bit ARM (Thumb not stated). Output is C or a Python-like language. "The RetDec project is currently in a limited maintenance mode". — [RetDec mirror README](https://github.com/akostenev/retdec/blob/master/README.md), [ghacks](https://www.ghacks.net/2017/12/27/avast-releases-machine-code-decompiler-retdec/)
- Remill lifts AArch64, SPARC and x86 to LLVM bitcode. "AArch32 (32-bit ARMv8 / ARMv7) support is underway". It is a library for tools such as McSema. — [Trail of Bits Remill](https://new.trailofbits.com/tools/remill/)
- rev.ng: lifts via QEMU. It handles "Linux targeting x86-64, i386, ARM, AArch64, MIPS and SystemZ". "the C code we emit is designed to be valid and recompilable without significant warnings". — [rev.ng docs](https://docs.rev.ng/what-is-revng/), [rev.ng](https://rev.ng/)
- Echo (Sep 2026) is a matching decompiler that uses "compilation as trusted feedback". It reports 2.43x more exact matches than the strongest baseline. No ARM or game focus is stated. — [arXiv 2609.18706](https://arxiv.org/abs/2609.18706)

### Inferences
- For FFC, generic lifters add little. Ghidra-style C still needs per-function fixing, which is what the existing
  Sonnet/Opus pipeline already does with a byte-match oracle. A literal recomp emitter is *correct by construction*,
  unlike lifters, which is why every console recomp project writes its own emitter instead of using Ghidra/RetDec.
- QEMU-based rev.ng is the only general lifter whose ARM semantics are likely complete (QEMU's ARM front end
  handles ARMv5TE/Thumb). It assumes Linux ELF userland, though, not bare-metal DS code with CP15/MMIO. UNVERIFIED for
  this use.

### Gaps
- No benchmark measures any of these tools on ARMv5TE/Thumb or on mwcc-compiled code.
- angr's decompiler compilability was not researched (no source found within budget).

## Overlays sharing address ranges: how would a recompiler handle them?

### Takeaway
There are two established patterns: (1) N64Recomp: compile every overlay's functions as distinct C symbols (named per
section), and resolve indirect calls at runtime through a "which section is loaded at this address" table, with
relocation macros if the load address varies; (2) ndsrecomp: content/bank identity, where the bank's bytes are
validated live before its recompiled code is used, and wrappers are keyed by bank generation, not bare PC. DS
overlays load at fixed addresses, so no relocation is needed. The only problem is aliasing, which per-overlay
symbol names plus a loaded-overlay table solve.

### Cited Findings
- N64Recomp's runtime "can then maintain a list of which program sections are loaded and at what address they are at in order to determine which function to run whenever a lookup is triggered". — [N64Recomp README](https://github.com/N64Recomp/N64Recomp)
- ndsrecomp: "Live-byte validation remains the boundary for mutable or overlay code". "validated RAM banks can contain multiple overlay generations at the same CPU address. A PC-only table can therefore miss calls or select the wrong routine." — [ndsrecomp README](https://github.com/mstan/ndsrecomp), [HLE_ARCHITECTURE.md](https://raw.githubusercontent.com/mstan/ndsrecomp/HEAD/HLE_ARCHITECTURE.md)
- SM64DS recomp handles overlay code via "captured, content-validated ARM7 and ARM9 runtime-RAM banks" (dumped at runtime, not from the ROM's overlay table). The README disclaims compatibility "for every ... overlay". — [supermario64dsrecomp README](https://github.com/mstan/supermario64dsrecomp)

### Inferences
- FFC has an advantage here: dsd's per-overlay `relocs.txt` already records which overlay each cross-module call
  targets. Direct `bl` into an overlay can therefore be emitted as a direct C call to `ovNNN_func_XXXXXXXX` without a
  runtime check. Only true indirect calls (vtables, function pointers) need an `(address, loaded-overlay-set) ->
  function` lookup. The game's overlay load/unload (FS_LoadOverlay) is a natural hook point to update that table.
- A port that is *mostly decomp C* could also drop the shared-address problem entirely: native C overlays can all
  stay linked at once, as long as code never compares/serializes code addresses. Recomp leftovers still need the
  guest-address lookup for any function pointer stored in game data.
- DS Protect / anti-piracy code in ov015 (FFC STATUS) is self-checking and integrity-verifying code. A PC port
  should stub it rather than recompile it.

### Gaps
- Whether FFC uses any runtime-copied or self-modifying code beyond overlays (e.g. ITCM/DTCM-copied routines) is
  not determined here. The config does have `itcm`/`dtcm` dirs, so ITCM code exists and is copied at boot. It would
  need its own bank. This is a fixed copy, which is easy.

## Differential testing: verifying non-matching C against original machine code

### Takeaway
The most mature in-domain practice is ndsrecomp's: a separately built melonDS "oracle" process that runs the same
code, with tools that sync on hardware-event counts and diff RAM/VRAM/framebuffers to bisect the first divergence.
At function granularity, nothing turnkey exists for decomp projects. The literature uses side-effect comparison
(DecompileBench) or Unicorn-style harnesses (AFL-Unicorn) that could be adapted. For FFC, a per-function Unicorn
(or ndsrecomp-interpreter) harness that runs the original bytes and the recompiled/non-matching C on the same random
register and memory states is cheap and well-precedented in pieces, but I found no decomp project doing exactly this.

### Cited Findings
- ndsrecomp oracle: melonDS pinned to `1.0rc`, a separate process exposing a TCP command set (`regs`, `read_mem`, `framebuffer`...). Probes are `diff_mem.py`, `diff_frame.py` and `find_first_diverge.py` ("bisect over event counts to find the first VBlank where any tracked region diverges"). "All sync on hardware events, never raw frame numbers". DeSmuME is a secondary cross-check. — [ndsrecomp oracle/README.md](https://raw.githubusercontent.com/mstan/ndsrecomp/HEAD/oracle/README.md), [ndsrecomp README](https://github.com/mstan/ndsrecomp)
- ndsrecomp keeps an interpreter for "decode-trace diff harnesses, per-IrOp semantic reference, instruction unit tests, offline smoke oracles". It also keeps always-on rings (`dispatch_ring9`, bus accesses) plus `dispatch_misses.log`. — [PRINCIPLES.md](https://raw.githubusercontent.com/mstan/ndsrecomp/HEAD/PRINCIPLES.md), [DEBUG.md](https://raw.githubusercontent.com/mstan/ndsrecomp/HEAD/DEBUG.md)
- HLE replacements in ndsrecomp keep the original body "linked, forceable, and authoritative for differential verification and fallback". This is exactly the pattern for swapping recomp to decomp C function by function. — [PRINCIPLES.md](https://raw.githubusercontent.com/mstan/ndsrecomp/HEAD/PRINCIPLES.md)
- DecompileBench "substitutes a decompiled function into the original program and compares side effects and branch coverage". Echo notes behavioral tests "rely on benchmark-provided harness functions that often don't exist for real binaries". — [DecompileBench](https://arxiv.org/pdf/2505.11340), [Echo](https://arxiv.org/pdf/2609.18706) (from search summary)
- AFL-Unicorn: the harness "loads the target code, sets up the initial state, and loads in data mutated by AFL", a pattern for fuzzing a single function's machine code in isolation. — [AFL-Unicorn (Hackernoon)](https://medium.com/hackernoon/afl-unicorn-fuzzing-arbitrary-binary-code-563ca28936bf)
- Fine-grained equivalence checking for neural decompilers (codealign) aligns equivalent instructions between functions. — [arXiv 2501.04811](https://arxiv.org/abs/2501.04811)

### Inferences
- Practical FFC harness: Unicorn supports ARM (ARM946 cpu model, Thumb). Map a 4 MB RAM snapshot taken from a melonDS
  save state at a call site, set r0-r3/sp, run the original function bytes until return to a sentinel LR, and
  record register and memory writes. Compile the non-matching C for ARM with mwcc (or for host against a guest-RAM
  shim) and compare. Callee functions can be trapped and stubbed, recording the call sequence. This verifies
  "non-matching but equivalent" C without byte matching. It covers pure, data-transform-heavy leftovers best and
  hardware-touching ones worst.
- Whole-game alternative: melonDS-vs-port divergence bisection (the ndsrecomp oracle approach) once a port boots.

### Gaps
- I found no public decomp project (pret, zeldaret, DS decomps) that runs per-function emulator-based equivalence
  tests for non-matching code. The absence is not confirmed exhaustively.
- Unicorn's fidelity for ARMv5TE-specific behavior (e.g. LDM with base writeback edge cases, QADD/SMLA* flags, BLX
  interworking on ARMv5) was not verified.

## Overall feasibility for FFC (cost assessment, inference only)

### Takeaway
Static recompilation can cover all leftover functions *mechanically* and cheaply in compute, but it is not free in
engineering. Either adopt ndsrecomp wholesale (an LLE recompiling emulator: easiest to get running, no real "PC port",
noncommercial license, pre-alpha), or write a thin FFC-specific emitter and run it hybrid with the decomp. Hybrid needs a
guest-RAM memory model shared by both halves, which is the dominant cost.

### Cited Findings
- Precedent for "symbol metadata from a decomp, code from recomp": SM64DS recomp ([README](https://github.com/mstan/supermario64dsrecomp)), MinishCapRecomp ([README](https://raw.githubusercontent.com/mstan/MinishCapRecomp/HEAD/README.md)), N64Recomp ("easiest way to get such an elf is to set up a disassembly or decompilation", [README](https://github.com/N64Recomp/N64Recomp)).
- Precedent for "recomp base + decomp C for modifications": Zelda64Recomp "uses headers and some functions from the decompilation project in order to make modifications" ([README](https://github.com/Zelda64Recomp/Zelda64Recomp)).

### Inferences
- Option A (cheapest to *run* FFC on PC): ndsrecomp with FFC's symbols.txt as metadata, the way SM64DS does it.
  Leftover decomp count is then irrelevant. Cost: bring-up effort on a pre-alpha framework, DSi/DS-mode questions,
  license limits, and no native renderer (melonDS-model LLE).
- Option B (hybrid port): native decomp C for ~16,000 functions + recomp C for ~3,000 leftovers. Recomp functions
  become weak symbols that matched decomp C overrides (XenonRecomp/N64Recomp style), and leftovers shrink over time.
  Requires that all C, including decomp C, address game memory through 32-bit guest addresses. The cleanest version
  is a 32-bit host build with game RAM mapped at the original addresses (e.g. mmap 0x02000000 on Linux 32-bit, or
  base-pointer rewriting). UNVERIFIED feasibility.
- Option C (no recomp): finish the leftovers as non-matching C verified by a Unicorn differential harness. That is
  the per-function cost the decomp pipeline already pays (~$0.26/Sonnet match per STATUS). Non-matching is cheaper
  than matching, so the remaining ~3,000 might cost low hundreds of dollars. This is an estimate based on project
  numbers, not a source.
