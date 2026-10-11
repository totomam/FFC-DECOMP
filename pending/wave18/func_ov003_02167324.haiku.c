#include "ffc/types.h"

extern uint32_t data_ov003_0217ae24[];

void func_ov003_02167324(uint32_t *p, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t *q)
{
    p[3] &= ~0xffu;
    p[0] = (uint32_t)data_ov003_0217ae24;
    p[6] = a2;
    p[7] = a3;
    p[5] = a1;
    p[8] = q[0];
    p[9] = q[1];
}
