#include "ffc/types.h"

void func_02093bc8(uint16_t *dst, uint16_t *src) {
    uint16_t *p = dst;
    uint16_t *q;
    uint16_t v;
    do {
        v = *src;
        q = p;
        src++;
        *p = v;
        p++;
    } while (*(volatile uint16_t *)q != 0);
}
