#include "ffc/types.h"

int func_0208a564(uint8_t *p, uint8_t *out, uint32_t *idx) {
    uint32_t i = idx[0];
    uint32_t j;
    uint32_t w;
    uint32_t off;
    uint8_t t;
    uint8_t *q;
    uint16_t *s;
    uint16_t *d;

    if (i >= *(uint32_t *)(p + 0x38)) {
        return 0;
    }
    for (;;) {
        w = *(uint32_t *)(p + 0x3c + i * 4);
        out[0] = (uint8_t)w;
        off = w >> 8;
        t = out[0];
        if (t > 0x10) {
            if (t == 0x11) {
                q = p + off;
                j = idx[1];
                if (j < 8 && q[j] != 0) {
                    s = (uint16_t *)(q + j * 12);
                    d = (uint16_t *)out;
                    d[0] = s[4];
                    d[1] = s[5];
                    d[2] = s[6];
                    d[3] = s[7];
                    d[4] = s[8];
                    d[5] = s[9];
                    idx[1] = j + 1;
                    idx[0] = i + 1;
                    return 1;
                }
            }
        } else if (t == 0x10) {
            q = p + off;
            j = idx[1];
            if (j < (uint32_t)(q[1] - q[0] + 1)) {
                s = (uint16_t *)(q + j * 12);
                d = (uint16_t *)out;
                d[0] = s[1];
                d[1] = s[2];
                d[2] = s[3];
                d[3] = s[4];
                d[4] = s[5];
                d[5] = s[6];
                idx[1] = j + 1;
                idx[0] = i + 1;
                return 1;
            }
        } else if (t <= 5) {
            switch (t) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                s = (uint16_t *)(p + off);
                d = (uint16_t *)out;
                d[1] = s[0];
                d[2] = s[1];
                d[3] = s[2];
                d[4] = s[3];
                d[5] = s[4];
                idx[0] = i + 1;
                return 1;
            default:
                break;
            }
        }
        idx[1] = 0;
        i++;
        idx[0] = i;
        if (i >= *(uint32_t *)(p + 0x38)) {
            return 0;
        }
    }
}
