#include "ffc/types.h"

extern uint8_t data_ov002_021d7388[];

void func_ov002_021c4b60(uint32_t *s, uint32_t r1, uint8_t r2)
{
    s[3] &= ~0xffu;
    s[0] = (uint32_t)data_ov002_021d7388;
    s[5] = r1;
    ((uint8_t *)s)[0x18] = r2;
}
