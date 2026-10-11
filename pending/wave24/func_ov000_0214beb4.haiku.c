#include "ffc/types.h"

void func_ov000_0214beb4(uint8_t *dst, const uint32_t *src, uint32_t n) {
    uint32_t i;
    uint32_t v;
    uint8_t *p;
    n = n >> 2;
    i = 0;
    if (n != 0) {
        do {
            v = *src;
            i++;
            dst[0] = (uint8_t)(v >> 24);
            dst[1] = (uint8_t)(v >> 16);
            dst[2] = (uint8_t)(v >> 8);
            p = dst + 3;
            src++;
            dst += 4;
            *p = (uint8_t)v;
        } while (i < n);
    }
}
