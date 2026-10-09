#include "ffc/types.h"

extern uint8_t data_ov003_0217a724[];

void func_ov003_021642a0(uint32_t *s, uint32_t r1, uint32_t r2)
{
    s[3] &= ~0xffu;
    s[0] = (uint32_t)data_ov003_0217a724;
    s[5] = r1;
    s[6] = r2;
}
