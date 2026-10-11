#include "ffc/types.h"

void func_ov000_0214bee0(uint32_t *dst, const uint8_t *src, uint32_t n) {
    uint32_t i;
    for (i = 0; i < n; i += 4) {
        *dst++ = ((uint32_t)src[i] << 24) | ((uint32_t)src[i + 1] << 16) |
                 ((uint32_t)src[i + 2] << 8) | (uint32_t)src[i + 3];
    }
}
