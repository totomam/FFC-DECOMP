#include "ffc/types.h"

extern void func_02056bf4(void *p);
extern void func_020692a4(void *object);

#define VCALL(o, idx) ((void (*)(void *))((*(void ***)(o))[idx]))(o)

void func_ov007_021b8f70(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint8_t i;
    void *o;
    void *t;

    o = *(void **)(s + 0xe4);
    VCALL(o, 11);

    t = *(void **)(s + 0xb8);
    if (t == 0) {
        goto after;
    }
    func_02056bf4(s + 0x48);
    t = *(void **)(s + 0xb8);
    if (t == 0) {
        goto after;
    }
    if (t == 0) {
        goto clear;
    }
    VCALL(t, 1);
clear:
    *(void **)(s + 0xb8) = 0;
after:

    func_020692a4(*(void **)(s + 0xbc));
    o = *(void **)((uint8_t *)*(void **)(s + 0xbc) + 0x94);
    VCALL(o, 11);

    func_020692a4(*(void **)(s + 0xc0));
    o = *(void **)((uint8_t *)*(void **)(s + 0xc0) + 0x94);
    VCALL(o, 11);

    for (i = 0; i < 4; i++) {
        o = *(void **)(s + (i << 2) + 0xc4);
        VCALL(o, 11);
    }
}
