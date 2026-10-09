# Status / Handoff

## Phase
0 — setup. `dsd init` + `delink` succeed. DSProt_BSS link error fixed in dsd; link not yet re-run.

## Next steps (in order)
1. ~~Fix link error `Multiply-defined: "DSProt_BSS"`~~ — done: overlay copies are now
   `DSProt_BSS_ovNNN` (ds-decomp patch + `config/usa` symbols renamed). Untested against the
   ROM yet (uploads were missing in that session); re-run `delink` + `lcf` before linking.
2. Link: `LM_LICENSE_FILE=$PWD/tools/mwccarm/license.dat tools/bin/wibo tools/mwccarm/1.2p2/mwldarm.exe -proc arm946e -dead -nostdlib -interworking -map closure,unused -m Entry @build/usa/objects.txt build/usa/arm9.lcf -o build/usa/arm9.o`
3. `dsd rom config --elf build/usa/arm9.o --config ...` then `dsd check modules --config-path config/usa/arm9/config.yaml --fail`.
   Expect further TWL issues; fix in the dsd patches.
4. Write `configure.py` + ninja build (adapt `AetiasHax/ph` tools/configure.py, CC0).
5. `tools/try`, `tools/integrate`, `queue.csv` triage → port V54 C → matching waves (docs/WORKFLOW.md).

## Fresh-session bootstrap
New sessions get a new container. Re-upload the **CodeWarrior zips** and the **split ROM 7z**, then:
```sh
tools/setup.sh /root/.claude/uploads/<id>        # builds patched dsd, wibo, 7zz; stages mwccarm
cat <uploads>/*NDSi_Enhanced.7z.t0.0{01..19} > /tmp/ffc.7z   # parts sorted by number, not upload name
tools/bin/7zz x -o/tmp/x /tmp/ffc.7z && mkdir -p rom && mv /tmp/x/*.nds rom/baserom_usa.nds
tools/bin/dsd rom extract --rom rom/baserom_usa.nds --output-path extract/usa
tools/bin/dsd delink --config-path config/usa/arm9/config.yaml && tools/bin/dsd lcf -c config/usa/arm9/config.yaml
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
