/* cflags: -lang c++ */
#include "ffc/types.h"
struct P { uint32_t lo, hi; };
struct R { P p; int32_t c; };
struct Q { P p; int x; };
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual int v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual int64_t v15(uint32_t, uint32_t, int);
};
extern "C" void func_02098b40(R *r, Obj *o, Q q, uint8_t fl)
{
    int z; int64_t zz = 0;
    int m = 0x18;
    int xx = q.x;
    if (*((uint8_t*)o + 0x3a) == 0 || (uint8_t)(fl & m) == 0) {
        r->p.lo = -1; r->p.hi = -1; r->c = 0;
        return;
    }
    if (o->v5() < 0) {
        r->p.lo = m - 0x19; r->p.hi = m - 0x19; r->c = 0;
        return;
    }
    z = 0;
    if (zz > o->v15(q.p.lo, q.p.hi, 0)) {
        r->p.lo = z - 1; r->p.hi = z - 1; r->c = z;
        return;
    }
    *(int64_t*)&r->p = *(int64_t*)&q.p;
    r->c = xx;
}
