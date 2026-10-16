#include "ffc/types.h"
typedef struct { int32_t x0, y0, x1, y1; int32_t a, b; int32_t base; } Ent;
typedef struct { int32_t p0; uint8_t *data; int32_t p8, pc, p10; int32_t stride; } Buf;
void func_02066b8c(uint8_t *o, int32_t x, int32_t y, uint32_t v) {
    uint32_t i;
    for (i = 0; i < *(uint32_t*)(o + 0x30); i++) {
        volatile Ent *e = (volatile Ent*)(*(uint8_t**)(o + 0x2c)) + i;
        int32_t x0 = e->x0;
        int32_t x1 = e->x1;
        if (x0 > x) continue;
        if (x >= x1) continue;
        if (e->y0 > y) continue;
        if (y >= e->y1) continue;
        {
            int32_t ty = y - e->y0;
            int32_t tx = x - e->x0;
            Buf *b = *(Buf**)(o + 0x48);
            uint8_t *d = b->data;
            int32_t idx = e->base + (tx >> 3) + (ty >> 3) * ((x1 - x0) >> 3);
            uint32_t *w = (uint32_t*)(d + idx * b->stride + ((ty & 7) << 2));
            uint32_t sh = (tx & 7) << 2;
            *w = (*w & ~(0xf << sh)) | (v << sh);
        }
    }
}
