#!/usr/bin/env bash
# One-command session bootstrap (needs totomam/ffc-assets attached; clones it if missing).
#   tools/bootstrap.sh            # everything; ninja runs in the foreground at the end
#   BOOT_SKIP="refs apt emsdk ninja" tools/bootstrap.sh   # skip steps
# Steps: assets, setup (tools/bin, restored from cache if present), fetch, cw, extract, configure,
# cache (restore build/usa + build/port/host), refs, apt, emsdk, ninja. Log: work/bootstrap.log.
# Cache: ffc-assets branch "cache" (tools/cache.sh save, restore, fixtimes).
set -uo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"
mkdir -p work
skip() { [[ " ${BOOT_SKIP:-} " == *" $1 "* ]]; }
step() { echo "== $1 ($(date +%T))"; }
REF=/home/user/ref

step assets
[ -d /home/user/ffc-assets/.git ] || git clone -q --depth 1 https://github.com/totomam/ffc-assets /home/user/ffc-assets
ln -sfn /home/user/ffc-assets .assets

step cache-restore
tools/cache.sh restore || echo "no cache (cold build)"

if ! skip setup; then
  step setup
  if [ -x tools/bin/dsd ] && [ -x tools/bin/wibo ] && [ -x tools/bin/7zz ]; then echo "tools/bin cached"
  else tools/setup.sh; fi
  pip install -q capstone pyelftools libclang >/dev/null 2>&1 || true
fi
step fetch;  tools/fetch_assets.sh
step cw;     [ -f tools/mwccarm/1.2p2/mwccarm.exe ] || tools/setup.sh .assets/cw
step extract
[ -f extract/usa/arm9/arm9.bin ] || tools/bin/dsd rom extract --rom rom/baserom_usa.nds --output-path extract/usa
step configure; python3 tools/configure.py
tools/cache.sh fixtimes || true

if ! skip refs; then
  step refs; mkdir -p $REF /home/user/arcnid
  cl() { [ -d "$2/.git" ] || git clone -q --depth 1 "https://github.com/$1" "$2"; }
  cl cybervisi0n/libntr $REF/libntr &
  cl cybervisi0n/libntrsystem $REF/libntrsystem &
  cl cybervisi0n/pokeplatinum $REF/pokeplatinum &
  cl pret/pokeplatinum $REF/pret_pokeplatinum &
  cl pret/pokeheartgold $REF/pokeheartgold &
  cl pret/pokediamond $REF/pokediamond &
  [ -d /home/user/arcnid/ffc-decomp/.git ] || GIT_LFS_SKIP_SMUDGE=1 git clone -q --depth 1 https://github.com/arcnid/ffc-decomp /home/user/arcnid/ffc-decomp &
  wait
  git -C $REF/libntr apply --check "$ROOT/tools/patches/libntr-twl.patch" 2>/dev/null \
    && git -C $REF/libntr apply "$ROOT/tools/patches/libntr-twl.patch" || echo "libntr patch already applied?"
fi
if ! skip apt; then
  step apt
  dpkg -s gcc-mingw-w64-i686 binutils-arm-none-eabi gcc-multilib libc6-dev-i386 >/dev/null 2>&1 || {
    apt-get update -qq && DEBIAN_FRONTEND=noninteractive apt-get install -y -qq \
      libc6-dev-i386 gcc-multilib gcc-mingw-w64-i686 binutils-arm-none-eabi >/dev/null; }
fi
if ! skip emsdk; then
  step emsdk
  if [ ! -x /home/user/emsdk/upstream/emscripten/emcc ]; then
    [ -d /home/user/emsdk ] || git clone -q --depth 1 https://github.com/emscripten-core/emsdk /home/user/emsdk
    (cd /home/user/emsdk && ./emsdk install latest >/dev/null && ./emsdk activate latest >/dev/null)
  fi
fi
if ! skip ninja; then
  step ninja; ninja > work/ninja_boot.log 2>&1; tail -3 work/ninja_boot.log
  echo "checksum OK: $(grep -c 'checksum OK\|: OK' work/ninja_boot.log)  failed: $(grep -c 'checksum failed' work/ninja_boot.log)"
fi
step done
