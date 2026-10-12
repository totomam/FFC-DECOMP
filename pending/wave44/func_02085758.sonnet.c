/* cflags: -nothumb */
#include "ffc/types.h"

#define EMIT shift ^= 8; acc |= v << shift; if (shift) { *dst++ = acc; acc = 0; }

void func_02085758(uint8_t *src, uint16_t *dst) {
    int32_t n;
    int32_t c;
    uint32_t v;
    uint32_t acc = 0;
    uint32_t shift = 8;
    uint32_t pair;

    n = *(uint32_t *)src >> 8;
    src += 4;
    while (n > 0) {
        c = *src++;
        v = *src++;
        if (c & 0x80) {
            c -= 0x7d;
            n -= c;
            EMIT
            while ((c -= 2) > 0) {
                *dst++ = v | (v << 8);
            }
            if (c == 0) {
                EMIT
            }
        } else {
            c += 1;
            n -= c;
            do {
                EMIT
                if (--c == 0) break;
                v = *src++;
            } while (1);
        }
    }
}
