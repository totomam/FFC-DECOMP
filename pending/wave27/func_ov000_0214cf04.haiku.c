#include "ffc/types.h"

extern void func_02084b2c(void *dst, int c, uint32_t n);

void func_ov000_0214cf04(uint16_t *dst, uint8_t *src, int n, int m)
{
    uint8_t *p;

    func_02084b2c(dst, 0, m * 2);
    p = src + (n - 1);
    while (n > 1) {
        *dst++ = (uint16_t)(p[0] + (p[-1] << 8));
        n -= 2;
        p -= 2;
    }
    if (n > 0) {
        *dst = *p;
    }
}
