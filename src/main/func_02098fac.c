/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual uint32_t get();
    uint32_t pad;
    uint8_t *ptr;
};

extern "C" uint32_t func_02098fac(Obj *p);
extern "C" uint32_t func_02098fac(Obj *p)
{
    uint32_t v = p->get();
    uint32_t w = 0xffff;
    if (v != 0xffff) {
        uint8_t *q = p->ptr;
        p->ptr = q + 2;
        w = *(uint16_t *)q;
    }
    return w;
}
