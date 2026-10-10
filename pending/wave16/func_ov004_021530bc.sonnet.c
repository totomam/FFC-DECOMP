/* cflags: -lang c++ */
#include "ffc/types.h"

struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual uint32_t v9(int a);
};
struct P { char pad[0xe8]; uint32_t x; char pad2[0x290-0xec]; O *o; };

extern "C" uint32_t func_ov004_021530bc(P *p, int a) {
    O *q = p->o;
    if (q != 0) {
        return q->v9(a);
    }
    return p->x;
}
