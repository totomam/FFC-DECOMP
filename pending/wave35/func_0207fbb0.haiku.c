#include "ffc/types.h"

extern uint32_t func_0207e674(void *p);
extern uint32_t func_0207fc10(void *p);
extern void func_0207e6e4(void *p);

typedef struct Inner {
    uint32_t a[5];
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
} Inner;

typedef struct Outer {
    uint32_t pad[5];
    uint32_t flags;
    uint32_t pad2[2];
    Inner *inner;
} Outer;

uint32_t func_0207fbb0(Outer *a)
{
    uint32_t r6 = 0;
    uint32_t c = (a->flags & 2) ? 1 : 0;
    if (c) {
        Inner *p = a->inner;
        uint32_t r7 = func_0207e674(a);
        if (func_0207fc10(a) != 0) {
            a->flags &= ~4u;
            r6 = p->f1c;
            p->a[1] = p->f14;
            p->a[3] = p->f18;
            p->f1c = 0;
        }
        if (r7 != 0) {
            func_0207e6e4(a);
        }
    }
    return r6;
}
