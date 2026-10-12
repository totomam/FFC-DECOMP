#include "ffc/types.h"

extern void func_ov001_02184284(uint8_t *p, uint8_t *q);
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);

void func_ov001_02184340(uint8_t *key, uint32_t keylen, uint8_t *data, int32_t n)
{
    uint8_t s[256];
    int16_t i;
    int16_t idx;
    uint8_t j = 0;
    uint8_t k = 0;

    for (i = 0; i < 256; i++) {
        s[i] = (uint8_t)i;
    }

    for (i = 0; i < 256; i++) {
        j = (uint8_t)(func_0209a76c(j + 1, keylen) >> 32);
        k = (uint8_t)((k + (s[i] + key[j])) % 256);
        func_ov001_02184284(&s[i], &s[k]);
    }

    for (idx = 0; idx < n; idx++) {
        j = (uint8_t)((j + data[idx] + 1) % 256);
        k = (uint8_t)((k + s[j]) % 256);
        func_ov001_02184284(&s[j], &s[k]);
        data[idx] ^= s[(s[j] + s[k]) % 256];
    }
}
