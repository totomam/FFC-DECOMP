#include "ffc/types.h"

extern uint32_t func_0208f68c(uint32_t x);

uint32_t func_02078144(uint8_t *p, uint32_t x)
{
    uint32_t a = func_0208f68c(x);
    uint32_t *q = (uint32_t *)(p + 0x24);
    uint32_t lim = q[1];
    uint32_t v = ((a - 1) + q[0]) & ~(a - 1);
    if (v > lim) {
        return 0;
    }
    return lim - v;
}
