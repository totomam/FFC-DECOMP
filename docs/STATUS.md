# Status

## Phase
0 — setup. **Blocked on ROM upload.**

## Toolchain (built in session scratch, not committed)
- `dsd` (ds-decomp) built from source (GitHub releases are blocked; git clone works).
- `wibo` built from source (needs `-DLIBCLANG_LIBRARY=/usr/lib/llvm-18/lib/libclang.so.1 -DCMAKE_EXE_LINKER_FLAGS=-fuse-ld=lld -DWIBO_ENABLE_WINE_DLLS=NO`, preset `release64`).
- mwccarm builds 1024/1027/1028/1036 run under wibo with `LM_LICENSE_FILE=<license.dat>`; ~50 ms/compile.
  Hashes match V54 records. Build 1018 not supplied (V54: all builds tie).

## Measured orchestration limits
- Workflow concurrency: **2 agents per workflow** (4-CPU container).
- Concurrent workflows **stack** (3 workflows × 2 = 6 agents ran simultaneously).
  → shard the queue across several concurrent workflows.
- Haiku agent baseline context: **~47k tokens** before any work → ~50k usable under the 100k cap.
- Custom agent types (`.claude/agents/fn-matcher.md`) load only at session start; untested.

## Prior work (V54)
- 871 functions mapped (ARM9 10%, ov02 3%, ov11 8%); 206 byte-exact, 77 behavioural-only.
- No linked build. Tooling overbuilt; only C sources + function catalog worth porting.
- Target: user-modified US DSi-enhanced ROM, `VDEE`, 256 MiB,
  SHA-256 `39f7ed444290bcb6ae2b13a7c524cb2d7e63cbba8d3c57fbe23c176165252b8c`.

## Next
1. ROM upload → verify hash → `dsd` init → matching asm rebuild.
2. `tools/try`, `tools/integrate`, `queue.csv` triage.
3. Port V54 sources; start matching waves.
