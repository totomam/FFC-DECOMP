import json,subprocess,sys,os,csv
R='/home/user/FFC-DECOMP'
W=R+'/work/permuter'
c=json.load(open(W+'/cands.json')); sel=json.load(open(W+'/sel.json'))
for f in sel:
    d=f'{W}/runs/{f}'; os.makedirs(d,exist_ok=True)
    src=c[f][0]
    first=open(src).readline()
    fl=first if 'cflags:' in first else ''
    open(d+'/cflags.txt','w').write(fl)
    body=open(src).read()
    open(d+'/orig.c','w').write(body)
    cpp=subprocess.run(['cpp','-P','-undef','-D__MWERKS__','-I',R+'/include','-'],input=body,capture_output=True,text=True)
    open(d+'/base.c','w').write(cpp.stdout)
    open(d+'/compile.sh','w').write(f'#!/bin/bash\nexec python3 /home/user/permuter/wrap.py compile {f} {d}/cflags.txt "$1" "$3"\n')
    os.chmod(d+'/compile.sh',0o755)
    subprocess.check_call(['python3','/home/user/permuter/wrap.py','target',f,d+'/target.o'])
    open(d+'/settings.toml','w').write('')
