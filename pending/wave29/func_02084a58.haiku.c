/* cflags: -nothumb */
#include "ffc/types.h"

void func_02084a58(uint32_t *src, uint32_t *dst, uint32_t n) {
    uint32_t *blk = (uint32_t *)((uint8_t *)dst + ((n >> 5) << 5));
    uint32_t *end = (uint32_t *)((uint8_t *)dst + n);
    while (dst < blk) {
        uint32_t a = *src++;
        uint32_t b = *src++;
        uint32_t c = *src++;
        uint32_t d = *src++;
        uint32_t e = *src++;
        uint32_t f = *src++;
        uint32_t g = *src++;
        uint32_t h = *src++;
        *dst++ = a;
        *dst++ = b;
        *dst++ = c;
        *dst++ = d;
        *dst++ = e;
        *dst++ = f;
        *dst++ = g;
        *dst++ = h;
    }
    while (dst < end) {
        *dst++ = *src++;
    }
}
