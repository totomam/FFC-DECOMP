#include "ffc/types.h"
typedef struct P { uint32_t a, b; } P;
extern P data_020b11b4[];
typedef struct Ent {
    uint32_t f0 : 8;
    uint32_t m : 2;
    uint32_t f1 : 4;
    uint32_t lo : 2;
    uint32_t f2 : 14;
    uint32_t hi : 2;
    uint32_t pad0[5];
    uint32_t a, b;
    uint32_t pad1[2];
} Ent;
typedef struct S {
    uint32_t pad0;
    Ent *ents;
    uint32_t pad1[2];
    uint32_t count;
} S;
void func_0205f264(S *p, int32_t idx)
{
    Ent *e = p->ents;
    uint32_t n = p->count;
    if (n != 0) { uint32_t lo = idx & 3; uint32_t hi = idx >> 2; P *d = &data_020b11b4[idx]; do {
        e->lo = lo;
        e->hi = hi;
        if (e->m != 3) {
            uint32_t y = d->b;
            uint32_t x = d->a;
            e->a = x;
            e->b = y;
        } else {
            uint32_t x = d->a;
            uint32_t y = d->b;
            uint32_t x2 = x << 1;
            uint32_t y2 = y << 1;
            e->a = x2;
            e->b = y2;
        }
        n--;
        e++;
    } while (n != 0); }
}
