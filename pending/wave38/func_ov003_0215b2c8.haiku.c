#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(uint32_t *self, uint32_t zero, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t data_ov003_0217a018[];

uint32_t *func_ov003_0215b2c8(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                              uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i, ...)
{
    uint32_t *p;
    p = (uint32_t *)func_0205681c(0xa8);
    if (p != 0) {
        func_02056c9c(p, 0, c, d, e, f);
        p[0] = (uint32_t)data_ov003_0217a018;
        p[0x21] = a;
        p[0x22] = b;
        p[0x23] = c;
        p[0x24] = d;
        p[0x25] = e;
        p[0x26] = f;
        p[0x27] = g;
        p[0x28] = h;
        p[0x29] = i;
    }
    return p;
}
