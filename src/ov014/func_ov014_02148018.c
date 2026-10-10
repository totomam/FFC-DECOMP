#include "ffc/types.h"

uint8_t func_ov014_02148018(int32_t unused, int32_t x, uint32_t y)
{
    return (x >> ((y & 1) << 2)) & 0xf;
}
