/* cflags: -nothumb */
#include "ffc/types.h"

void func_02004ed4(uint32_t *dst, const uint32_t *src, uint32_t n) {
    uint32_t *end = (uint32_t *)((char *)dst + (n & ~0x1fu));
    if (n & ~0x1fu) {
        do {
            uint32_t a = src[0], b = src[1], c = src[2], d = src[3];
            uint32_t e = src[4], f = src[5], g = src[6], h = src[7];
            dst[0] = a; dst[1] = b; dst[2] = c; dst[3] = d;
            dst[4] = e; dst[5] = f; dst[6] = g; dst[7] = h;
            dst += 8;
            src += 8;
        } while ((int32_t)end > (int32_t)dst);
    }
    if (n & 0x10) {
        uint32_t a = src[0], b = src[1], c = src[2], d = src[3];
        dst[0] = a; dst[1] = b; dst[2] = c; dst[3] = d;
        dst += 4;
        src += 4;
    }
    if (n & 0x8) {
        uint32_t a = src[0], b = src[1];
        dst[0] = a; dst[1] = b;
        dst += 2;
        src += 2;
    }
    if (n & 0x4) {
        dst[0] = src[0];
        dst += 1;
        src += 1;
    }
}
