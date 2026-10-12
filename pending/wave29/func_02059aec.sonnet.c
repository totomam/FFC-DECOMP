/* cflags: -lang c++ */
#include "ffc/types.h"
struct Obj { uint32_t p00,p04,p08,f0c,f10,f14,p18[12],f48,f4c; };
extern "C" {
void func_0204f218(uint32_t a, uint32_t b);
uint32_t func_0205681c(uint32_t size);
uint32_t func_0205ae60(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
void func_0208763c(uint32_t p);
void func_02087678(uint32_t p);
uint32_t func_02059aec(Obj *o);
}
struct G { int a,b; G(int x){a=x;b=0;} ~G(){} };
inline int add(const G &g,int c){return g.a+c;}
uint32_t func_02059aec(Obj *o)
{
    
    uint32_t r4, r6;
    func_0204f218(o->f0c, 1);
    r4 = func_0205681c(0x110);
    if (r4 != 0) r4 = func_0205ae60(r4, o->f0c, o->f48, o->f4c);
    int t=o->f10; r6 = add(G(t),0x20);
    func_0208763c(r6);
    o->f14 = r4;
    func_02087678(r6);
    return r4;
}
