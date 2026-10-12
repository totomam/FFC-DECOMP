#include "ffc/types.h"

void func_ov000_0214c698(uint16_t *dst, const uint16_t *src, uint32_t carry, int32_t n)
{
    int32_t i = 0;
    uint32_t acc = carry;

    if (n > 0) {
        do {
            acc += src[i];
            dst[i] = (uint16_t)acc;
            acc >>= 16;
            if (acc == 0) {
                break;
            }
            i++;
        } while (i < n);
    }

    if (dst != src) {
        i++;
        while (i < n) {
            dst[i] = src[i];
            i++;
        }
    }
}
