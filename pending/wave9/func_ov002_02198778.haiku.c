#include "ffc/types.h"

extern uint8_t data_ov002_021d48c8[];

void func_ov002_02198778(uint32_t *s, uint32_t r1, uint32_t r2)
{
    s[3] &= ~0xffu;
    s[0] = (uint32_t)data_ov002_021d48c8;
    s[5] = r2;
    s[6] = r1;
}
