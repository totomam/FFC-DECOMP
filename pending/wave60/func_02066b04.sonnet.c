/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { int32_t x0, y0, x1, y1; int32_t p10, p14; int32_t base; } Ent;
typedef struct { int32_t a; uint8_t *data; int32_t b[3]; int32_t stride; } Tile;
typedef struct { uint8_t pad[0x2c]; Ent *ents; uint32_t n; uint8_t pad2[0x14]; Tile *tile; } Map;
uint32_t func_02066b04(Map *m, int32_t x, int32_t y) {
    uint32_t i;
    for (i = 0; i < m->n; i++) {
        Ent *e = (Ent *)((uint8_t *)m->ents + i * 0x1c);
        if (e->x0 <= x && x < e->x1 && e->y0 <= y && y < e->y1) {
            Ent *f = (Ent *)((uint8_t *)m->ents + i * 0x1c);
            Tile *t = m->tile;
            int32_t dx = x - f->x0, dy = y - f->y0;
            int32_t idx = f->base + (dx >> 3) + (dy >> 3) * ((f->x1 - f->x0) >> 3);
            uint32_t v = *(uint32_t *)(t->data + idx * t->stride + ((dy & 7) << 2));
            return (v >> ((dx & 7) << 2)) & 0xf;
        }
    }
    return 0;
}
