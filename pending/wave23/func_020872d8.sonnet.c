/* cflags: -nothumb */
#include "ffc/types.h"

void func_020872d8(uint32_t *s, uint32_t a, uint32_t b)
{
    uint32_t c = a + 4;
    *(volatile uint32_t *)&s[0x10] = c;
    *(volatile uint32_t *)&s[0x11] = b;
    c &= 1;
    b -= 0x40;
    if (b & 4) {
        b -= 4;
    }
    s[0x0e] = b;
    s[0] = c ? 0x3f : 0x1f;
    s[1] = 0;
    s[2] = 0;
    s[3] = 0;
    s[4] = 0;
    s[5] = 0;
    s[6] = 0;
    s[7] = 0;
    s[8] = 0;
    s[9] = 0;
    s[10] = 0;
    s[11] = 0;
    s[12] = 0;
    s[13] = 0;
    s[15] = 0;
}
