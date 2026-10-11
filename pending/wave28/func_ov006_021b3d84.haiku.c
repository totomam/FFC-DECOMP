#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t *tbl;
    uint8_t count;
} Obj;

typedef struct {
    uint32_t pad;
    uint16_t h;
    uint16_t pad2;
} Ent;

void func_ov006_021b3d84(Obj *o, int32_t idx, uint32_t val) {
    Ent *ents = (Ent *)o->tbl;
    uint32_t t;
    int32_t i;

    if (idx >= 0) {
        t = ents[idx].h;
        t &= 0xfffff3ff;
        t |= (val << 10);
        ents[idx].h = (uint16_t)t;
        return;
    }
    for (i = 0; i < o->count; i++) {
        t = ents[i].h;
        t &= 0xfffff3ff;
        t |= (val << 10);
        ents[i].h = (uint16_t)t;
    }
}
