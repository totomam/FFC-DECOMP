#include "ffc/types.h"

extern int func_ov001_0218554c(uint8_t *p, const uint8_t *key, uint32_t keylen, uint32_t a3);
extern uint32_t func_ov001_021854d8(uint8_t *p, uint32_t n, const uint8_t *key, uint32_t keylen, uint8_t *x, uint32_t *y);

int func_ov001_02185588(uint8_t *p, const uint8_t *key, uint32_t keylen, uint32_t a3)
{
    int i;
    uint8_t x;
    uint32_t y;
    uint32_t j;
    uint8_t t;

    if (keylen < 1) {
        return func_ov001_0218554c(p, key, keylen, a3);
    }

    for (i = 0; i < 256; i++) {
        p[i] = (uint8_t)i;
    }

    y = 0;
    x = 0;
    for (i = 255; i >= 0; i--) {
        j = func_ov001_021854d8(p, i, key, keylen, &x, &y);
        t = p[i];
        p[i] = p[j];
        p[j] = t;
    }

    p[256] = p[1];
    p[257] = p[3];
    p[258] = p[5];
    p[259] = p[7];
    p[260] = p[x];
    x = 0;
    return 0;
}
