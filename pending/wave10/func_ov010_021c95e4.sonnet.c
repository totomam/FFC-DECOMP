#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } P16;

void func_ov010_021c95e4(uint8_t *dst, uint8_t *src) {
    uint32_t n;
    uint16_t *d16;
    uint16_t *s16;
    s16 = (uint16_t *)(src + 4);
    d16 = (uint16_t *)(dst + 0x224);
    n = 0x15;
    do {
        uint16_t v = *s16;
        s16++;
        *d16 = v;
        d16++;
        n--;
    } while (n != 0);
    *(uint32_t *)(dst + 0x250) = *(uint32_t *)(src + 0x30);
    {
        uint8_t *d8;
        uint8_t *s8;
        s8 = src + 0x34;
        d8 = dst + 0x254;
        n = 0x14;
        do {
            *d8++ = *s8++;
            n--;
        } while (n != 0);
    }
    *(P16 *)(dst + 0x268) = *(P16 *)(src + 0x48);
}
