#include "ffc/types.h"

int func_ov000_0215349c(uint8_t *p)
{
    uint32_t v;
    uint32_t q;
    int32_t b;

    v = p[0x22];
    if (v == 0) {
        v = p[0x15];
    }
    q = p[0x16];
    v = (uint8_t)v;
    if (q < 10) {
        uint32_t t = p[0x14];
        if (t == 3) b = 0xffff3864;
        else if (t == 4) b = 0xffff3800;
        else b = 0xffff379c;
    } else if (q < 13) {
        b = 0xffff34e0;
    } else {
        q = *(int32_t *)(p + 0x10);
        if (q == 0) b = 0xffff3cb0;
        else if ((((uint32_t)p[0xb] << 24) >> 28) == 1) b = 0xffff3224;
        else if (q == (uint32_t)-1) b = 0xffff347c;
        else if (q == (uint32_t)-2) b = 0xffff3418;
        else if (q == (uint32_t)-3) b = 0xffff33b4;
        else if (q == (uint32_t)-4) b = 0xffff30f8;
        else if (q == (uint32_t)-5) b = 0xffff3094;
        else if (q == (uint32_t)-6) b = 0xffff3030;
        else goto done;
    }
    q = b - v;
done:
    return q;
}
