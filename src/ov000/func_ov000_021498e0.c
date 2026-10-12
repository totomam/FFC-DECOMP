#include "ffc/types.h"

void func_ov000_021498e0(int8_t *dst, const int8_t *src, int32_t n)
{
    int8_t *start = dst;
    int8_t *p;

    if (*dst != 0) {
        do {
            dst++;
        } while (*dst != 0);
        if (dst - start >= 255) {
            return;
        }
        p = dst + 1;
        *dst = ',';
        dst += 2;
        *p = ' ';
    }

    while (n-- != 0 && dst - start < 255) {
        *dst++ = *src++;
    }
    *dst = 0;
}
