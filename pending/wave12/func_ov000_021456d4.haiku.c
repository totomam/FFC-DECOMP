#include "ffc/types.h"

uint32_t func_ov000_021456d4(uint32_t x)
{
    uint32_t y = x ^ 0xffff;
    if (y != 0) {
        return y;
    }
    return 0xffff;
}
