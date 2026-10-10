/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" int32_t func_02084ca4(int32_t, int32_t, int32_t);

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual int32_t v2();
    int32_t f4;
    int32_t f8;
};

extern "C" int32_t func_0207202c(Obj *a, int32_t b)
{
    int32_t r = a->v2();
    return func_02084ca4(b, a->f8, r);
}
