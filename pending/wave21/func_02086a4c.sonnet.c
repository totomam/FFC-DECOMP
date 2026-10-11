/* cflags: -nothumb */
#include "ffc/types.h"
extern int __clz(uint32_t);
int func_02086a4c(void) {
    uint32_t *p = (uint32_t *)0x02ffffb0;
    uint32_t n = __clz(p[0]);
    if (n != 32) {
        p[0] &= ~(0x80000000u >> n);
        return 0x40 + n;
    }
    p++;
    n = __clz(p[0]);
    if (n == 32) return -3;
    p[0] &= ~(0x80000000u >> n);
    return 0x60 + n;
}
