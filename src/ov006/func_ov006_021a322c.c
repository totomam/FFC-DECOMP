#include "ffc/types.h"

void func_ov006_021a322c(uint32_t *dst, const uint8_t *src, uint32_t size) {
    uint32_t i;
    for (i = 0; i < size; i += 4) {
        uint32_t b3 = src[i + 3];
        uint32_t b2 = src[i + 2];
        uint32_t b1 = src[i + 1];
        uint32_t b0 = src[i];
        *dst++ = b0 | (b1 << 8) | (b2 << 16) | (b3 << 24);
    }
}
