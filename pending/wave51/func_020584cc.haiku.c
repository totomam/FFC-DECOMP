#include "ffc/types.h"

void func_020584cc(uint16_t *src, uint16_t *dst, uint32_t count, uint32_t k, uint16_t c)
{
    if (count != 0) {
        uint32_t gk = ((c & 0x3e0) >> 5) * k;
        uint32_t bk = (c & 0x1f) * k;
        uint32_t rk = ((c & 0x7c00) >> 10) * k;
        uint32_t a = 32 - k;
        do {
            uint32_t x = *src;
            uint32_t rr = ((((x & 0x7c00) >> 10) * a + rk) >> 5);
            uint32_t rf = (rr << 26) >> 16;
            uint32_t gf = (((x & 0x3e0) >> 5) * a + gk) & ~0x1fu;
            uint32_t bf = (((x & 0x1f) * a + bk) << 11) >> 16;
            *dst = (uint16_t)(bf | (gf & 0xffff) | rf);
            src++;
            dst++;
            count--;
        } while (count != 0);
    }
}
