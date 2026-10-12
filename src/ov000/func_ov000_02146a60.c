#include "ffc/types.h"

extern uint64_t func_020882cc(uint32_t x);
extern void func_ov000_02146860(uint8_t *src, uint8_t *dst);
extern void func_ov000_02146904(uint8_t *dst, int n);

#define BSWAP16(x) ((uint16_t)((((x) >> 8) | ((x) << 8))))

void func_ov000_02146a60(uint8_t *p, uint8_t *s, uint8_t *d)
{
    uint64_t v;

    d[8] = 3;
    v = func_020882cc(3);
    *(uint32_t *)(d + 0x10) = (((uint32_t)(v >> 32)) << 16) | ((uint32_t)v >> 16);

    *(uint32_t *)(d + 0x14) =
        ((uint32_t)BSWAP16(*(uint16_t *)(p + 0x10)) << 16) |
        (uint32_t)BSWAP16(*(uint16_t *)(p + 0x12));

    *(uint16_t *)(d + 0x18) = BSWAP16(*(uint16_t *)s);

    *(uint32_t *)(d + 0x1c) =
        ((uint32_t)BSWAP16(*(uint16_t *)(p + 0xc)) << 16) |
        (uint32_t)BSWAP16(*(uint16_t *)(p + 0xe));

    *(uint32_t *)(d + 0x24) =
        (((uint32_t)BSWAP16(*(uint16_t *)(s + 4)) << 16) |
         (uint32_t)BSWAP16(*(uint16_t *)(s + 6))) + 1;

    func_ov000_02146860(s, d);
    func_ov000_02146904(d, 0x12);
}
