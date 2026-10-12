#include "ffc/types.h"

typedef struct Ent {
    uint32_t w;
    uint32_t x;
} Ent;

typedef struct Obj {
    uint32_t a;
    uint32_t b;
    Ent *ent;
    uint8_t count;
} Obj;

void func_ov006_021b3c04(Obj *p, int idx, uint32_t val, uint32_t flag) {
    Ent *e = p->ent;
    if (idx >= 0) {
        if (val != 0x100 && val != 0x300) {
            e[idx].w = (e[idx].w & 0xc1fffcffu) | val;
            return;
        }
        e[idx].w = (e[idx].w & 0xc1fffcffu) | val | (flag << 25);
        return;
    } else {
        int i;
        for (i = 0; i < p->count; i++) {
            if (val == 0x100 || val == 0x300) {
                e[i].w = (e[i].w & 0xc1fffcffu) | val | (flag << 25);
            } else {
                e[i].w = (e[i].w & 0xc1fffcffu) | val;
            }
        }
    }
}
