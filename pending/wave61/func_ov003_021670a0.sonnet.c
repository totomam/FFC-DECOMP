#include "ffc/types.h"
typedef struct { uint32_t x, y; } Pair;
extern void *func_0205681c(uint32_t sz);
extern void func_02056c9c(void *p, uint32_t z, uint32_t c, uint32_t d, Pair e);
extern uint8_t data_ov003_0217b07c[];
void *func_ov003_021670a0(uint32_t a, Pair bc, uint32_t d, uint32_t s0, Pair q, uint32_t s3, uint32_t s4, uint32_t s5)
{
    uint32_t *p = (uint32_t *)func_0205681c(0xac);
    if (p != 0) {
        uint32_t u, v;
        func_02056c9c(p, 0, u, v, q);
        p[0] = (uint32_t)data_ov003_0217b07c;
        p[0x84/4] = a;
        p[0x88/4] = bc.x;
        p[0x8c/4] = bc.y;
        p[0x90/4] = d;
        p[0x94/4] = s0;
        p[0x98/4] = q.x;
        p[0x9c/4] = q.y;
        p[0xa0/4] = s3;
        p[0xa4/4] = s4;
        p[0xa8/4] = s5;
    }
    return p;
}
