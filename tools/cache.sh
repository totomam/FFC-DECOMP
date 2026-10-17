#!/usr/bin/env bash
# Build cache in totomam/ffc-assets, branch "cache" (ffc-cache.tar.xz.0*, <100 MB parts).
#   tools/cache.sh save      # pack tools/bin build/usa build/port/host + ninja logs, commit + push branch cache
#   tools/cache.sh restore   # clone branch cache and unpack, if build/ is absent
#   tools/cache.sh fixtimes  # after configure: age sources so ninja trusts the cached outputs;
#                            # files changed since the cached commit stay new (rebuilt)
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"; cd "$ROOT"
C=/home/user/ffc-cache; URL=https://github.com/totomam/ffc-assets
case "${1:-}" in
save)
  [ -d $C/.git ] || git clone -q --depth 1 -b cache $URL $C 2>/dev/null || \
    { mkdir -p $C && git -C $C init -q && git -C $C checkout -q -b cache; }
  rm -f $C/ffc-cache.tar.xz.0*
  git rev-parse HEAD > build/.cache_commit
  tar -cf - tools/bin build/usa build/port/host build/.cache_commit .ninja_log .ninja_deps 2>/dev/null \
    | xz -T0 -2 | split -b 95M -d -a 2 - $C/ffc-cache.tar.xz.
  git -C $C add -A
  git -C $C -c user.name=ffc -c user.email=ffc@localhost commit -qm "build cache @ $(cut -c1-10 build/.cache_commit)"
  git -C $C push -q $URL HEAD:cache
  ls -la $C ;;
restore)
  [ -d build/usa ] && { echo "build/ exists, not restoring"; exit 0; }
  [ -d $C/.git ] || git clone -q --depth 1 -b cache $URL $C || exit 1
  cat $C/ffc-cache.tar.xz.0* | xz -dc -T0 | tar -xf -
  echo "cache restored @ $(cat build/.cache_commit)" ;;
fixtimes)
  [ -f build/.cache_commit ] || exit 0
  old=$(cat build/.cache_commit)
  find . \( -path ./build -o -path ./.git -o -path ./.assets -o -path ./.toolsrc -o -path ./tools/bin \) -prune \
    -o -type f -newer build/.cache_commit -print0 | xargs -0 -r touch -h -d '2020-01-01'
  { git diff --name-only "$old" HEAD 2>/dev/null; git diff --name-only; } | sort -u | \
    while read -r f; do [ -f "$f" ] && touch "$f"; done
  echo "times fixed vs $old" ;;
*) echo "usage: $0 save|restore|fixtimes"; exit 2 ;;
esac
