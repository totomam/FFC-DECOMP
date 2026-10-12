#include "ffc/types.h"

extern uint32_t data_020ae664;

typedef struct { uint32_t a; uint32_t b; } Pair8;

void func_ov011_021bd23c(uint32_t *dst, const uint8_t *src) {
    uint16_t *d16;
    const uint16_t *s16;
    uint8_t *d8;
    const uint8_t *s8;
    uint32_t i;
    uint32_t j;
    dst[0] = (uint32_t)&data_020ae664;
    s16 = (const uint16_t *)(src + 0x10);
    d16 = (uint16_t *)(dst + 1);
    for (i = 0x15; i != 0; i--) {
        uint16_t t = *s16++;
        *d16++ = t;
    }
    dst[12] = *(const uint32_t *)(src + 0x3c);
    s8 = src + 0x40;
    d8 = (uint8_t *)dst + 0x34;
    for (j = 0x14; j != 0; j--) {
        uint8_t t = *s8++;
        *d8++ = t;
    }
    *(Pair8 *)((uint8_t *)dst + 0x48) = *(const Pair8 *)(src + 0x54);
    *(Pair8 *)((uint8_t *)dst + 0x50) = *(const Pair8 *)(src + 0x5c);
}
