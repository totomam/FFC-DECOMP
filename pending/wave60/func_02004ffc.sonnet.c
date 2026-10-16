/* cflags: -nothumb -O0 */
#include "ffc/types.h"
uint32_t func_02004ffc(int en, int n) {
    volatile uint16_t *p = (volatile uint16_t *)0x4004004;
    uint32_t old = *p;
    uint32_t nw;
    if (en) nw = old | 1; else nw = old & ~1;
    if (old == nw) return old & 1;
    *p = nw;
    do { n -= 4; } while (n >= 0);
    return old & 1;
}
