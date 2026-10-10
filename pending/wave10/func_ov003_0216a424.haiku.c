#include "ffc/types.h"

typedef void (*mfn_t)(void *, uint32_t, uint32_t, uint32_t);

typedef struct {
    uint32_t ptr;
    int32_t adj;
} PMF;

typedef struct {
    uint8_t pad0[0x0c];
    uint32_t flags;
    uint8_t pad1[0x84 - 0x10];
    uint8_t *base;
    PMF pmf;
    uint32_t a90;
    uint32_t a94;
    uint32_t a98;
} Obj;

void func_ov003_0216a424(Obj *self)
{
    PMF *m = &self->pmf;
    int32_t adj = m->adj;
    int32_t off;
    uint8_t *base;
    mfn_t fn;

    base = self->base;
    off = adj >> 1;

    if (adj & 1) {
        uint8_t *vt = *(uint8_t **)(base + off);
        fn = *(mfn_t *)(vt + m->ptr);
    } else {
        fn = (mfn_t)m->ptr;
    }

    fn(base + off, self->a90, self->a94, self->a98);

    self->flags = (self->flags & ~0xffu) | 2;
}
