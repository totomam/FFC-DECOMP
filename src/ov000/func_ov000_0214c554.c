#include "ffc/types.h"

void func_ov000_0214c554(uint8_t *ctx, const uint8_t *key, int32_t keylen)
{
    uint8_t *s;
    uint8_t j, k, t, si;
    int32_t i;
    int32_t n;

    ctx[0] = 0;
    ctx[1] = 0;
    s = ctx + 2;
    for (n = 0; n < 256; n++) {
        s[n] = (uint8_t)n;
    }

    k = 0;
    j = 0;
    for (i = 0; i < 256; i++) {
        si = s[i];
        j = (uint8_t)(j + (uint8_t)(si + key[k]));
        t = s[j];
        s[i] = t;
        s[j] = si;
        k = (uint8_t)(k + 1);
        if (k >= keylen) {
            k = 0;
        }
    }
}
