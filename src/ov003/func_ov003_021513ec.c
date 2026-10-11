#include "ffc/types.h"

typedef struct S {
    uint32_t a;
    uint32_t b;
} S;

typedef struct Vt {
    void *f0;
    void *f1;
    void *f2;
    void (*f3)(void *self, S s);
} Vt;

typedef struct Sub {
    const Vt *vt;
} Sub;

typedef struct Self {
    uint8_t pad[0x80];
    Sub *subs[2];
} Self;

void func_ov003_021513ec(Self *self, S s, uint32_t c)
{
    int i;
    for (i = 0; i < 2; i++) {
        Sub *sub = self->subs[i];
        sub->vt->f3(sub, s);
    }
}
