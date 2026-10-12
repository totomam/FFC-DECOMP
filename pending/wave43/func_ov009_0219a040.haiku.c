#include "ffc/types.h"

extern uint32_t func_02055054(uint32_t x);
extern uint32_t data_0213e098;

typedef struct Obj {
    uint8_t pad0[0x88];
    void *p88;
    uint8_t pad1[4];
    void *p90;
    uint8_t pad2[0xa0 - 0x94];
    uint8_t a0;
    uint8_t a1;
} Obj;

void func_ov009_0219a040(Obj *p)
{
    uint32_t t;
    uint8_t a1;
    uint32_t d;
    void *o;
    void **vt;

    t = func_02055054(data_0213e098);
    if (p->a1 == 0) {
        return;
    }
    if (p->a1 >= t) {
        p->a1 = p->a1 - (uint8_t)func_02055054(data_0213e098);
    } else {
        p->a1 = 0;
    }
    a1 = p->a1;
    if (p->a0 < a1) {
        return;
    }
    d = p->a0 - a1;
    o = p->p90;
    if (o != 0) {
        vt = *(void ***)o;
        ((void (*)(void *, int, int))vt[14])(o, (int)(d + 1), 0);
    }
    o = p->p90;
    if (o != 0) {
        vt = *(void ***)o;
        ((void (*)(void *))vt[10])(o);
    }
    if (p->a1 != 0) {
        return;
    }
    o = p->p88;
    if (o != 0) {
        vt = *(void ***)o;
        ((void (*)(void *))vt[10])(o);
    }
}
