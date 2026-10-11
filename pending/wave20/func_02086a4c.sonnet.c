/* cflags: -nothumb */
#include "ffc/types.h"

int func_02086a4c(void) {
    uint32_t *p = (uint32_t *)0x2ffffb0;
    int base = 0x40;
    int n = __cntlzw(p[0]);
    if (n == 32) {
        p++;
        n = __cntlzw(p[0]);
        if (n == 32) return -3;
        base = 0x60;
    }
    *p &= ~(0x80000000u >> n);
    return base + n;
}
