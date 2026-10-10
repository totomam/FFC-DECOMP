#include "ffc/types.h"

extern uint32_t data_ov011_021cbb98;

typedef void (*VFn)(void *);

struct Self {
    uint32_t *vt;
    uint8_t pad[0x14];
    struct Obj *sub;
};

struct Obj {
    VFn *vt;
};

void *func_ov011_021c9b64(void *self) {
    struct Self *s = (struct Self *)self;
    struct Obj *o;
    s->vt = &data_ov011_021cbb98;
    o = s->sub;
    if (o) {
        if (o) {
            o->vt[1](o);
        }
        s->sub = 0;
    }
    return self;
}
