/* cflags: -nothumb */
#include "ffc/types.h"
typedef struct { uint32_t w[8]; } B;
void func_02084a58(B *src, B *dst, uint32_t n) {
    B *blk = (B *)((uint8_t *)dst + ((n >> 5) << 5));
    uint32_t *end = (uint32_t *)((uint8_t *)dst + n);
    while (dst < blk) {
        *dst++ = *src++;
    }
    uint32_t *s = (uint32_t *)src, *d = (uint32_t *)dst;
    while (d < end) {
        *d++ = *s++;
    }
}
