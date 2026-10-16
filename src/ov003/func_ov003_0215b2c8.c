#include "ffc/types.h"
typedef struct { uint32_t x, y; } S;
extern void *func_0205681c(uint32_t n);
extern void func_02056c9c(void *o, int z, uint32_t w);
extern uint32_t data_ov003_0217a018;
void *func_ov003_0215b2c8(uint32_t a, S s, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i)
{
    uint32_t *o = (uint32_t *)func_0205681c(0xa8);
    if (o != 0) {
        volatile uint32_t t1 = f, t0 = e;
        func_02056c9c(o, 0, e);
        o[0] = (uint32_t)&data_ov003_0217a018;
        o[0x84/4] = a;
        *(S*)(o+0x88/4) = s;
        o[0x90/4] = d;
        o[0x94/4] = t0;
        o[0x98/4] = t1;
        o[0x9c/4] = g;
        o[0xa0/4] = h;
        o[0xa4/4] = i;
    }
    return o;
}
