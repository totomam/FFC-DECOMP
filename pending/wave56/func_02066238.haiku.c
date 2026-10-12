#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } Quad;

typedef struct Self {
    uint32_t pad0[7];
    void *obj;        /* 0x1c */
    uint32_t *f20;    /* 0x20 */
    uint32_t f24;     /* 0x24 */
    uint32_t f28;     /* 0x28 */
    uint32_t f2c;     /* 0x2c */
    uint32_t f30;     /* 0x30 */
    int32_t h;        /* 0x34 */
    int32_t w;        /* 0x38 */
} Self;

extern uint32_t func_02062898(void *object);
extern uint32_t func_02062884(void *object);
extern uint32_t func_020583cc(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_020599c0(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0205fbb8(void *object, uint32_t second, uint32_t third);
extern uint32_t func_0205fb50(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_0205681c(uint32_t x);
extern uint32_t *func_0205eb34(uint32_t a, void *b, uint32_t c);
extern void func_02059c34(void *destination, const void *source);
extern void func_0205eea8(void *o, Quad q, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_0205ee20(void *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);

void func_02066238(Self *self, uint32_t p1, uint32_t p2)
{
    int32_t w, h, sz;
    uint32_t t;
    uint32_t *r7;
    uint32_t *o20;
    Quad q;
    uint32_t *vt;

    w = ((int32_t)func_02062898(self) + 7) >> 3;
    h = ((int32_t)func_02062884(self) + 7) >> 3;
    self->w = w;
    self->h = h;
    sz = w * h;

    r7 = (uint32_t *)((uint32_t *)self->obj)[5];
    self->f30 = func_020583cc(r7[13], 1, p1, p2);
    self->f24 = func_020599c0(r7, 0, sz + 1, p2);
    self->f28 = func_0205fbb8((void *)self->f24, 1, 1);
    self->f2c = func_0205fbb8((void *)self->f24, sz, 1);
    func_0205fb50((void *)self->f28, 0, 0, (uint32_t)-1);

    t = func_0205681c(0x80);
    o20 = 0;
    if (t != 0) {
        o20 = func_0205eb34(t, self->obj, p2);
    }
    self->f20 = o20;
    func_02059c34((void *)o20[6], (const void *)self->f24);

    q.a = 0x80000000;
    q.b = 0x80000000;
    q.c = 0x7fffffff;
    q.d = 0x7fffffff;
    func_0205eea8(o20, q, ((uint32_t *)self->f28)[6], ((uint32_t *)self->f30)[6], 0, 0);

    func_0205ee20(o20, self->h, self->w, 0, 0,
                  ((uint32_t *)self->f2c)[6], ((uint32_t *)self->f30)[6], 0, 0);

    vt = (uint32_t *)((uint32_t *)self)[0];
    ((void (*)(void *))vt[15])(self);
}
