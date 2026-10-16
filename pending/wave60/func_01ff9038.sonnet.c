/* cflags: -nothumb */
#include "ffc/types.h"
extern void (*data_02fe0020[])(void);
extern void func_01ff9090(void);
void func_01ff9038(void) {
    volatile uint32_t *r = (volatile uint32_t *)0x4000210;
    uint32_t m, b, n;
    if (r[-2] == 0) return;
    m = r[0] & r[1];
    if (m == 0) return;
    n = 0;
    b = 0x80000000;
    do {
        n = __clz(m);
        m &= ~(b >> n);
    } while (m != 0);
    r[1] = b >> n;
    data_02fe0020[31 - n]();
}
