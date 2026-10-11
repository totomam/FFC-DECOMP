/* cflags: -nothumb */
#include "ffc/types.h"

uint32_t func_02004ffc(uint32_t a, int32_t n) {
    volatile uint16_t *p = (volatile uint16_t *)0x4004004;
    uint32_t old = *p;
    uint32_t nv;
    if (a == 0) {
        nv = old & ~1u;
    } else {
        nv = old | 1u;
    }
    if (old != nv) {
        *p = (uint16_t)nv;
        do {
            n -= 4;
        } while (n >= 0);
    }
    return old & 1u;
}
