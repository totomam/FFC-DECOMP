#include "ffc/types.h"

uint32_t func_ov000_0214992c(uint8_t *p, int mode)
{
    uint8_t *s = p;
    uint32_t b0 = s[0];
    uint32_t b1 = s[1];
    int a = b0 * 10 + b1 - 0x210;
    int x;
    int c;
    int e;

    s += 2;
    if (mode == 0x17) {
        if ((uint32_t)a < 0x32) {
            x = a + 0x7d0;
        } else {
            x = a + 0x76c;
        }
    } else {
        x = 100 * a + (s[0] * 10 + s[1] - 0x210);
        s += 2;
    }

    c = s[0] * 10 + s[1] - 0x210;
    e = s[2] * 10 + s[3] - 0x210;
    return ((uint32_t)x << 16) + ((uint32_t)c << 8) + (uint32_t)e;
}
