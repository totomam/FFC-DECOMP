#include "ffc/types.h"

extern void func_ov002_021d2b38(int x);

typedef struct { uint32_t a, b; } P;
typedef struct {
    uint32_t w[5];
    P p[3];
    uint32_t z;
} Elem;

typedef struct {
    Elem *base;
    uint32_t count;
    uint32_t cap;
} List;

void func_ov002_021ca134(List *l, Elem *src)
{
    uint8_t v = 0;
    if (l->count < l->cap) {
        uint32_t n = l->count++;
        Elem *d = &l->base[n];
        d->w[0] = src->w[0];
        d->w[1] = src->w[1];
        d->w[2] = src->w[2];
        d->w[3] = src->w[3];
        d->w[4] = src->w[4];
        d->p[0] = src->p[0];
        d->p[1] = src->p[1];
        d->p[2] = src->p[2];
        d->z = src->z;
    } else {
        func_ov002_021d2b38(v);
    }
}
