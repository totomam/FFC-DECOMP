#include "ffc/types.h"

extern uint8_t data_ov002_021d508c[];

void func_ov002_021a0ce4(uint32_t *s, uint32_t r1, uint32_t r2)
{
    s[3] &= ~0xffu;
    s[0] = (uint32_t)data_ov002_021d508c;
    s[5] = r1;
    s[6] = r2;
}
