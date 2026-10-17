#!/bin/bash
f=$1; d=/home/user/FFC-DECOMP/work/permuter/runs/$f
s=$(date +%s)
timeout -s INT 300 python3 /home/user/permuter/upstream/permuter.py --stop-on-zero -j1 $d > $d/log.txt 2>&1
echo "$f $(( $(date +%s)-s ))" >> /home/user/FFC-DECOMP/work/permuter/times.txt
