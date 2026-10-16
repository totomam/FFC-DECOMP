/* cflags: -lang c++ */
#include "ffc/types.h"
struct S { uint32_t a, b; };
struct O { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(S s); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(uint32_t, uint32_t); };
typedef void (*Fn)(void*, void*);
struct P { virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7(P*); };
extern "C" {
extern void func_020095b8(void *o, uint32_t x);
extern void func_020634e0(void *l, void *o, uint32_t z);
extern O *func_0203b8d4(void *l, uint32_t a, uint32_t b, uint32_t c);
extern void func_02063530(void *l);
extern void *func_020059cc(void *object);
void func_ov004_02152b6c(void *self, uint32_t p1, uint32_t p2, uint32_t p3, S s)
{
    uint32_t l[1];
    uint32_t o[3];
    O *r;
    func_020095b8(o, p2);
    func_020634e0(l, o, 0);
    r = func_0203b8d4(l, p1, 0, 1);
    func_02063530(l);
    func_020059cc(o);
    r->v3(s);
    r->v14(p3, 0);
    ((P*)r)->p7((P*)self);
    if (r != 0) r->v1();
}
}
