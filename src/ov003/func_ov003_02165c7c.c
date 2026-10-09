#include "ffc/types.h"

extern uint8_t data_ov003_0217ac74[];

void func_ov003_02165c7c(uint32_t *s, uint32_t r1, uint32_t r2)
{
    s[3] &= ~0xffu;
    s[0] = (uint32_t)data_ov003_0217ac74;
    s[5] = r1;
    s[6] = r2;
}
