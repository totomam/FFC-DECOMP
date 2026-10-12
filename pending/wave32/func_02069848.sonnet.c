/* cflags: -lang c++ */
#include "ffc/types.h"
struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(O *o); virtual void v9();
    uint8_t pad[0x86 - 4];
    uint8_t f;
};
extern "C" O *func_0206975c(void);
extern "C" void func_02069848(O *p, O *q)
{
    O *r = func_0206975c();
    if (r == q) return;
    if (r != 0) { r->f = 0; r->v9(); }
    if (q != 0) { q->f = 1; q->v9(); }
    p->v8(q);
}
