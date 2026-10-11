#include "ffc/types.h"

void func_ov007_021c0128(uint8_t *s, uint32_t v, const uint8_t *src)
{
    uint32_t i;
    uint8_t *d;

    d = s;
    *(uint32_t *)(d + 0x28) = v;
    d += 0x2c;
    i = 0x19;
    do {
        *d = *src;
        d++;
        src++;
        i--;
    } while (i != 0);
    *(uint32_t *)(s + 0x24) = 1;
}
