#include "ffc/types.h"

extern void func_ov006_021b5078(void *p);
extern void func_ov006_021b3f0c(uint32_t v, void *p);
extern uint8_t *data_ov006_021bc810;

struct Obj {
    uint32_t a;
    uint32_t b;
    uint32_t *ent;
    uint8_t count;
};

void func_ov006_021b3b9c(struct Obj *o) {
    uint32_t *e = o->ent;
    int sel = 0;
    int i;
    uint8_t *base;

    for (i = 0; i < o->count; i++) {
        *e = (*e & 0xc1fffcffu) | 0x200u;
        e += 2;
    }
    func_ov006_021b5078(o);
    base = data_ov006_021bc810;
    if ((uint8_t *)o >= base + 0x228) {
        sel = 1;
    }
    func_ov006_021b3f0c(*(uint32_t *)(base + sel * 0x228 + 0x224), o);
}
