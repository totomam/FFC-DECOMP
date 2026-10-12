#include "ffc/types.h"

int func_ov000_021661c4(int8_t *s, int len, uint16_t *out) {
    int i;
    int c;
    uint32_t b;
    uint32_t b1;
    uint32_t b2;
    int8_t *p;
    uint16_t *o;

    p = s;
    o = out;
    if (len == 0) {
        *o = 0x3f;
        return 0;
    }
    i = 0;
    c = p[i];
    b = (uint8_t)c;
    if (b <= 0x7f) {
        *o = c;
        return 1;
    }
    if ((b & 0xe0) == 0xc0) {
        if (len < 2) {
            *o = 0x3f;
            return 0;
        }
        i = 1;
        b1 = (uint8_t)p[i];
        if ((b1 & 0xc0) == 0x80) {
            *o = ((c << 6) & 0x7c0) + (b1 & 0x3f);
            return 2;
        }
    } else if ((b & 0xf0) == 0xe0) {
        if (len < 3) {
            *o = 0x3f;
            return 0;
        }
        i = 1;
        b1 = (uint8_t)p[i];
        if ((b1 & 0xc0) == 0x80) {
            i = 2;
            b2 = (uint8_t)p[i];
            if ((b2 & 0xc0) == 0x80) {
                *o = ((b & 0x0f) << 12) + ((b1 & 0x3f) << 6) + (b2 & 0x3f);
                return 3;
            }
        }
    }
    *o = 0x3f;
    return 1;
}
