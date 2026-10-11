#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern uint32_t data_ov009_021b088c[];
extern uint32_t data_ov009_021b080c[];

void func_ov009_021ad660(uint32_t *out, uint32_t unused, uint32_t x)
{
    uint32_t lo1 = (uint32_t)func_0209a76c(x, 5);
    uint32_t hi2 = (uint32_t)(func_0209a76c(x, 5) >> 32);
    uint32_t *d1 = data_ov009_021b088c;
    uint32_t *d2 = data_ov009_021b080c;
    uint32_t y;
    uint32_t z;

    y = d2[25] + d1[3] * hi2;
    y = y + d2[11] * lo1;
    z = d2[24] + d1[2] * hi2;
    z = z + d2[10] * lo1;
    out[0] = z;
    out[1] = y;
}
