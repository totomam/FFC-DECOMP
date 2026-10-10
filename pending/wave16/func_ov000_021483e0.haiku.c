#include "ffc/types.h"

extern void func_02084b2c(void *dst, void *src, uint32_t n);

void *func_ov000_021483e0(void *p, uint32_t a, void *q, uint32_t b)
{
    if (b < a) {
        uint32_t d = a - b;
        func_02084b2c(q, p, d);
        q = (uint8_t *)q + d;
    }
    return q;
}
