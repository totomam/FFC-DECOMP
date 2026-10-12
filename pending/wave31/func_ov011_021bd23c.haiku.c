#include "ffc/types.h"

extern uint32_t data_020ae664;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair8;

void func_ov011_021bd23c(uint32_t *dst, const uint8_t *src) {
    uint16_t *d16;
    const uint16_t *s16;
    uint32_t i;
    uint8_t *d8;
    const uint8_t *s8;

    s16 = (const uint16_t *)(src + 0x10);
    d16 = (uint16_t *)((uint8_t *)dst + 4);
    dst[0] = (uint32_t)&data_020ae664;
    for (i = 0x15; i != 0; i--) {
        *d16++ = *s16++;
    }
    dst[12] = *(const uint32_t *)(src + 0x3c);
    s8 = src + 0x40;
    d8 = (uint8_t *)dst + 0x34;
    for (i = 0x14; i != 0; i--) {
        *d8++ = *s8++;
    }
    *(Pair8 *)((uint8_t *)dst + 0x48) = *(const Pair8 *)(src + 0x54);
    *(Pair8 *)((uint8_t *)dst + 0x50) = *(const Pair8 *)(src + 0x5c);
}
