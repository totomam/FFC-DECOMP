/* cflags: -nothumb */
#include "ffc/types.h"
int32_t func_0209abd0(uint32_t lo, uint32_t hi)
{
    int32_t e = 0x41e - ((hi & 0x7fffffff) >> 20);
    if (e > 0) {
        if (e >= 32) return 0;
        {
        uint32_t m = (hi << 11) | 0x80000000 | (lo >> 21);
        m = m >> e;
        if ((int32_t)hi < 0) m = -m;
        return m;
        }
    }
    return ~((int32_t)hi >> 31) + 0x80000000;
}
