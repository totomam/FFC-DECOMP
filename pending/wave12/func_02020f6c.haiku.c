#include "ffc/types.h"

uint32_t func_02020f6c(uint32_t a, uint32_t b)
{
    uint32_t t = ((b - 3) << 3);
    t = (a - t + 1) >> 1;
    return 8 - (t - 2);
}
