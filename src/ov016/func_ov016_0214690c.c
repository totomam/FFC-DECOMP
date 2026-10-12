#include "ffc/types.h"

extern void func_ov016_0214550c(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov016_02145358(uint32_t a, uint32_t b);

void func_ov016_0214690c(uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t k = 28;
    uint32_t acc = 0;
    const uint32_t *p = (const uint32_t *)func_ov016_0214550c;

    do {
        uint32_t x = *p;
        acc ^= (x >> k) | (x << (32 - k));
        p++;
        k--;
    } while (k != 0);

    if (acc == 0x786385f) {
        func_ov016_0214550c(a, b, c);
    } else {
        func_ov016_02145358(0, 0);
    }
}
