/* cflags: -nothumb */
#include "ffc/types.h"

static inline uint32_t cnt_lz(uint32_t x) {
    uint32_t n = 0;
    while (n < 32 && !(x & (0x80000000u >> n))) {
        n++;
    }
    return n;
}

int func_02086a4c(void) {
    volatile uint32_t *p = (volatile uint32_t *)0x02ffffb0;
    uint32_t n = cnt_lz(*p);
    if (n != 32) {
        p[0] = p[0] & ~(0x80000000u >> n);
        return 0x40 + n;
    }
    p++;
    n = cnt_lz(*p);
    if (n == 32) {
        return -3;
    }
    p[0] = p[0] & ~(0x80000000u >> n);
    return 0x60 + n;
}
