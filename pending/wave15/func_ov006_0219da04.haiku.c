#include "ffc/types.h"

uint32_t func_ov006_0219da04(uint32_t a, uint32_t b)
{
    uint32_t x = a & b;
    uint32_t y = ((a & ~b) + 1) | x;
    uint32_t z = ~b | x;
    if (y < z) {
        return y;
    }
    return 1 | x;
}
