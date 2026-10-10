#include "ffc/types.h"

extern uint32_t data_ov007_021c542c;

typedef void (*VFn)(void *);

struct Self {
    uint32_t *vt;
    uint8_t pad[0x14];
    struct Obj *sub;
};

struct Obj {
    VFn *vt;
};

void *func_ov007_021ae238(void *self) {
    struct Self *s = (struct Self *)self;
    struct Obj *o;
    s->vt = &data_ov007_021c542c;
    o = s->sub;
    if (o) {
        if (o) {
            o->vt[1](o);
        }
        s->sub = 0;
    }
    return self;
}
