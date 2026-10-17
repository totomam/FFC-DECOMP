#include "ffc/types.h"

extern uint8_t data_ov002_021d69a4[];

void func_ov002_021bc52c(uint32_t *s, uint32_t r1, uint32_t r2)
{
    s[3] &= ~0xffu;
    s[0] = (uint32_t)data_ov002_021d69a4;
    s[5] = r1;
    s[6] = r2;
}
