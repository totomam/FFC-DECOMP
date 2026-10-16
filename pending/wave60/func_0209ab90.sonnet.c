/* cflags: -nothumb -noO4,p -O4 */
#include "ffc/types.h"
uint32_t func_0209ab90(uint32_t x)
{
    int32_t e;
    if (!(x & 0x80000000)) {
        e = 0x9e - (int32_t)(x >> 23);
        if (e < 0) return 0xffffffff;
        return ((x << 8) | 0x80000000) >> e;
    }
    if (0xff000000 >= (x << 1)) return 0;
    return 0xffffffff;
}
