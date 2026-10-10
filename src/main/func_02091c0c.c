#include "ffc/types.h"

extern uint32_t data_020b2ef8;

uint32_t func_02091c0c(void)
{
    uint32_t seed = data_020b2ef8;
    seed = seed * 0x41c64e6d + 0x3039;
    data_020b2ef8 = seed;
    return (seed >> 16) & 0x7fff;
}
