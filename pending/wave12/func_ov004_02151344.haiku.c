#include "ffc/types.h"

extern int16_t data_020a1bd0[];

void func_ov004_02151344(int32_t *p, int32_t x)
{
    *p = data_020a1bd0[(x >> 4) * 2 + 1];
}
