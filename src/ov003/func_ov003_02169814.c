#include "ffc/types.h"

extern uint8_t data_ov003_0217af74[];

void func_ov003_02169814(uint32_t *s, uint32_t r1, uint32_t r2)
{
    s[3] &= ~0xffu;
    s[0] = (uint32_t)data_ov003_0217af74;
    s[5] = r1;
    s[6] = r2;
}
