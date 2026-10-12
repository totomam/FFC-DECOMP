#include "ffc/types.h"

extern void *func_02052d90(void *mar, uint32_t index);

void func_ov014_02147ec8(uint8_t *self, int32_t a, int32_t b)
{
    uint8_t *base = (uint8_t *)func_02052d90(*(void **)(self + 8), *(uint32_t *)(self + 0xc));
    uint8_t *base2 = base + *(uint32_t *)(base + *(uint32_t *)(base + 8));
    uint16_t *src = (uint16_t *)(base2 + *(uint32_t *)(base2 + 0x2c));
    int32_t ar = a & 0x1f;
    int32_t ag = (a >> 5) & 0x1f;
    int32_t ab = (a >> 10) & 0x1f;
    int32_t dr = (b & 0x1f) - ar;
    int32_t dg = ((b >> 5) & 0x1f) - ag;
    int32_t db = ((b >> 10) & 0x1f) - ab;
    int32_t i;

    for (i = 0; i < 16; i++) {
        int32_t s = src[i];
        int32_t r = ar + ((dr * (s & 0x1f) * 0x84) >> 12);
        int32_t g = ag + ((dg * ((s >> 5) & 0x1f) * 0x84) >> 12);
        int32_t bl = ab + ((db * ((s >> 10) & 0x1f) * 0x84) >> 12);
        int32_t rc = (r < 0x1f) ? r : 0x1f;
        int32_t gc = (g < 0x1f) ? g : 0x1f;
        int32_t bc = (bl < 0x1f) ? bl : 0x1f;
        if (rc < 0) r = 0; else if (r >= 0x1f) r = 0x1f;
        if (gc < 0) g = 0; else if (g >= 0x1f) g = 0x1f;
        if (bc < 0) bl = 0; else if (bl >= 0x1f) bl = 0x1f;
        ((uint16_t *)*(uint8_t **)(self + 0x18))[i] = (uint16_t)((bl << 10) | (g << 5) | r);
    }
}
