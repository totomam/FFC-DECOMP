#!/usr/bin/env bash
# Fetches ROM + CodeWarrior from the private totomam/ffc-assets repo, verifies, unpacks.
# Requires the session to have ffc-assets attached (add_repo totomam/ffc-assets).
# Then run: tools/setup.sh .assets/cw   (builds dsd/wibo/7zz, stages mwccarm)
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
A="$ROOT/.assets"
[ -d "$A/.git" ] || git clone -q --depth 1 https://github.com/totomam/ffc-assets "$A"
(cd "$A" && sha1sum -c --quiet SHA1SUMS)
if [ ! -f "$ROOT/rom/baserom_usa.nds" ]; then
  [ -x "$ROOT/tools/bin/7zz" ] || { echo "run tools/setup.sh first (needs 7zz)"; exit 1; }
  t=$(mktemp -d); cat "$A"/rom/ffc.7z.0* > "$t/ffc.7z"
  "$ROOT/tools/bin/7zz" x -y -o"$t/x" "$t/ffc.7z" >/dev/null
  mkdir -p "$ROOT/rom"; mv "$t"/x/*.nds "$ROOT/rom/baserom_usa.nds"; rm -rf "$t"
fi
echo "f8263e010974259a955124b5395ec00f25079c35  $ROOT/rom/baserom_usa.nds" | sha1sum -c --quiet
echo "assets ok"
