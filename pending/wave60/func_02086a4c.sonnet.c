/* cflags: -nothumb */
#include "ffc/types.h"
int func_02086a4c(void) {
    volatile uint32_t *p = (volatile uint32_t *)0x2ffffb0;
    int base;
    int n;
    n = __clz(*p);
    if (n != 32) {
        base = 0x40;
    } else {
        p++;
        n = __clz(*p);
        if (n == 32) return -3;
        base = 0x60;
    }
    *p &= ~(0x80000000u >> n);
    return base + n;
}
