#include "ffc/types.h"

extern uint8_t data_ov003_0217aa94[];

void func_ov003_021668c4(uint32_t *s, uint32_t r1, uint32_t r2)
{
    s[3] &= ~0xffu;
    s[0] = (uint32_t)data_ov003_0217aa94;
    s[5] = r1;
    *(uint16_t *)&s[6] = (uint16_t)r2;
}
