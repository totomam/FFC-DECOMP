#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c[5];
} Elem;

typedef struct {
    uint32_t pad0[4];
    int32_t x;
    int32_t y;
    uint32_t pad1[2];
    uint32_t flags;
    uint32_t pad2[1];
} Ent;

typedef struct {
    uint32_t pad;
    Ent *ents;
} Sub;

typedef struct {
    uint8_t pad0[0x24];
    int32_t ra;
    int32_t rb;
    Elem *elems;
    uint32_t count;
    uint8_t pad1[0x4c - 0x34];
    Sub *sub;
} Outer;

typedef struct {
    int32_t x;
    int32_t y;
} Pair;

void func_020674ac(Outer *p, int32_t a0, int32_t b0, ...) {
    uint32_t i;
    volatile int32_t *ap = &a0;
    int32_t a = ap[0];
    int32_t b = ap[1];
    volatile Pair tmp[2];
    p->ra = a;
    p->rb = b;
    for (i = 0; i < p->count; i++) {
        Elem *e = &p->elems[i];
        int32_t x = a + e->a;
        int32_t y = b + e->b;
        Ent *ent;
        tmp[1].x = x;
        tmp[0].x = x;
        tmp[1].y = y;
        tmp[0].y = y;
        ent = &p->sub->ents[i];
        ent->x = x;
        ent->y = y;
        ent->flags = (ent->flags & 0xc0003fffu) | (((uint32_t)(0x7fff - y) << 16) >> 2);
    }
}
