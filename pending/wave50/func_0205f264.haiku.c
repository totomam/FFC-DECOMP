#include "ffc/types.h"

extern uint32_t data_020b11b4[];

typedef struct Ent {
    uint32_t flags;
    uint32_t pad0[5];
    uint32_t a;
    uint32_t b;
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
    uint32_t n = p->count;
    Ent *e = p->ents;
    if (n != 0) {
        uint32_t lo = (uint32_t)(idx & 3) << 14;
        uint32_t hi = (uint32_t)(idx >> 2) << 30;
        do {
            uint32_t w = e->flags;
            w &= 0xffff3fffu;
            w |= lo;
            w &= 0x3fffffffu;
            w |= hi;
            e->flags = w;
            if (((w >> 8) & 3u) == 3u) {
                e->a = data_020b11b4[idx * 2] * 2u;
                e->b = data_020b11b4[idx * 2 + 1] * 2u;
            } else {
                e->a = data_020b11b4[idx * 2];
                e->b = data_020b11b4[idx * 2 + 1];
            }
            e++;
            n--;
        } while (n != 0);
    }
}
