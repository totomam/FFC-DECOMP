#include "ffc/types.h"
extern uint8_t data_020b24e0[], data_020b2468[];
extern uint32_t data_0213e1cc[];
extern void *func_02056830(int n);
void *func_020739cc(uint32_t *p, uint32_t a, uint32_t b, uint32_t c, int d)
{
    p[3] &= ~0xff;
    p[0] = (uint32_t)data_020b24e0;
    p[5] = a;
    *(uint8_t *)(p + 7) = 1;
    int k = 3; p[6] = k;
    p[8] = 0;
    p[9] = 0;
    *(uint32_t *)((uint8_t *)data_0213e1cc + (k << 2)) = 9;
    p[10] = b;
    p[0] = (uint32_t)data_020b2468;
    p[11] = c;
    p[12] = d;
    p[13] = 0;
    if (d < 0x80) d = 0x80;
    p[13] = (uint32_t)func_02056830(d);
    return p;
}
