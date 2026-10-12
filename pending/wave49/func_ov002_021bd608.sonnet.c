#include "ffc/types.h"

#define FLD(p, off) (*(void **)((uint8_t *)(p) + (off)))
#define FLDW(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))
#define VC(o, idx) (((void **)*(void **)(o))[idx])

extern void func_02056c9c(void *o, uint32_t x);
extern void *func_0203b95c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_02056dd4(void *o);
extern void *func_0205ffac(void *o, uint32_t i, uint32_t j);
extern uint32_t func_ov002_02198bec(uint32_t a);
extern uint32_t func_ov002_02198bf4(uint32_t a);
typedef struct { uint32_t c; uint32_t d; } S2;
extern void *func_0203ba60(uint32_t a, S2 b, uint32_t d, uint32_t e);
extern void func_02067e70(void *o, uint32_t x);
extern void *func_0203b878(void *o, uint32_t x);
extern void func_02056bc0(void *o, void *n);
extern void *func_02067490(void *o);
extern void func_0205f318(void *o, uint32_t x);
extern void func_0205f3a8(void *o, uint32_t x, uint32_t y);
extern void func_0205f380(void *o, uint32_t x);

extern uint8_t data_ov002_021d6c14[];
extern void *data_ov002_021d6bdc[];
extern int32_t data_ov002_021d6bec[];
extern int32_t data_ov002_021d7964[];


typedef struct {
    void *vt;
    uint8_t pad[0x7c];
    void *o80;
    uint32_t f84;
    void *q88;
    void *a8c[4];
    void *a9c[4];
    uint8_t *fac;
    uint32_t fb0;
    uint32_t ab4[4];
    uint32_t ac4[4];
    uint8_t d4, d5;
} T;

void *func_ov002_021bd608(T *self, uint32_t a, uint32_t b, uint32_t c, ...)
{
    int32_t i;
    void *obj;
    void *q;
    void *r7;
    uint32_t n;
    uint32_t k;
    uint32_t x; S2 sz; S2 pos; uint32_t sc, sd; uint8_t *lst;

    func_02056c9c(self, 0);
    self->vt = data_ov002_021d6c14;
    self->o80 = 0;
    self->f84 = b;
    self->q88 = 0;
    self->fac = 0;
    self->fb0 = 0;
    self->d4 = 0;
    self->d5 = 0;
    for (i = 0; i < 4; i++) {
        self->ab4[i] = 0;
        self->ac4[i] = 0;
        self->a9c[i] = 0;
    }
    self->o80 = func_0203b95c(data_ov002_021d6bdc[1], b, 2, 1);
    obj = self->o80;
    ((void (*)(void *, S2))VC(obj, 3))(obj, *(S2 *)&c);
    obj = self->o80;
    ((void (*)(void *, uint32_t))VC(obj, 8))(obj, 2);
    obj = self->o80;
    ((void (*)(void *, uint32_t))VC(obj, 15))(obj, 1);
    obj = self->o80;
    ((void (*)(void *))VC(obj, 11))(obj);

    q = FLD(func_02056dd4(self), 0x18);
    q = FLD(q, 0x18);
    q = func_0205ffac(q, 1, 1);
    self->q88 = q;
    self->fac = FLD(q, 4);

    n = func_ov002_02198bec(a);
    sz.c = 0x20; sz.d = 0x10;
    sd = ((uint32_t *)&c)[1]; sc = ((uint32_t *)&c)[0];
    lst = (uint8_t *)self; lst = (uint8_t *)self + 0x48;
    k = (2 << 22) >> 16;
    for (i = 0; i < 4; i++) {
        x = func_ov002_02198bf4(a);
        r7 = func_0203ba60(self->f84, sz, x, 1);
        func_02067e70(r7, 0);
        self->a8c[i] = func_0203b878(r7, n);
        pos.c = sc + data_ov002_021d6bec[2 * i];
        pos.d = sd + data_ov002_021d6bec[2 * i + 1];
        obj = self->a8c[i];
        ((void (*)(void *, S2))VC(obj, 3))(obj, pos);
        obj = self->a8c[i];
        ((void (*)(void *, uint32_t))VC(obj, 8))(obj, 2);
        func_02056bc0(lst, self->a8c[i]);
        self->a9c[i] = func_02067490(r7);
        func_0205f318(self->a9c[i], 1);
        func_0205f3a8(self->a9c[i], 0, 0);
        func_0205f380(self->a9c[i], FLDW(self->q88, 0x10));
        data_ov002_021d7964[3] = 0x800;
        data_ov002_021d7964[0] = 0x800;
        data_ov002_021d7964[2] = 0;
        data_ov002_021d7964[1] = 0;
        q = self->fac;
        *(uint16_t *)((uint8_t *)q + 6) = (uint16_t)k;
        *(uint16_t *)((uint8_t *)q + 0xe) = (uint16_t)(data_ov002_021d7964[1] >> 4);
        *(uint16_t *)((uint8_t *)q + 0x16) = (uint16_t)(data_ov002_021d7964[2] >> 4);
        *(uint16_t *)((uint8_t *)q + 0x1e) = (uint16_t)(data_ov002_021d7964[3] >> 4);
    }
    func_02056bc0((uint8_t *)self + 0x48, self->o80);
    return self;
}
