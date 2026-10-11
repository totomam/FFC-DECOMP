/* cflags: -nothumb */
#include "ffc/types.h"

int func_02086a4c(void) {
    uint32_t *p = (uint32_t *)0x2ffffb0;
    uint32_t v = p[0];
    int base = 0x40;
    int n;
    if (v == 0) {
        p++;
        v = p[0];
        if (v == 0) {
            return -3;
        }
        base = 0x60;
    }
    n = 0;
    while (!(v & (0x80000000u >> n))) {
        n++;
    }
    *p = *p & ~(0x80000000u >> n);
    return base + n;
}
