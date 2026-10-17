#include "ffc/types.h"

extern uint8_t data_ov002_021d60ec[];

void func_ov002_021b82f4(uint32_t *s, uint32_t r1, uint32_t r2)
{
    s[3] &= ~0xffu;
    s[0] = (uint32_t)data_ov002_021d60ec;
    s[5] = r1;
    s[6] = r2;
}
