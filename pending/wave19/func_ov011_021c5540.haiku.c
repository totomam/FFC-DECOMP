#include "ffc/types.h"

typedef struct Vt {
    int (*slot[16])(void *);
} Vt;

typedef struct Inner {
    Vt *vt;
} Inner;

typedef struct Outer {
    uint8_t pad[0xe4];
    Inner *inner;
} Outer;

void func_ov011_021c5540(Outer *p)
{
    Inner *in = p->inner;
    if (in->vt->slot[12](in) == 0) {
        in = p->inner;
        in->vt->slot[11](in);
    }
}
