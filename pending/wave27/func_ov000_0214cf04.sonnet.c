#include "ffc/types.h"

extern void func_02084b2c(void *dst, int c, uint32_t n);

void func_ov000_0214cf04(uint16_t *dst, uint8_t *src, int n, int m)
{
    func_02084b2c(dst, 0, m * 2);
    src += n - 1;
    for (; n > 1; n -= 2) {
        *dst++ = (uint16_t)(src[0] + (src[-1] << 8));
        src -= 2;
    }
    if (n > 0) {
        *dst = *src;
    }
}
