#include "ffc/types.h"

typedef struct {
    int32_t x0;
    int32_t y0;
    int32_t x1;
    int32_t y1;
    int32_t pad0;
    int32_t pad1;
    int32_t tile_base;
} Ent;

typedef struct {
    uint8_t pad[4];
    uint32_t data;
    uint8_t pad2[0x10];
    uint32_t stride;
} Gfx;

typedef struct {
    uint8_t pad[0x2c];
    Ent *ents;
    uint32_t count;
    uint8_t pad2[0x14];
    Gfx *gfx;
} Obj;

int func_02066b04(Obj *o, int x, int y) {
    uint32_t i = 0;
    Ent *ents;
    Ent *e;
    if (o->count == 0) {
        return 0;
    }
    ents = o->ents;
    do {
        e = ents + i;
        if (e->x0 <= x && x < e->x1 && e->y0 <= y && y < e->y1) {
            Gfx *g = o->gfx;
            int32_t dx = x - o->ents[i].x0;
            int32_t dy = y - o->ents[i].y0;
            int32_t idx = o->ents[i].tile_base + (dx >> 3) +
                          ((o->ents[i].x1 - o->ents[i].x0) >> 3) * (dy >> 3);
            uint32_t word = *(uint32_t *)((uint8_t *)g->data + idx * g->stride + ((dy & 7) << 2));
            return (int)((word >> ((dx & 7) << 2)) & 0xf);
        }
        i++;
    } while (i < o->count);
    return 0;
}
