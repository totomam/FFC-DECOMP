/* cflags: -nothumb */
#include "ffc/types.h"

void func_02084a0c(uint32_t v, uint32_t *p, uint32_t n) {
    uint32_t *end = (uint32_t *)((uint8_t *)p + n);
    uint32_t *blk_end = p + (n >> 5) * 8;
    while (p < blk_end) {
        p[0] = v; p[1] = v; p[2] = v; p[3] = v;
        p[4] = v; p[5] = v; p[6] = v; p[7] = v;
        p += 8;
    }
    while (p < end) {
        *p++ = v;
    }
}
