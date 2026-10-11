#include "ffc/types.h"

typedef void (*fn_t)(void *, uint8_t, uint8_t, uint8_t);

typedef struct {
    uint32_t fa;
    int32_t fb;
} Sub;

typedef struct {
    uint8_t pad[0x84];
    uint8_t *base;
    Sub sub;
} Obj;

void func_ov003_02162b64(void *self)
{
    Obj *o = (Obj *)self;
    Sub *q = &o->sub;
    int32_t adj = q->fb;
    uint8_t *base = o->base;
    uint8_t *obj;
    fn_t f;

    obj = base + (adj >> 1);
    if (adj & 1) {
        void **vt = *(void ***)obj;
        f = *(fn_t *)((uint8_t *)vt + q->fa);
    } else {
        f = *(fn_t *)&q->fa;
    }

    f(obj, ((uint8_t *)self)[0x90], ((uint8_t *)self)[0x91], ((uint8_t *)self)[0x92]);
    *(uint32_t *)((uint8_t *)self + 0xc) = (*(uint32_t *)((uint8_t *)self + 0xc) & ~0xffu) | 2;
}
