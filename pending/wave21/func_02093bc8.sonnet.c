#include "ffc/types.h"

uint16_t *func_02093bc8(uint16_t *dst, uint16_t *src) {
    uint16_t *p = dst;
    uint16_t *q;
    uint16_t v;
    do {
        v = *src++;
        q = p;
        *p = v;
        p++;
    } while (*q != 0);
    return dst;
}
