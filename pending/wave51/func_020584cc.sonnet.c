#include "ffc/types.h"

void func_020584cc(uint16_t *src, uint16_t *dst, int count, int k, uint16_t c)
{
    if (count != 0) {
        int gk = ((c & 0x3e0) >> 5) * k;
        int bk = (c & 0x1f) * k;
        int rk = ((c & 0x7c00) >> 10) * k;
        int a = 32 - k;
        do {
            int x = *src;
            int rr = ((((x & 0x7c00) >> 10) * a + rk) >> 5);
            uint32_t rf = (rr << 26) >> 16;
            uint32_t bf = (((x & 0x1f) * a + bk) << 11) >> 16;
            uint32_t gf = (((x & 0x3e0) >> 5) * a + gk) & ~0x1fu;
            *dst = (uint16_t)(bf | (gf & 0xffff) | rf);
            src++;
            dst++;
            count--;
        } while (count != 0);
    }
}
