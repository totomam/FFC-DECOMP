#include "ffc/types.h"

void func_0203adc8(uint32_t *d, uint32_t *a, uint32_t *b, uint8_t flag, uint8_t s0, uint8_t s4, uint8_t s8, uint8_t sc, uint32_t sw, uint8_t s14)
{
    uint16_t *dp;
    uint16_t *sh;
    uint32_t n;

    if (a != 0) {
        d[63] = a[0];
        d[65] = a[2];
        d[67] = a[4];
        d[69] = a[6];
        d[71] = a[8];
        d[73] = a[10];
        d[74] = a[11];
        sh = (uint16_t *)((uint8_t *)a + 0x30);
        dp = (uint16_t *)((uint8_t *)d + 0x12c);
        n = 17;
        do {
            *dp = *sh;
            sh++;
            dp++;
        } while (--n);
        d[84] = a[21];
        d[85] = a[22];
        d[86] = a[23];
        d[61] = (uint32_t)&d[63];
    }
    if (b != 0) {
        d[87] = b[0];
        d[89] = b[2];
        d[91] = b[4];
        d[93] = b[6];
        d[95] = b[8];
        d[97] = b[10];
        d[98] = b[11];
        sh = (uint16_t *)((uint8_t *)b + 0x30);
        dp = (uint16_t *)((uint8_t *)d + 0x18c);
        n = 17;
        do {
            *dp = *sh;
            sh++;
            dp++;
        } while (--n);
        d[108] = b[21];
        d[109] = b[22];
        d[110] = b[23];
        d[62] = (uint32_t)&d[87];
    }
    {
        uint8_t *db = (uint8_t *)d;
        db[0x1bc] = flag;
        db[0x1bd] = s0;
        db[0x1be] = s4;
        db[0x1bf] = s8;
        db[0x1c0] = sc;
        d[0x71] = sw;
        db[0x1c8] = s14;
    }
}
