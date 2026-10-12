#include "ffc/types.h"

extern int32_t func_02092a04(uint8_t *a, uint8_t *b, uint16_t c);
extern void func_ov000_02151cd0(uint8_t a, uint8_t *p, uint32_t b, uint8_t *q);
extern int32_t func_ov000_02151d28(int32_t r, uint8_t *p, uint32_t b, uint8_t *q);

int32_t func_ov000_02151bb8(uint8_t a, uint8_t *p, uint32_t b, uint8_t *q)
{
    uint8_t *b1, *pp, *b2;
    int32_t i, ret;
    uint8_t v4;
    int32_t off, n;
    ret = -1;
    i = 0;
    n = q[0x14c2];
    if (n > 0) {
        v4 = p[4];
        pp = p + 0xc;
        b1 = q + 0xc2c;
        b2 = q + 0xc24;
        do {
            off = i * 0xc0;
            uint8_t *e = b2 + off;
            int f2 = 0, f1 = 0, f3 = 0, f4 = 0, f5 = 0;
            if (v4 == b2[off]) { if (p[5] == e[1]) f1 = 1; }
            if (f1) { if (p[6] == e[2]) f2 = 1; }
            if (f2) { if (p[7] == e[3]) f3 = 1; }
            if (f3) { if (p[8] == e[4]) f4 = 1; }
            if (f4) { if (p[9] == e[5]) f5 = 1; }
            if (f5 && func_02092a04(pp, b1 + off, *(uint16_t *)(p + 0xa)) == 0) {
                ret = i;
                break;
            }
            i++;
        } while (i < n);
    }
    if (ret == -1) {
        func_ov000_02151cd0(a, p, b, q);
        if (q[0x14c2] < 10) q[0x14c2]++;
        ret = 10;
    } else {
        ret = func_ov000_02151d28(ret, p, b, q);
    }
    return ret;
}
