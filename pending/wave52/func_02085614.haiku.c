/* cflags: -nothumb */
#include "ffc/types.h"

void func_02085614(uint8_t *src, uint32_t *dst)
{
    uint32_t bits = src[0] & 0xf;
    uint32_t fb = (bits & 7) + 4;
    int32_t size = (int32_t)(*(uint32_t *)src >> 8);
    uint8_t *root = src + 5;
    uint8_t *cur;
    uint32_t *data = (uint32_t *)(src + 4 + 2 * (src[4] + 1));
    uint32_t buf = 0;
    uint32_t n = 0;
    uint32_t w;
    int k;

    while (size > 0) {
        cur = root;
        w = *data++;
        k = 32;
        while (--k >= 0) {
            uint32_t sb = (w >> 31) & 1;
            uint32_t v = ((uint32_t)*cur << sb);
            cur = (uint8_t *)(((uint32_t)cur & ~1u) + ((((uint32_t)*cur & 0x3f) + 1) << 1) + sb);
            if (v & 0x80) {
                buf = (buf >> bits) | ((uint32_t)*cur << (32 - bits));
                cur = root;
                n++;
                if (n == fb) {
                    *dst++ = buf;
                    size -= 4;
                    n = 0;
                }
            }
            if (size <= 0) {
                break;
            }
            w <<= 1;
        }
    }
}
