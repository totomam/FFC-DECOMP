#include "ffc/types.h"

extern void *func_02069210(void *object);
extern void func_020692a4(void *object);
extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02064390(void *object, uint32_t first, uint32_t second);
extern void *func_020655b8(void *object);
extern void *func_020655dc(void *object, uint32_t a, uint32_t b);
extern void func_ov004_0214be94(void *object, void *a);
extern void func_ov004_021534b0(void *out, void *a, void *b);
extern void func_02069328(void *object, uint32_t a);
extern uint32_t data_ov004_02158f24[];
extern char data_ov004_021592e0[];
extern char data_020b0b68[];
extern char data_020b0b7c[];

typedef struct Self {
    void *vt;
    uint8_t pad04[0x44];
    uint8_t sub48[0x4c];
    void *f94;
    void *f98;
    void *f9c;
    uint32_t fa0;
    uint32_t fa4;
    void *fa8;
    void *fac;
} Self;

typedef struct Obj {
    void *vt;
    uint8_t p4[8];
    uint32_t w0c;
    uint8_t b10;
    uint8_t b11;
    uint8_t b12;
    uint8_t b13;
    uint32_t w14;
    void *p18;
    uint8_t tail[0x34 - 0x1c];
} Obj;

Self *func_ov004_0214bb38(Self *self, void *p1, void *p2, uint32_t p3, void *s5, void *s6)
{
    uint32_t *d = data_ov004_02158f24;
    void *p2l = p2;
    struct { uint32_t pair[2]; uint32_t out[4]; } L;
    typedef struct { uint32_t a, b; } P2;
    uint32_t *op;
    P2 pp;
    Obj *o;
    void *obj;
    void *node;
    uint32_t c7;
    void **vt;

    func_02069210(self);
    self->vt = data_ov004_021592e0;
    self->f94 = p1;
    self->f9c = 0;
    self->fa0 = p3;
    self->fa4 = 0;
    self->fa8 = s6;
    func_ov004_0214be94(self, s5);
    func_020692a4(self);

    o = (Obj *)func_0205681c(0x34);
    if (o != 0) {
        o->w0c &= ~0xff;
        o->vt = data_020b0b68;
        func_02087620((char *)o + 0x1c);
        o->b10 = o->b10 & ~0xff;
        o->b11 = o->b11 & ~0xff;
        o->b12 = o->b12 & ~0xff;
        o->w14 = 0;
        o->p18 = &o->w14;
        o->vt = data_020b0b7c;
        o->b11 = o->b11 & ~0xff;
    }
    self->f98 = o;
    func_02056bc0(self->sub48, o);

    obj = 0;
    switch (self->fa0) {
    case 9:
        obj = (void *)d[8];
        break;
    case 10:
        obj = (void *)d[1];
        break;
    case 11:
        obj = (void *)d[4];
        break;
    case 12:
        obj = (void *)d[11];
        break;
    }

    obj = func_0203b95c(obj, p2l, 0, 1);
    self->f9c = obj;
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t))vt[8])(obj, 1);
    vt = *(void ***)self->f9c;
    ((void (*)(void *, uint32_t))vt[15])(self->f9c, 3);

    func_02064390(self->f9c, 0x80, 0x60);
    c7 = (uint32_t)func_020655b8(self->f9c);
    node = func_020655dc(self->f9c, 1, 0);
    {
        void *o98 = self->f98;
        func_02056bc0(o98, node);
        func_02056bc0(o98, (void *)c7);
    }

    vt = *(void ***)self->f9c;
    ((void (*)(void *))vt[10])(self->f9c);
    func_02056bc0(self->sub48, self->f9c);

    op = L.out;
    func_ov004_021534b0(op, self->f94, s6);
    pp.a = op[0] + 0x18;
    pp.b = op[1] + 0xe;

    obj = func_0203b95c((void *)d[5], p2l, 0, 1);
    self->fac = obj;
    vt = *(void ***)obj;
    ((void (*)(void *, uint32_t))vt[8])(obj, 1);
    vt = *(void ***)self->fac;
    ((void (*)(void *, uint32_t))vt[15])(self->fac, 2);

    vt = *(void ***)self->fac;
    ((void (*)(void *, P2))vt[3])(self->fac, pp);

    node = func_020655dc(self->fac, self->fa4 + 1, 0);
    func_02056bc0(self->f98, node);

    vt = *(void ***)self->fac;
    ((void (*)(void *))vt[10])(self->fac);
    func_02056bc0(self->sub48, self->fac);

    func_02069328(self, 1);
    return self;
}
