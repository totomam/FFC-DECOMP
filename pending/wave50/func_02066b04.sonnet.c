#include "ffc/types.h"
typedef struct { int32_t x0, y0, x1, y1, p0, p1, base; } Ent;
typedef struct { uint8_t pad[4]; uint8_t *data; uint8_t pad2[0xc]; uint32_t stride; } Gfx;
typedef struct { uint8_t pad[0x2c]; Ent *ents; volatile uint32_t count; uint8_t pad2[0x14]; Gfx *gfx; } Obj;

int func_02066b04(Obj *o, int x, int y) {
    uint32_t i;
    Ent *ents = o->ents;
    for (i = 0; i < o->count; i++) {
        Ent *e = &ents[i];
        if (e->x0 <= x && x < e->x1 && e->y0 <= y && y < e->y1) {
            Ent *f = &o->ents[i];
            Gfx *g = o->gfx;
            int bx = f->x0;
            x -= bx;
            y -= f->y0;
            int idx = f->base + (x >> 3) + ((f->x1 - bx) >> 3) * (y >> 3);
            uint32_t w = *(uint32_t *)(g->data + idx * g->stride + ((y & 7) << 2));
            return (w >> ((x & 7) << 2)) & 0xf;
        }
    }
    return 0;
}
