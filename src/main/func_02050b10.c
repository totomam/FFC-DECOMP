/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" int func_020509f8(void *a, int b, void *c, int d, int e, int f);

struct Obj {
    virtual int v0();
    virtual int v1();
    virtual int v2();
};

extern "C" int func_02050b10(void *a, Obj *o)
{
    int r = o->v2();
    return func_020509f8(a, 1, o, r, 1, 4);
}
