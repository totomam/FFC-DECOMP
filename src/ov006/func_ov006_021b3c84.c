#include "ffc/types.h"

typedef struct Ent {
    uint32_t w;
    uint16_t h;
    uint16_t pad;
} Ent;

typedef struct Ctx {
    uint32_t a;
    uint32_t b;
    Ent *tbl;
    uint8_t n;
} Ctx;

void func_ov006_021b3c84(Ctx *c, int idx, uint32_t x, uint32_t y) {
    Ent *b = c->tbl;
    if (idx >= 0) {
        uint8_t *p = (uint8_t *)b;
        uint32_t w = *(uint32_t *)(p + idx * 8);
        w = (w & 0xfffff3ffu) | (x << 10);
        *(uint32_t *)(p + idx * 8) = w;
        p += 4;
        {
            uint16_t h = *(uint16_t *)(p + idx * 8);
            h = (h & 0xffff0fffu) | (y << 12);
            *(uint16_t *)(p + idx * 8) = h;
        }
        return;
    }
    {
        
        for (idx = 0; idx < c->n; idx++) {
            Ent *t = &b[idx];
            t->w = (t->w & 0xfffff3ffu) | (x << 10);
            t->h = (t->h & 0xffff0fffu) | (y << 12);
        }
    }
}
