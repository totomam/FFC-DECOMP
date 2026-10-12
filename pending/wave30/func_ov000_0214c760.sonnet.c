#include "ffc/types.h"

void func_ov000_0214c760(uint16_t *dst, uint16_t *src, uint32_t val, int32_t n) {
    int32_t i = 0;
    if (n > 0) {
        do {
            val = src[i] - val;
            dst[i] = (uint16_t)val;
            val = (val >> 16) & 1;
            if (val == 0) break;
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
