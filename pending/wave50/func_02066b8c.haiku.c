#include "ffc/types.h"

typedef struct Elem {
    int32_t x0, y0, x1, y1, u0, u1, idx;
} Elem;

typedef struct Tex {
    int32_t a;
    uint8_t *base;
    uint8_t pad[0xc];
    int32_t stride;
} Tex;

typedef struct Ctx {
    uint8_t pad0[0x2c];
    Elem *elems;
    uint32_t count;
    uint8_t pad1[0x48 - 0x34];
    Tex *tex;
} Ctx;

void func_02066b8c(Ctx *self, int32_t x, int32_t y, uint32_t c) {
    uint32_t i;
    for (i = 0; i < self->count; i++) {
        Elem *e = &self->elems[i];
        int32_t x0 = e->x0;
        int32_t x1 = e->x1;
        if (x0 > x) continue;
        if (x >= x1) continue;
        if (e->y0 > y) continue;
        if (y >= e->y1) continue;
        {
            int32_t dx = x - x0;
            int32_t dy = y - e->y0;
            int32_t tx = dx >> 3;
            int32_t ty = dy >> 3;
            int32_t idx = e->idx + tx + ((x1 - x0) >> 3) * ty;
            Tex *t = self->tex;
            uint8_t *p = t->base + idx * t->stride;
            int32_t s = (dx & 7) << 2;
            uint32_t *w = (uint32_t *)(p + ((dy & 7) << 2));
            *w = (*w & ~(0xfu << s)) | (c << s);
        }
    }
}
