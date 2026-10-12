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
    Ent *base = c->tbl;
    Ent *t;
    uint32_t i;
    if (idx >= 0) {
        t = base + idx;
        t->w = (t->w & 0xfffff3ffu) | (x << 10);
        t->h = (t->h & 0xffff0fffu) | (y << 12);
        return;
    }
    for (i = 0; i < c->n; i++) {
        t = base + i;
        t->w = (t->w & 0xfffff3ffu) | (x << 10);
        t->h = (t->h & 0xffff0fffu) | (y << 12);
    }
}
