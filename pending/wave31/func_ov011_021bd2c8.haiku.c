#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov011_021bd2c8(uint8_t *dst, uint8_t *src)
{
    uint16_t *d16 = (uint16_t *)(dst + 0x10);
    uint16_t *s16 = (uint16_t *)(src + 4);
    uint32_t i;

    for (i = 0x15; i != 0; i--) {
        *d16++ = *s16++;
    }
    *(uint32_t *)(dst + 0x3c) = *(uint32_t *)(src + 0x30);
    {
        uint8_t *d8 = dst + 0x40;
        uint8_t *s8 = src + 0x34;
        for (i = 0x14; i != 0; i--) {
            *d8++ = *s8++;
        }
    }
    {
        Pair *ps = (Pair *)(src + 0x48);
        Pair *pd = (Pair *)(dst + 0x54);
        *pd++ = *ps++;
        *pd++ = *ps++;
    }
}
