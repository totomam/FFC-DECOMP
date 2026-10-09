# Matching workflow

## Current toolchain evidence

The Metrowerks/CodeWarrior family and the current `-O4,p` ARM946E profile are empirically supported. Official DSi releases containing `mwccarm` builds 1018, 1024, 1027, 1028, and 1036 tie on the expanded 283-function corpus: 206 functions covering 3,354 target bytes are fully exact, with 4,023/5,396 aggregate matching bytes in every build.

The exact compiler build is therefore still unresolved. Build 1018 remains the leading provenance candidate, but it is not promoted as uniquely correct until a discriminating function or linked output separates it from the later builds. An earlier assumption that DSi 1.1 Patch 1 contained build 1018 was incorrect: the base DSi 1.1 media contains build 1018, while Patch 1 contains build 1024.

The repository never contains or downloads the proprietary compiler. Supply a lawful local installation explicitly:

```sh
make match MWCCARM=/path/to/mwccarm.exe MWCC_RUNNER=wine
```

On a Windows environment that can execute the compiler directly, omit `MWCC_RUNNER`. The compiler's license environment must already be configured.

`make references` extracts only the catalogued function byte ranges from the hash-verified ROM into ignored build output. `make match` compiles each source/state pair once, locates each function symbol inside the 32-bit little-endian ELF object, and compares its bytes with the target. A function is not counted as matched unless every byte is identical.

Instruction-byte equality alone is not accepted for catalog rows marked `has_relocations=true`. Those functions contain a PC-relative dependency outside the catalogued instruction span. The matcher now decodes each candidate literal load and compares the emitted pool word with the target value before granting an exact match.

Direct calls are also linked for comparison without pretending that an unlinked ELF placeholder is final code. The matcher consumes the target's analyzed call edges, resolves `R_ARM_THM_CALL` and `R_ARM_CALL`, checks address-bearing external names when present, and encodes the call at the function's target address. `R_ARM_THM_CALL` is encoded as BL or Thumb-to-ARM BLX according to the analyzed callee state. Address-named `R_ARM_ABS32` data dependencies are resolved only from their explicit symbol address and remain subject to direct target literal-pool verification. Every other unresolved or unsupported relocation is forced to differ rather than being accepted accidentally.

The direct-call corpus also proves that one global interworking flag is insufficient. Existing source units, `src/arm9/interworking/nonleaf.c`, `src/arm9/variadic/nonleaf.c`, and `src/overlay_02/nonleaf.c` retain `-interworking`; `src/arm9/nonleaf.c` uses a documented `-nointerworking` override because its direct Thumb calls require it. This is evidence about source-unit policy, not yet proof of the original translation-unit boundaries. Behaviorally reconstructed ownership-release and intrusive-list functions in the latter file remain nonmatching where their target prologue and stack allocation have not yet been reproduced.

An externally compiled raw binary or ELF object can be checked without invoking the compiler:

```sh
python3 tools/match.py --function ffc_mar_entry --candidate candidate.o
```

For the rapid inner loop, `make fastmatch` requires and hash-verifies build 1018. Compiled objects are reused only when a SHA-256 fingerprint covering the compiler, flags, source, and all project headers matches:

```sh
make fastmatch MWCCARM=/path/to/build1018/mwccarm.exe MWCC_RUNNER=wine
```

`make families` records exact, normalized, opcode, CFG, call-role, and conservative fuzzy relationships. `make templates` mines only compiler-confirmed exact functions. These are prioritization and generation inputs, not ownership proof; literal-loaded `ldr`/`bx` shapes remain quarantined and are excluded from template actions.

The bounded exact-work loop is:

```sh
make quick FUNCTION=ffc_symbol MWCCARM=/path/to/build1018/mwccarm.exe MWCC_RUNNER=wine
make mismatches
make near MWCCARM=/path/to/build1018/mwccarm.exe MWCC_RUNNER=wine
```

The near sweep applies mismatch-specific, equivalence-preserving source-form grammars under global and per-function budgets. It stages candidates and caches compiler results; source mutation requires an explicit variant id plus a separate acknowledgement flag. Unsupported dependencies and low-confidence mismatches stop rather than being forced through the search.

If several lawful local compiler versions are available, sweep all of them in one pass:

```sh
make sweep MWCC_ROOT=/path/to/mwccarm MWCC_RUNNER=wine
```

The sweep records each compiler's SHA-256 and version banner, ranks versions first by exact functions and then by total matching bytes, and preserves full per-compiler match results beneath `build/match/by_compiler/`.

## Partial-link probe

The early linker experiment uses a lawful local Metrowerks Linker for Embedded ARM 2.0 build 96, pinned to SHA-256 `3bd2e1a4dc7f68291eee08fef8bd8f46998b1b0940cba5d720ac88feac5e8de2`. It links the build-1018 object containing `ffc_arm9_02035c18` with `config/partial_link_probe.lcf`, places the symbol at its target address `0x02035C18`, and verifies the linked entry bytes against the hash-gated ROM reference:

```sh
make linkprobe MWLDARM=/path/to/mwldarm.exe MWCC_RUNNER=wine
```

The report is written to `build/link/partial_link_probe.json`. In addition to the original two-byte entry, the probe force-retains the adjacent packed-field functions at `0x02035C3C`, `0x02035C4C`, `0x02035C60`, and `0x02035C74`. Their instructions, alignment, and three literal-pool words reproduce the complete 76-byte target span exactly. This establishes one small multi-symbol placement result; it does not establish original object boundaries, full section ordering, overlay layout, autoload layout, or a complete linked ARM9 image.

## Throughput automation

`make throughput` regenerates the policy-aware queue and hold report, multi-level families, exact-evidence templates, ABI and memory-use hypotheses, translation-unit groups, behavioral trace fixtures, boundary consensus, ownership-signature audit, persistent work ledger, dashboard, and deterministic parallel-lane manifest. None of these tools promotes a behavioral, exact, ownership, prototype, boundary, or semantic claim automatically.

`make checkpoint` adds the complete ROM/test gate, pinned linker probe, five-build compiler sweep, cross-checked metrics, and generated Markdown tables. Checkpoint metrics fail if the catalog, progress report, compiler results, sweep totals, direct-call totals, or link evidence disagree.

Behaviorally complete C remains distinct from byte-matched C. Address-based neutral function names remain in place until call-site evidence supports semantic names.
