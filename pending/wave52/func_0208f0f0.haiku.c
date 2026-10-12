#include "ffc/types.h"

void func_0208f0f0(uint32_t *p, uint8_t *key, uint32_t keylen) {
    int32_t i;
    uint32_t j, k, n, t;
    uint32_t *s;

    n = keylen;
    if (n > 0x10) {
        n = 0x10;
    }
    s = p + 2;
    p[0] = 0;
    p[1] = 0;
    for (i = 0; i < 0x100; i++) {
        s[i] = i;
    }
    j = 0;
    k = 0;
    for (i = 0; i < 0x100; i++) {
        t = key[k];
        t = s[i] + t;
        j = (uint8_t)(j + t);
        k++;
        if (k == n) {
            k = 0;
        }
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
    for (i = 0; i < 0x100; i++) {
        s[i] = s[i] << 24;
    }
}
