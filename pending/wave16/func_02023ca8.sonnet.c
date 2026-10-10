/* cflags: -lang c++ */
#include "ffc/types.h"
struct O {
    virtual void v0();
    virtual void v1();
    virtual int v2(uint32_t x, uint32_t b);
    virtual void v3();
    virtual int v4(uint32_t a);
};
extern "C" int func_02023ca8(O *o, uint32_t x, uint32_t a, uint32_t b)
{
    o->v2(x, b);
    return o->v4(a);
}
