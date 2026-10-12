#include "ffc/types.h"

extern void func_02056c4c(void *x);

typedef struct Obj {
    void **vtbl;
} Obj;

void func_ov007_021a038c(uint8_t *p)
{
    uint8_t *q;
    uint32_t i;

    *(uint32_t *)(p + 0x170) = 0xb4;
    q = *(uint8_t **)(p + 0x13c);
    for (i = 0; i < 0x40; i++) {
        q[0xb8 + i] = (uint8_t)i;
    }
    func_02056c4c(*(void **)(q + 0xac));
    {
        Obj *o = *(Obj **)(q + 0xa8);
        ((void (*)(Obj *, int, int))o->vtbl[14])(o, 1, 1);
    }
    {
        Obj *o = *(Obj **)(q + 0xa8);
        ((void (*)(Obj *))o->vtbl[11])(o);
    }
}
