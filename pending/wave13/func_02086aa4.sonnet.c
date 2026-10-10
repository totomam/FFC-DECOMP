/* cflags: -nothumb */
#include "ffc/types.h"

void func_02086aa4(int32_t x)
{
    uint32_t *p = (uint32_t *)0x2ffffb0;
    uint32_t m;
    if (x >= 0x60) {
        x -= 0x60;
        p++;
        m = 0x80000000u >> x;
    } else {
        x -= 0x40;
        m = 0x80000000u >> x;
    }
    *p |= m;
}
