#include "ffc/types.h"

uint8_t *func_02092878(uint8_t *dst, const uint8_t *src) {
    uint8_t *d = dst;
    const uint8_t *s = src;
    uint32_t k;
    uint8_t c;
    uint32_t w;

    if (((uint32_t)dst & 3) != ((uint32_t)src & 3)) goto bytes;
    if (((uint32_t)src & 3) != 0) {
        c = *s;
        *d = c;
        if (c == 0) return dst;
        k = 3 - ((uint32_t)src & 3);
        if (k != 0) {
            do {
                s++;
                c = *s;
                d++;
                *d = c;
                if (c == 0) return dst;
            } while (--k != 0);
        }
        d++;
        s++;
    }
    w = *(uint32_t *)s;
    if ((w - 0x01010101u) & ~w & 0x80808080u) goto bytes;
    d -= 4;
    do {
        d += 4;
        *(uint32_t *)d = w;
        s += 4;
        w = *(uint32_t *)s;
    } while (!((w - 0x01010101u) & ~w & 0x80808080u));
    d += 4;
bytes:
    c = *s;
    *d = c;
    if (c == 0) return dst;
    do {
        s++;
        d++;
        c = *s;
        *d = c;
    } while (c != 0);
    return dst;
}
