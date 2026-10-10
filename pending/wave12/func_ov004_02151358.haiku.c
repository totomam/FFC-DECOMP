#include "ffc/types.h"

extern int16_t data_020a1bd0[];

void func_ov004_02151358(int32_t *out, int32_t x)
{
    *out = data_020a1bd0[(x >> 4) * 2];
}
