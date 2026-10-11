#include "ffc/types.h"

uint16_t *func_02093bc8(uint16_t *dst, uint16_t *src) {
    uint16_t *d = dst;
    uint16_t *e;
    do {
        e = d;
        *e = *src++;
        d++;
    } while (*e != 0);
    return dst;
}
