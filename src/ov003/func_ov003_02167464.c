#include "ffc/types.h"

extern uint8_t data_ov003_0217acbc[];

void func_ov003_02167464(uint32_t *s, uint32_t r1, uint32_t r2)
{
    s[3] &= ~0xffu;
    s[0] = (uint32_t)data_ov003_0217acbc;
    s[5] = r2;
    s[6] = r1;
}
