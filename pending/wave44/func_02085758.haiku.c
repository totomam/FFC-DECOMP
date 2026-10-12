/* cflags: -nothumb */
#include "ffc/types.h"

void func_02085758(uint8_t *src, uint16_t *dst) {
    int32_t n;
    uint32_t c;
    uint32_t v;
    uint32_t acc = 0;
    uint32_t shift = 8;
    uint32_t pair;

    n = (int32_t)(*(uint32_t *)src >> 8);
    src += 4;
    while (n > 0) {
        c = src[0];
        v = src[1];
        src += 2;
        if (c & 0x80) {
            n -= (int32_t)(c - 0x7d);
            c -= 0x7d;
            shift ^= 8;
            acc |= v << shift;
            if (shift) *dst++ = (uint16_t)acc;
            if (shift) acc = 0;
            c -= 2;
            pair = v | (v << 8);
            while ((int32_t)c > 0) {
                *dst++ = (uint16_t)pair;
                c -= 2;
            }
            if ((int32_t)c == 0) {
                shift ^= 8;
                acc |= v << shift;
                if (shift) *dst++ = (uint16_t)acc;
                if (shift) acc = 0;
            }
        } else {
            n -= (int32_t)(c + 1);
            c += 1;
            do {
                shift ^= 8;
                acc |= v << shift;
                if (shift) *dst++ = (uint16_t)acc;
                if (shift) acc = 0;
                c -= 1;
                if (c == 0) break;
                v = src[0];
                src += 1;
            } while (1);
        }
    }
}
