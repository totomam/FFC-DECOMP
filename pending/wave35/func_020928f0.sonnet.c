#include "ffc/types.h"

uint8_t *func_020928f0(uint8_t *dst, const uint8_t *src, uint32_t n) {
    uint8_t *p;
    uint8_t *d = dst;
    if (n == 0) return dst;
    do {
        p = d;
        *d = *src++;
        d++;
        if (*p == 0) {
            n--;
            if (n == 0) return dst;
            do {
                *d = 0;
                d++;
                n--;
            } while (n != 0);
            return dst;
        }
        n--;
    } while (n != 0);
    return dst;
}
