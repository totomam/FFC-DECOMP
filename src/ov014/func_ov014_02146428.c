/* cflags: -lang c++ -nothumb */
#include "ffc/types.h"

struct Ent { uint32_t a, b; };
struct O {
    virtual void v0();
    virtual void v1();
    virtual int chk(void *);
    virtual int rd(void *, uint32_t);
    virtual void v4();
    virtual void seek();
};
struct S {
    O *o;
    uint8_t p0[0x2c];
    uint32_t cnt;
    uint8_t p1[0x3c];
    O *f70;
    uint8_t p2[0x4];
    uint32_t f78;
    uint32_t p3;
    uint32_t f80;
    uint32_t p4;
    uint32_t f88;
    uint32_t f8c_;
    uint32_t f90;
    Ent *tab;
    uint32_t f98;
    uint8_t p5[0x38];
    uint8_t *base;
};
extern "C" uint32_t func_ov014_02146428(S *self, int idx);
extern "C" uint32_t func_ov014_02146428(S *self, int idx)
{
    uint32_t v;
    if (idx < 0 || (uint32_t)idx >= self->cnt) {
        return 0;
    }
    if (!self->o->chk(self->base + self->tab[idx].b)) {
        return 0;
    }
    self->f98 = self->tab[idx].a;
    self->o->seek();
    uint32_t one = 1;
    self->f90 = one;
    self->o->rd(&v, 4);
    uint32_t ip = v >> 14;
    self->f78 = ip;
    self->f88 = v & (0x4000 - one);
    self->f80 = 0;
    self->o->rd((void *)self->f70, ip + 4);
    return one;
}
