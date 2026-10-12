#include "ffc/types.h"

typedef struct { uint32_t w[4]; } Blk16;

void func_0201f1f0(uint8_t *self, uint32_t idx, uint8_t *dst) {
    uint8_t *src = *(uint8_t **)(self + 0x54) + idx * 0x58;
    uint16_t *s16 = (uint16_t *)(src + 4);
    uint16_t *d16 = (uint16_t *)(dst + 4);
    uint32_t i = 0x15;
    do {
        *d16++ = *s16++;
    } while (--i != 0);
    *(uint32_t *)(dst + 0x30) = *(uint32_t *)(src + 0x30);
    {
        uint8_t *s8 = src + 0x34;
        uint8_t *d8 = dst + 0x34;
        i = 0x14;
        do {
            *d8++ = *s8++;
        } while (--i != 0);
    }
    *(Blk16 *)(dst + 0x48) = *(Blk16 *)(src + 0x48);
}
