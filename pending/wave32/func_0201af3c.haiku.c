#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

typedef struct {
    uint16_t h[9];
    uint8_t pad[2];
    uint32_t w14;
    uint32_t w18;
    Pair a;
    Pair b;
} Ent;

typedef struct {
    uint8_t pad[0x2c];
    uint8_t *base;
} Outer;

void func_0201af3c(Outer *o, int idx, Ent *src) {
    Ent *dst = (Ent *)(o->base + idx * 0x2c);
    uint16_t *sh = (uint16_t *)src;
    uint16_t *dh = (uint16_t *)dst;
    uint32_t i = 9;
    do {
        *dh++ = *sh++;
    } while (--i);
    dst->w14 = src->w14;
    dst->w18 = src->w18;
    {
        Pair *sp = &src->a;
        Pair *dp = &dst->a;
        *dp = *sp;
    }
    {
        Pair *sp = &src->b;
        Pair *dp = &dst->b;
        *dp = *sp;
    }
}
