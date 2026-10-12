#include "ffc/types.h"

uint8_t *func_02092924(uint8_t *dst, uint8_t *src) {
    uint8_t *p = dst;
    uint8_t *q;
    uint8_t c;
    do {
        c = *p;
        p++;
    } while (c != 0);
    p--;
    do {
        q = p;
        c = *src;
        src++;
        *p = c;
        p++;
    } while (*q != 0);
    return dst;
}
