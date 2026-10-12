#include "ffc/types.h"

typedef struct { uint32_t w[4]; } Blk16;

void func_0201f1f0(uint8_t *self, uint32_t idx, uint8_t *dst) {
    uint32_t i, j;
    uint8_t *src = *(uint8_t **)(self + 0x54) + idx * 0x58;
    uint8_t *d = dst + 4;
    uint8_t *s = src + 4;
    i = 0x15;
    do {
        *(uint16_t *)d = *(uint16_t *)s;
        s += 2; d += 2;
    } while (--i != 0);
    *(uint32_t *)(dst + 0x30) = *(uint32_t *)(src + 0x30);
    s = src + 0x34;
    d = dst + 0x34;
    j = 0x14;
    do {
        *d++ = *s++;
    } while (--j != 0);
    *(Blk16 *)(dst + 0x48) = *(Blk16 *)(src + 0x48);
}
