#!/usr/bin/env python3
"""wrap.py compile <func> <cflags.txt> in.c out.o | wrap.py target <func> out.o
Produces a relocation-free ELF with just the (relocation-resolved) function bytes."""
import sys, os, subprocess, tempfile, pathlib
sys.path.insert(0, '/home/user/FFC-DECOMP/tools')
import ffclib
mode, func = sys.argv[1], sys.argv[2]
sym = ffclib.symbols()[func]
def emit(data, out):
    d = pathlib.Path(tempfile.mkdtemp(dir='/tmp/claude-0/pw'))
    (d/'f.bin').write_bytes(data)
    m = sym.mode or 'thumb'
    (d/'f.s').write_text(f".{'thumb' if m=='thumb' else 'arm'}\n.text\n.global {func}\n{'.thumb_func' if m=='thumb' else ''}\n.type {func},%function\n{func}:\n{'$t' if m=='thumb' else '$a'}:\n.incbin \"{d}/f.bin\"\n")
    subprocess.check_call(['arm-none-eabi-as', '-mcpu=arm946e-s', '-mthumb-interwork', str(d/'f.s'), '-o', out])
os.makedirs('/tmp/claude-0/pw', exist_ok=True)
if mode == 'target':
    emit(ffclib.target_bytes(sym), sys.argv[3]); sys.exit(0)
flags, src, out = sys.argv[3], sys.argv[4], sys.argv[5]
d = pathlib.Path(tempfile.mkdtemp(dir='/tmp/claude-0/pw'))
s = d/'in.c'
s.write_text(open(flags).read().strip() + "\n" + open(src).read())
obj, msg = ffclib.compile_c(s, d/'o')
if obj is None:
    print(msg, file=sys.stderr); sys.exit(1)
got, bad = ffclib.resolve_func(obj, func, sym.addr)
if got is None:
    print(bad, file=sys.stderr); sys.exit(1)
emit(got, out)
