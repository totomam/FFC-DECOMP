#include "ffc/types.h"
void func_02083ffc(uint8_t *out, uint32_t poly) {
    uint32_t t, x, i, j;
    uint32_t m = 0x80;
    uint32_t hi = 0x80;
    hi += 0x80;
    i = 0;
    for (; i < hi; i++) {
        x = i;
        for (j = 0; j < 8; j++) {
            t = x;
            if (t & m) x = (t << 1) ^ poly; else x = x << 1;
        }
        out[i] = (uint8_t)x;
    }
}
