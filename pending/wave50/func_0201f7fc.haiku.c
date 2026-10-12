#include "ffc/types.h"

void func_0201f7fc(uint8_t *a, uint32_t idx, uint8_t *out)
{
    uint8_t *e = (uint8_t *)(*(uint8_t **)(a + 0x90)) + (idx << 6);
    uint32_t n = 9;
    uint16_t *s;
    uint16_t *d;
    uint32_t *w;
    uint32_t *wd;

    *(uint32_t *)out = *(uint32_t *)e;
    out[4] = e[4];
    {
        uint32_t *s8 = (uint32_t *)(e + 8);
        uint32_t *d8 = (uint32_t *)(out + 8);
        uint32_t x = s8[0];
        uint32_t y = s8[1];
        d8[0] = x;
        d8[1] = y;
    }
    s = (uint16_t *)(e + 0x10);
    d = (uint16_t *)(out + 0x10);
    do {
        *d = *s;
        s++;
        d++;
        n--;
    } while (n != 0);
    w = (uint32_t *)(e + 0x24);
    wd = (uint32_t *)(out + 0x24);
    wd[0] = w[0];
    wd[1] = w[1];
    wd[2] = w[2];
    e = e + 0x30;
    out = out + 0x30;
    {
        uint32_t *q = (uint32_t *)e;
        uint32_t *r = (uint32_t *)out;
        uint32_t p0 = q[0];
        uint32_t p1 = q[1];
        r[0] = p0;
        r[1] = p1;
        p0 = q[2];
        p1 = q[3];
        r[2] = p0;
        r[3] = p1;
    }
}
