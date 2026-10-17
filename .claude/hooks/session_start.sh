#!/usr/bin/env bash
# SessionStart: kick off tools/bootstrap.sh in the background once per container (log: work/bootstrap.log).
cd "$CLAUDE_PROJECT_DIR" || exit 0
[ "${CLAUDE_CODE_REMOTE:-}" = "true" ] || exit 0
mkdir -p work
if [ -f work/.bootstrap_started ]; then echo "bootstrap already started; see work/bootstrap.log"; exit 0; fi
touch work/.bootstrap_started
nohup setsid tools/bootstrap.sh > work/bootstrap.log 2>&1 < /dev/null &
echo "bootstrap started in background (work/bootstrap.log; ends with '== done'). Needs totomam/ffc-assets attached."
