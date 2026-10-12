#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t data_ov003_0217b07c[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} S4;

void *func_ov003_021670a0(S4 s, uint32_t e5, uint32_t e6, uint32_t e7,
                          uint32_t e8, uint32_t e9, uint32_t e10)
{
    uint32_t *p;
    uint32_t a = s.a;
    uint32_t d = s.d;

    p = (uint32_t *)func_0205681c(0xac);
    if (p != 0) {
        func_02056c9c(p, 0, e6, d, e6, e7);
        p[0] = (uint32_t)data_ov003_0217b07c;
        p[0x84 / 4] = a;
        p[0x88 / 4] = s.b;
        p[0x8c / 4] = s.c;
        p[0x90 / 4] = d;
        p[0x94 / 4] = e5;
        p[0x98 / 4] = e6;
        p[0x9c / 4] = e7;
        p[0xa0 / 4] = e8;
        p[0xa4 / 4] = e9;
        p[0xa8 / 4] = e10;
    }
    return p;
}
