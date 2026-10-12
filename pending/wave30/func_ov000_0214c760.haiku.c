#include "ffc/types.h"

void func_ov000_0214c760(uint16_t *dst, uint16_t *src, int32_t val, int32_t n) {
    int32_t i = 0;
    if (n > 0) {
        do {
            int32_t d = (int32_t)src[i] - val;
            dst[i] = (uint16_t)d;
            if (((uint32_t)d >> 16 & 1) == 0) {
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
