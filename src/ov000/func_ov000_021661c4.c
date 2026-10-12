#include "ffc/types.h"

int func_ov000_021661c4(int8_t *s, int len, uint16_t *out) {
    int c, d, e;
    if (len == 0) {
        *out = 0x3f;
        return 0;
    }
    c = s[0];
    if ((uint8_t)c <= 0x7f) {
        *out = c;
        return 1;
    }
    if (((uint8_t)c & 0xe0) == 0xc0) {
        if (len < 2) {
            *out = 0x3f;
            return 0;
        }
        d = s[1];
        if (((uint8_t)d & 0xc0) == 0x80) {
            *out = ((c & 0x1f) << 6) + (d & 0x3f);
            return 2;
        }
    } else if (((uint8_t)c & 0xf0) == 0xe0) {
        if (len < 3) {
            *out = 0x3f;
            return 0;
        }
        d = s[1];
        if (((uint8_t)d & 0xc0) == 0x80) {
            e = s[2];
            if (((uint8_t)e & 0xc0) == 0x80) {
                *out = ((c & 0xf) << 12) + ((d & 0x3f) << 6) + (e & 0x3f);
                return 3;
            }
        }
    }
    *out = 0x3f;
    return 1;
}
