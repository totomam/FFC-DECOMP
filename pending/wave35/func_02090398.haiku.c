#include "ffc/types.h"

void *func_02090398(void *dst, void *src, uint32_t n) {
    uint8_t *d;
    uint8_t *s;
    if ((uint8_t *)src >= (uint8_t *)dst) {
        s = src;
        d = dst;
        if (n != 0) {
            do {
                *d = *s;
                s++;
                d++;
                n--;
            } while (n != 0);
        }
    } else {
        s = (uint8_t *)src + n;
        d = (uint8_t *)dst + n;
        if (n != 0) {
            do {
                s--;
                d--;
                *d = *s;
                n--;
            } while (n != 0);
        }
    }
    return dst;
}
