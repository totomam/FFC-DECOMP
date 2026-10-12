#include "ffc/types.h"

void func_0208f09c(uint8_t *ctx, const uint8_t *key, uint32_t keylen) {
    uint8_t *s;
    int i;
    uint32_t kl;
    uint32_t j;
    uint8_t k;

    if (keylen > 0x10) {
        keylen = 0x10;
    }
    s = ctx + 4;
    ctx[0] = 0;
    ctx[1] = 0;

    for (i = 0; i < 0x100; i++) {
        s[i] = (uint8_t)i;
    }
    kl = keylen & 0xff;
    j = 0;
    k = 0;
    for (i = 0; i < 0x100; i++) {
        uint8_t si = s[i];
        j = (uint8_t)(j + (key[k] + si));
        k = (uint8_t)(k + 1);
        if (k == kl) {
            k = 0;
        }
        s[i] = s[j];
        s[j] = si;
    }
}
