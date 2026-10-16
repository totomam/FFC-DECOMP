#include "ffc/types.h"
extern uint8_t data_020b2368[];
void func_0207246c(uint32_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    p[3] &= ~0xff;
    p[0] = (uint32_t)data_020b2368;
    p[5] = a;
    p[6] = b;
    p[7] = c;
    p[8] = d;
    p[9] = e;
    p[10] = f;
    p[11] = 0;
}
