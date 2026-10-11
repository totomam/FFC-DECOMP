/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj {
    virtual void v0(uint32_t x);
    virtual void v1(uint32_t x);
    virtual void v2(uint32_t x);
    virtual void v3(uint32_t x);
    virtual void v4(uint32_t x);
    virtual void v5(uint32_t x);
    virtual void v6(uint32_t x);
    virtual void v7(uint32_t x);
};

extern "C" void func_02061378(Obj *p, uint32_t a, uint32_t b, uint32_t c)
{
    p->v5(a);
    p->v6(b);
    p->v7(c);
}
