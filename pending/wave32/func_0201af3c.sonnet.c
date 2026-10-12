#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

typedef struct {
    struct {uint16_t v[9];} h;
    uint8_t pad[2];
    uint32_t w14;
    uint32_t w18;
    Pair p[2];
} Ent;

typedef struct {
    uint8_t pad[0x2c];
    uint8_t *base;
} Outer;

void func_0201af3c(Outer *o, int idx, Ent *src) {
    Ent *dst = (Ent *)(o->base + idx * 0x2c);
    dst->h = src->h;
    dst->w14 = src->w14;
    dst->w18 = src->w18;
    int i;
    for (i = 0; i < 2; i++) dst->p[i] = src->p[i];
}
