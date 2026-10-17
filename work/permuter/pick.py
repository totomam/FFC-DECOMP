import csv,sys,glob,re,json
from concurrent.futures import ThreadPoolExecutor
sys.path.insert(0,'/home/user/FFC-DECOMP/tools')
import ffclib
R=ffclib.ROOT
rows=[x for x in csv.DictReader(open(R/'queue.csv')) if x['status']=='fail_sonnet' and float(x['best_pct'] or 0)>=90 and int(x['size'],16)<=0x200]
def score(args):
    func,f=args
    sym=ffclib.symbols().get(func)
    if not sym or sym.kind!='function': return (func,f,-1)
    import tempfile,pathlib
    d=pathlib.Path(tempfile.mkdtemp(dir='/tmp/claude-0/pk'))
    obj,msg=ffclib.compile_c(pathlib.Path(f),d)
    if obj is None: return (func,f,-1)
    got,bad=ffclib.resolve_func(obj,func,sym.addr)
    if got is None: return (func,f,-1)
    want=ffclib.target_bytes(sym)
    return (func,f,100.0 if got==want and not bad else ffclib.match_pct(got,want))
import os; os.makedirs('/tmp/claude-0/pk',exist_ok=True)
jobs=[(x['func'],f) for x in rows for f in glob.glob(str(R/'pending'/'*'/(x['func']+'.*c')))]
print(len(rows),len(jobs),file=sys.stderr)
with ThreadPoolExecutor(4) as ex: res=list(ex.map(score,jobs))
best={}
for func,f,p in res:
    if func not in best or p>best[func][1]: best[func]=(f,p)
json.dump(best,open('cands.json','w'),indent=0)
