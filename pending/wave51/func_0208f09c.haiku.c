#include "ffc/types.h"

void func_0208f09c(uint8_t *ctx, const uint8_t *key, uint32_t keylen) {
    uint8_t *s;
    int i;
    uint32_t j;
    uint8_t k;
    uint8_t kl;

    if (keylen > 0x10) {
        keylen = 0x10;
    }
    ctx[0] = 0;
    ctx[1] = 0;
    s = ctx + 4;
    for (i = 0; i < 0x100; i++) {
        s[i] = (uint8_t)i;
    }
    kl = (uint8_t)keylen;
    j = 0;
    k = 0;
    for (i = 0; i < 0x100; i++) {
        uint8_t kb = key[k];
        uint8_t si = s[i];
        uint8_t sj;
        k = (uint8_t)(k + 1);
        j = (uint8_t)(j + (kb + si));
        if (k == kl) {
            k = 0;
        }
        sj = s[j];
        s[i] = sj;
        s[j] = si;
    }
}
