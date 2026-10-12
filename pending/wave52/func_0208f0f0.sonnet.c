#include "ffc/types.h"

void func_0208f0f0(uint32_t *p, uint8_t *key, uint32_t keylen) {
    uint32_t *s; int32_t j; uint32_t k, t; int32_t i;

    if (keylen > 0x10) {
        keylen = 0x10;
    }
    j = 0;
    p[0] = 0;
    p[1] = 0;
    s = p + 2;
    for (j = 0; j < 0x100; j++) {
        s[j] = j;
    }
    j = 0;
    k = 0;
    for (i = 0; i < 0x100; i++) {
        t = s[i];
        j = (uint8_t)(j + (t + key[k]));
        k++;
        if (k == keylen) {
            k = 0;
        }
        s[i] = s[j];
        s[j] = t;
    }
    for (i = 0; i < 0x100; i++) {
        s[i] = s[i] << 24;
    }
}
