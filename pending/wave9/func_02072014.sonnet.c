/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_02084ca4(void *a, uint32_t b, uint32_t c);

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual uint32_t v2();
    uint32_t pad;
    void *f8;
};

extern "C" void func_02072014(Obj *p, uint32_t b);
extern "C" void func_02072014(Obj *p, uint32_t b)
{
    func_02084ca4(p->f8, b, p->v2());
}
