/* cflags: -nothumb */
#include "ffc/types.h"

void func_020872d8(uint32_t *s, uint32_t a, uint32_t b)
{
    volatile uint32_t *v = s;
    a += 4;
    v[0x10] = a;
    v[0x11] = b;
    b -= 0x40;
    if (b & 4) {
        b -= 4;
    }
    v[0x0e] = b;
    v[0] = (a & 1) ? 0x3f : 0x1f;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
    v[4] = 0;
    v[5] = 0;
    v[6] = 0;
    v[7] = 0;
    v[8] = 0;
    v[9] = 0;
    v[10] = 0;
    v[11] = 0;
    v[12] = 0;
    v[13] = 0;
    v[15] = 0;
}
