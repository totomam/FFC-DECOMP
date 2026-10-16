#include "ffc/types.h"
typedef struct { int32_t a, s, b, e, x, y, z; } Ent;
typedef struct { uint8_t pad[0x2c]; Ent *ents; uint32_t n; uint8_t pad2[0x14]; int32_t v; } Obj;
extern void func_02066164(Obj *o, int32_t v, int32_t z, int32_t d, int32_t off, int32_t p);
void func_02066c24(Obj *o, int32_t x, int32_t p) {
    uint32_t i;
    for (i = 0; i < o->n; i++) {
        int in = 0;
        if (x >= o->ents[i].s && x < o->ents[i].e) in = 1;
        if (in) {
            func_02066164(o, o->v, o->ents[i].z, (o->ents[i].b - o->ents[i].a) >> 3, x - o->ents[i].s, p + o->ents[i].a);
        }
    }
}
