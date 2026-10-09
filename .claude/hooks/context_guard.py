#!/usr/bin/env python3
"""Warn the orchestrator when its context nears the handoff threshold.

Reads the latest assistant usage record from the transcript (input + cache
tokens = current context size) and injects a reminder once it passes
HANDOFF_AT. The model itself has no reliable view of its context size.
"""
import json, os, sys

HANDOFF_AT = int(os.environ.get("FFC_HANDOFF_AT", "180000"))

def context_tokens(path):
    try:
        with open(path, "rb") as f:
            f.seek(0, 2)
            f.seek(max(0, f.tell() - 400_000))
            lines = f.read().decode("utf-8", "ignore").splitlines()
    except OSError:
        return None
    for line in reversed(lines):
        try:
            rec = json.loads(line)
        except ValueError:
            continue
        if rec.get("isSidechain"):
            continue
        u = (rec.get("message") or {}).get("usage")
        if u:
            return (u.get("input_tokens", 0) + u.get("cache_read_input_tokens", 0)
                    + u.get("cache_creation_input_tokens", 0))
    return None

data = json.load(sys.stdin)
n = context_tokens(data.get("transcript_path", ""))
if n is not None and n >= HANDOFF_AT:
    msg = (f"CONTEXT GUARD: main context is ~{n // 1000}k tokens (limit {HANDOFF_AT // 1000}k). "
           "Stop starting new work. Update docs/STATUS.md, commit, push, and give the user the handoff now.")
    print(json.dumps({"hookSpecificOutput": {
        "hookEventName": data.get("hook_event_name", "PostToolUse"),
        "additionalContext": msg}}))
