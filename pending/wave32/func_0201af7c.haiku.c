#include "ffc/types.h"

void func_0201af7c(uint8_t *p, int32_t idx, uint8_t *d)
{
    uint8_t *dst = d;
    uint8_t *s = *(uint8_t **)(p + 0x2c) + idx * 0x2c;
    uint16_t *src = (uint16_t *)s;
    uint16_t *dp = (uint16_t *)dst;
    uint32_t n = 9;
    do {
        *dp = *src;
        src++;
        dp++;
    } while (--n);
    *(uint32_t *)(dst + 0x14) = *(uint32_t *)(s + 0x14);
    *(uint32_t *)(dst + 0x18) = *(uint32_t *)(s + 0x18);
    ((uint32_t *)(dst + 0x1c))[0] = ((uint32_t *)(s + 0x1c))[0];
    ((uint32_t *)(dst + 0x1c))[1] = ((uint32_t *)(s + 0x1c))[1];
    ((uint32_t *)(dst + 0x24))[0] = ((uint32_t *)(s + 0x24))[0];
    ((uint32_t *)(dst + 0x24))[1] = ((uint32_t *)(s + 0x24))[1];
}
