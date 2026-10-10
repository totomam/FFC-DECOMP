#include "ffc/types.h"

extern int func_0203e894(int, uint32_t, uint32_t, int, int, int, int, int, uint8_t);
extern uint32_t data_ov003_0217a1f0[];

int func_ov003_0215b394(int a0, int a1, int a2, int a3, ...)
{
    uint8_t *ap = (uint8_t *)&a3 + 4;
    uint32_t s0 = *(uint32_t *)ap;
    uint32_t s1 = *(uint32_t *)(ap + 4);
    uint8_t s2 = ap[8];

    return func_0203e894(a0, data_ov003_0217a1f0[0], data_ov003_0217a1f0[1], a1, a2, a3, s0, s1, s2);
}
