import json,os,re,glob,subprocess,sys
W='/home/user/FFC-DECOMP/work/permuter'
sel=json.load(open(W+'/sel.json')); c=json.load(open(W+'/cands.json'))
times=dict(l.split() for l in open(W+'/times.txt'))
out=[]
for f in sel:
    d=f'{W}/runs/{f}'
    log=open(d+'/log.txt',errors='replace').read()
    m=re.search(r'base score = (\d+)',log); base=int(m[1]) if m else None
    outs=glob.glob(d+'/output-*')
    best=None
    for o in outs:
        s=int(o.split('output-')[1].split('-')[0])
        if best is None or s<best[0]: best=(s,o)
    iters=re.findall(r'iteration (\d+)',log); it=int(iters[-1]) if iters else 0
    ver=''
    if best and best[0]==0 or (best and best[0]<=base):
        src=open(d+'/cflags.txt').read()+open(best[1]+'/source.c').read()
        p=f'{d}/best.c'; open(p,'w').write(src)
        r=subprocess.run(['/home/user/FFC-DECOMP/tools/try',f,p],capture_output=True,text=True)
        ver=r.stdout.splitlines()[0] if r.stdout else r.stderr[:50]
        if r.returncode==0: open(f'{W}/matches/{f}.c','w').write(src)
    out.append((f,round(c[f][1],1),base,best[0] if best else None,it,times[f],ver))
    print(*out[-1])
json.dump(out,open(W+'/results.json','w'))
