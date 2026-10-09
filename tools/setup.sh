#!/usr/bin/env bash
# Builds patched dsd, wibo and 7zz into tools/bin, stages CodeWarrior from uploads.
# Usage: tools/setup.sh [CW_ZIP_DIR]
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
SRC="${TOOLSRC:-$ROOT/.toolsrc}"
CW="${1:+$(cd "$1" && pwd)}"
mkdir -p "$SRC" "$ROOT/tools/bin"
cd "$SRC"

# ds-rom 0.8.0 (from crates.io) + TWL patches; ds-decomp at pinned rev + patches
[ -d ds-decomp ] || git clone -q https://github.com/AetiasHax/ds-decomp
git -C ds-decomp checkout -q "$(cat "$ROOT/tools/patches/ds-decomp.rev")"
if [ ! -d ds-rom ]; then
  # fetch with the unpatched Cargo.toml (the patch points ds-rom at ../ds-rom)
  git -C ds-decomp checkout -q -- .
  (cd ds-decomp && cargo fetch -q)
  cp -r ~/.cargo/registry/src/*/ds-rom-0.8.0 ds-rom
  (cd ds-rom && patch -p0 < "$ROOT/tools/patches/ds-rom-0.8.0.patch")
fi
git -C ds-decomp apply "$ROOT/tools/patches/ds-decomp.patch" 2>/dev/null || echo "ds-decomp patch already applied?"
(cd ds-decomp && cargo build --release -q)
cp ds-decomp/target/release/dsd "$ROOT/tools/bin/"

# wibo (Win32 loader for mwccarm/mwldarm)
[ -d wibo ] || git clone -q https://github.com/decompals/wibo
git -C wibo checkout -q "$(cat "$ROOT/tools/patches/wibo.rev")"
pip install -q libclang >/dev/null 2>&1 || true
(cd wibo && cmake --preset release64 -DWIBO_ENABLE_WINE_DLLS=NO \
   -DLIBCLANG_LIBRARY="$(ls /usr/lib/llvm-*/lib/libclang.so.1 | head -1)" \
   -DCMAKE_EXE_LINKER_FLAGS=-fuse-ld=lld >/dev/null && cmake --build --preset release64 >/dev/null)
cp wibo/build/release64/wibo "$ROOT/tools/bin/"

# 7zz (for split ROM archive)
if [ ! -x "$ROOT/tools/bin/7zz" ]; then
  [ -d 7zip ] || git clone -q --depth 1 https://github.com/ip7z/7zip
  (cd 7zip/CPP/7zip/Bundles/Alone2 && make -s -j4 -f ../../cmpl_gcc.mak >/dev/null)
  cp 7zip/CPP/7zip/Bundles/Alone2/b/g/7zz "$ROOT/tools/bin/"
fi

# CodeWarrior: unzip each cw_dsi-*.zip into tools/mwccarm/<ver>/
if [ -n "$CW" ]; then
  for z in "$CW"/*cw_dsi-*.zip; do
    v=$(basename "$z" | sed -E 's/.*cw_dsi-([0-9])_([0-9])-patch([0-9]).*/\1.\2p\3/')
    t=$(mktemp -d); unzip -qo "$z" -d "$t"
    mkdir -p "$ROOT/tools/mwccarm/$v"
    find "$t" -path "*Command_Line_Tools/*.exe" -exec cp {} "$ROOT/tools/mwccarm/$v/" \;
    find "$t" -maxdepth 2 -name license.dat -exec cp {} "$ROOT/tools/mwccarm/" \;
    rm -rf "$t"
  done
  for v in "$ROOT"/tools/mwccarm/*/; do [ -f "$v/mwldarm.exe" ] || cp "$ROOT/tools/mwccarm/1.2p2/mwldarm.exe" "$v" 2>/dev/null || true; done
fi
echo "setup done"
