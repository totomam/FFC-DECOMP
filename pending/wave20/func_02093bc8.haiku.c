#include "ffc/types.h"

void func_02093bc8(uint16_t *dst, uint16_t *src) {
    uint16_t *d = dst;
    uint16_t *e;
    do {
        e = d;
        *d++ = *src++;
    } while (*e != 0);
}
