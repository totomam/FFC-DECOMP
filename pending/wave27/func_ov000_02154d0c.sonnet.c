#include "ffc/types.h"

uint32_t func_ov000_02154d0c(int32_t a)
{
    int32_t k = 0x20;
    int32_t n = k - a;
    uint32_t x = k - 0x21;
    int32_t i = 0;
    if (n > 0) {
        do {
            i++;
            x <<= 1;
        } while (i < n);
    }
    {
        uint32_t m = 0xFF;
        m <<= 24;
        uint32_t t1 = (x << 24) & m;
        uint32_t t2 = (m >> 8) & (x << 8);
        uint32_t t3 = (m >> 16) & (x >> 8);
        uint32_t t4 = ((x >> 24) << 24) >> 24;
        return t1 | t2 | t3 | t4;
    }
}
