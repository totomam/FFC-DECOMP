#include "ffc/types.h"

typedef struct S2 { uint32_t a, b; } S2;
typedef struct VT {
    void *f0;
    void *f4;
    void (*f8)(void *);
    void (*fc)(void *, struct S2);
} VT;

typedef struct Inner {
    VT *vt;
    uint8_t pad[8];
    uint32_t flag;
} Inner;

typedef struct Outer {
    uint8_t pad[0xc];
    uint32_t flag;
    uint8_t pad2[0xc];
    Inner *inner;
} Outer;

typedef struct S {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} S;

void func_020685d0(Outer *self, S2 s)
{
    Inner *in = self->inner;
    in->vt->fc(in, s);
    if (((int32_t)(self->flag << 24) >> 24) == 1) {
        if (!((int32_t)(self->inner->flag << 24) >> 24)) {
            self->inner->vt->f8(self->inner);
        }
    }
}
