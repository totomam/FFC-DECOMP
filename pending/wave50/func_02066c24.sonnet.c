#include "ffc/types.h"

typedef struct { int32_t s; int32_t lo; int32_t e; int32_t hi; int32_t f; int32_t g; int32_t h; } Ent;
typedef struct { uint8_t pad[0x2c]; Ent *ents; uint32_t n; uint8_t pad2[0x14]; uint32_t q; } Obj;

extern void func_02066164(Obj *p, uint32_t a, uint32_t b, int32_t c, int32_t d, int32_t e);

void func_02066c24(Obj *p, int32_t x, int32_t y)
{
    uint32_t i;
    for (i = 0; i < p->n; i++) {
        int ok = 0;
        if (x >= p->ents[i].lo && x < p->ents[i].hi) ok = 1;
        if (ok) {
            func_02066164(p, p->q, p->ents[i].h, (p->ents[i].e - p->ents[i].s) >> 3, x - p->ents[i].lo, y + p->ents[i].s);
        }
    }
}
