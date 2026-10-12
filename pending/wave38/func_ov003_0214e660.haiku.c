#include "ffc/types.h"

typedef void (*fn_t)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

typedef struct Pair {
    uint32_t v0;
    int32_t v1;
} Pair;

typedef struct Two {
    uint32_t a, b;
} Two;

typedef struct Obj {
    uint32_t w0, w1, w2, w3;
    uint32_t pad4[29];
    uint8_t *base84;
    Pair p88;
    uint32_t a90, a94, a98, a9c, aa0;
} Obj;

void func_ov003_0214e660(Obj *self)
{
    Pair *pr = &self->p88;
    int32_t x = pr->v1;
    uint8_t *base = self->base84;
    int32_t off = x >> 1;
    fn_t fn;
    Two t;
    if (x & 1) {
        fn = *(fn_t *)(*(uint8_t **)(base + off) + pr->v0);
    } else {
        fn = *(fn_t *)&pr->v0;
    }
    t.a = self->a9c;
    t.b = self->aa0;
    fn(base + off, self->a90, self->a94, self->a98, t.a, t.b);
    self->w3 = (self->w3 & ~0xffu) | 2;
}
