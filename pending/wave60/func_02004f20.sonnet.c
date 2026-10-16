/* cflags: -nothumb */
#include "ffc/types.h"
void func_02004f20(uint32_t *p, uint32_t v, uint32_t n)
{
    uint32_t b = n & ~0x1f;
    if (b != 0) {
        uint32_t *e = (uint32_t *)((uint8_t *)p + b);
        do {
            p[0] = v; p[1] = v; p[2] = v; p[3] = v;
            p[4] = v; p[5] = v; p[6] = v; p[7] = v;
            p += 8;
        } while (e > p);
    }
    if (n & 0x10) { p[0] = v; p[1] = v; p[2] = v; p[3] = v; p += 4; }
    if (n & 8) { p[0] = v; p[1] = v; p += 2; }
    if (n & 4) { p[0] = v; }
}
