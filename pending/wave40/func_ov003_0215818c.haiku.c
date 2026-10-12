#include "ffc/types.h"

extern uint32_t func_02024928(void);
extern void func_0202b258(void *obj, uint32_t a, uint32_t b);

void func_ov003_0215818c(uint8_t *p, uint32_t unused, uint8_t *q)
{
    uint32_t arg;
    uint32_t r;
    void *o;

    if (q == 0) {
        return;
    }
    if (*(void **)(q + 0x34) == 0) {
        return;
    }
    o = *(void **)(p + 0x110);
    if (o == 0) {
        return;
    }
    if (*(void **)((uint8_t *)o + 0x34) == 0) {
        return;
    }
    r = func_02024928();
    arg = (uint32_t)q;
    if (r == 0xFFFFFFFF) {
        arg = 0;
    }
    func_0202b258(*(void **)(p + 0x110), arg, r);
    o = *(void **)(p + 0x118);
    if (o != 0) {
        func_0202b258(o, arg, r);
    }
    o = *(void **)(p + 0x11C);
    if (o != 0) {
        func_0202b258(o, arg, r);
    }
    *(void **)(p + 0x36C) = 0;
}
