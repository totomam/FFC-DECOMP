#include "ffc/types.h"

extern uint32_t func_02024928(void *, uint32_t, void *);
extern void func_0202b258(void *obj, uint32_t a, uint32_t b);

typedef struct O { uint8_t pad[0x34]; void *f34; } O;
typedef struct Q { uint8_t pad[0x34]; void *f34; } Q;
typedef struct P { uint8_t pad[0x110]; O *a; void *x; void *b; void *c; uint8_t pad2[0x36C-0x120]; } P;

void func_ov003_0215818c(P *p, uint32_t unused, Q *q)
{
    uint32_t r;
    if (q && q->f34 && p->a && p->a->f34) {
        r = func_02024928(q->f34, unused, p->a->f34);
        if (r == 0xFFFFFFFF) q = 0;
        func_0202b258(p->a, (uint32_t)q, r);
        if (p->b) func_0202b258(p->b, (uint32_t)q, r);
        if (p->c) func_0202b258(p->c, (uint32_t)q, r);
        *(uint32_t *)((uint8_t *)p + 0x36C) = 0;
    }
}
