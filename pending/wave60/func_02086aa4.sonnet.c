/* cflags: -nothumb */
#include "ffc/types.h"
void func_02086aa4(int n)
{
    volatile uint32_t *p = (volatile uint32_t *)0x2ffffb0;
    if (n >= 0x60) {
        p++;
        n -= 0x60;
    } else {
        n -= 0x40;
    }
    *p |= 0x80000000u >> n;
}
