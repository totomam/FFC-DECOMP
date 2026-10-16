#include "ffc/types.h"
extern uint32_t data_020b2318;
void func_02072f4c(uint32_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    p[5] = a;
    p[6] = 0;
    *(uint8_t*)(p + 7) = 0;
    p[3] &= ~0xffu;
    p[10] = d;
    p[0] = (uint32_t)&data_020b2318;
    p[8] = b;
    p[9] = c;
    p[11] = e;
}
