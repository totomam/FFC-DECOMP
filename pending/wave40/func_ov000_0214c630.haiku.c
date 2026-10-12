#include "ffc/types.h"

extern int func_ov000_0214c5f0(void *p, int n);
extern void func_02084b2c(void *p, int v, uint32_t n);

void func_ov000_0214c630(uint16_t *dst, uint16_t *a, uint16_t *b, int n)
{
    int i;
    int m;
    int len;
    uint32_t carry;

    m = func_ov000_0214c5f0(a, n);
    len = func_ov000_0214c5f0(b, n);
    if (m < len) {
        m = len;
    }
    if (m != n) {
        m++;
    }
    carry = 0;
    for (i = 0; i < m; i++) {
        uint32_t s = carry + ((uint32_t)a[i] + (uint32_t)b[i]);
        dst[i] = (uint16_t)s;
        carry = s >> 16;
    }
    if (dst != a && dst != b) {
        func_02084b2c(dst + i, 0, (uint32_t)((n - i) * 2));
    }
}
