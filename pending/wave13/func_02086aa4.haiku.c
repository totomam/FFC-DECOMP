/* cflags: -nothumb */
#include "ffc/types.h"

void func_02086aa4(int32_t x)
{
    uint32_t *p = (uint32_t *)0x2ffffb0;
    if (x >= 0x60) {
        p++;
        x -= 0x60;
    } else {
        x -= 0x40;
    }
    *p |= 0x80000000u >> x;
}
