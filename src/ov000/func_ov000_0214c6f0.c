#include "ffc/types.h"

extern int32_t func_ov000_0214c5f0(uint16_t *p, int32_t n);
extern void func_02084b2c(void *p, int32_t c, uint32_t size);

void func_ov000_0214c6f0(uint16_t *dst, uint16_t *a, uint16_t *b, int32_t n)
{
    int32_t r4 = func_ov000_0214c5f0(a, n);
    int32_t t = func_ov000_0214c5f0(b, n);
    int32_t i;
    int32_t carry;

    if (r4 < t) {
        r4 = t;
    }
    if (r4 != n) {
        r4++;
    }

    carry = 0;
    i = 0;
    while (i < r4 || (i < n && carry != 0)) {
        int32_t v = (int32_t)a[i] - (int32_t)b[i] + carry;
        dst[i] = (uint16_t)v;
        carry = v >> 16;
        i++;
    }

    if (dst != a && dst != b) {
        func_02084b2c(dst + i, 0, (uint32_t)(n - i) * 2);
    }
}
