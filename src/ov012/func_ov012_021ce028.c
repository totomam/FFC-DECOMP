#include "ffc/types.h"

extern void func_0203c394(void *p);
extern uint32_t func_02056aec(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_ov012_021cdf74(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

typedef struct Obj {
    uint8_t pad0[0x14];
    uint8_t sub[0x6c];
    void *f80;
} Obj;

void func_ov012_021ce028(Obj *o)
{
    void *n;
    void *r1;
    void *q;

    func_0203c394(o);
    n = (void *)func_02056aec(o);
    r1 = func_0205681c(0x11c);
    if (r1 != 0) {
        r1 = func_ov012_021cdf74(r1, o->f80);
    }
    q = o->sub;
    func_02056bc0(q, r1);
    func_02056bc0(q, n);
}
