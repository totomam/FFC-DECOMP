#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02056c9c(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t data_ov003_0217b07c[];
typedef struct { uint32_t a,b,c,d,e5,e6,e7,e8,e9,e10; } S;

void *func_ov003_021670a0(S s)
{
    uint32_t *p = (uint32_t *)func_0205681c(0xac);
    if (p != 0) {
        func_02056c9c(p, 0, s.e6, s.d, s.e6, s.e7);
        p[0] = (uint32_t)data_ov003_0217b07c;
        p[0x84 / 4] = s.a;
        p[0x88 / 4] = s.b;
        p[0x8c / 4] = s.c;
        p[0x90 / 4] = s.d;
        p[0x94 / 4] = s.e5;
        p[0x98 / 4] = s.e6;
        p[0x9c / 4] = s.e7;
        p[0xa0 / 4] = s.e8;
        p[0xa4 / 4] = s.e9;
        p[0xa8 / 4] = s.e10;
    }
    return p;
}
