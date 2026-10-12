#include "ffc/types.h"

typedef struct Obj {
    void *vt;
    uint8_t p0[0x44];
    uint8_t sub48[0x38];
    uint32_t f80;
    uint32_t f84;
    uint32_t f88;
    void *f8c;
    void *f90;
    void *f94;
    void *f98;
    uint8_t p9c[4];
    void *fa0;
    uint32_t fa4;
    uint8_t buf[0x20];
} Obj;

#define VCALL(o, i) (((void **)*(void **)(o))[i])

extern uint32_t data_ov002_021d4b18[];
extern void *data_ov002_021d4ad4[];
extern uint32_t data_ov002_021d4bbc[];
extern uint32_t data_ov002_021d4aec[];
extern uint32_t data_ov002_021d4af0[];
extern void *data_ov002_021d4acc[];
extern uint32_t data_ov002_021d4adc[];

extern void func_02056c9c(void *p, uint32_t z);
extern void *func_0203b77c(void *t, uint32_t a, uint32_t b, uint32_t c);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern void *func_0203ba60(void *a, uint32_t b, uint32_t c, void *d, uint32_t e);
extern void *func_0206748c(void);
extern void func_02067e70(void *o, uint32_t v);
extern void *func_0203b878(void *a, void *b);
extern int func_ov002_02198e48(void *a);
extern void func_02005988(void *a, void *b);
extern void func_02068ddc(void *a, void *b);
extern void *func_020059cc(void *o);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void *func_020655dc(void *o, uint32_t a, uint32_t b);
extern void *func_0203b744(void);
extern void *func_0203b688(void);
extern void func_02056bc0(void *o, void *n);

void *func_ov002_0219b208(Obj *self, void *a, void *b, uint32_t c, uint32_t idx)
{
    struct { void *o1; uint32_t pr[2]; uint32_t q[2]; uint32_t tmp[3]; } L;
    uint32_t kk;

    func_02056c9c(self, 0);
    self->vt = (void *)data_ov002_021d4b18;
    self->f80 = 0;
    self->f84 = 100;
    self->f88 = 0;
    self->f94 = b;
    self->fa0 = a;
    self->fa4 = c;

    L.o1 = func_0203b77c(data_ov002_021d4ad4[idx], 0, 0, 0);
    func_02084ca4(((void *(*)(void *))VCALL(L.o1, 8))(L.o1), self->buf, 0x20);
    L.pr[0] = 0x30;
    L.pr[1] = 0x20;
    b = func_0203ba60(b, L.pr[0], L.pr[1], ((void *(*)(void *))VCALL(L.o1, 8))(L.o1), 1);
    self->f98 = func_0206748c();
    ((void (*)(void *, uint32_t))VCALL(b, 8))(b, 3);
    func_02067e70(b, 2);
    self->f8c = func_0203b878(b, L.o1);

    if (func_ov002_02198e48(a) != 1) {
        func_02005988(L.tmp, data_ov002_021d4bbc);
        func_02068ddc(self->f8c, L.tmp);
        func_020059cc(L.tmp);
        ((void (*)(void *))VCALL(self->f8c, 10))(self->f8c);
        L.q[0] = data_ov002_021d4aec[c * 2] - 0x18;
        L.q[1] = data_ov002_021d4af0[c * 2] - 0x10;
        ((void (*)(void *, uint32_t, uint32_t))VCALL(self->f8c, 3))(self->f8c, L.q[0], L.q[1]);
    }

    self->f90 = func_0203b95c(data_ov002_021d4acc[1], self->f94, 2, 1);

    if (func_ov002_02198e48(a) != 1) {
        ((void (*)(void *, uint32_t))VCALL(self->f90, 8))(self->f90, 3);
        ((void (*)(void *, uint32_t))VCALL(self->f90, 15))(self->f90, 3);
        ((void (*)(void *))VCALL(self->f90, 10))(self->f90);
        L.q[0] = data_ov002_021d4adc[c * 2];
        L.q[1] = data_ov002_021d4adc[c * 2 + 1];
        ((void (*)(void *, uint32_t, uint32_t))VCALL(self->f90, 3))(self->f90, L.q[0], L.q[1]);

        kk = (c == 1) ? 4 : 1;
        b = func_020655dc(self->f90, kk, 0);
        c = (uint32_t)func_0203b744();
        a = func_0203b688();
        func_02056bc0(a, (void *)c);
        func_02056bc0(a, b);
        func_02056bc0(self->sub48, a);
    }

    func_02056bc0(self->sub48, self->f90);
    func_02056bc0(self->sub48, self->f8c);
    return self;
}
