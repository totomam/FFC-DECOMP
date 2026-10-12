#include "ffc/types.h"

extern void *func_0203bb94(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_02069288(void *object);
extern void func_020697ac(void *object, void *node);
extern uint32_t func_02036b4c(const void *object, uint32_t index);
extern void *func_020159c8(void *a, void *b);
extern void func_02005988(void *a, void *b);
extern void func_02068ddc(void *a, void *b);
extern void *func_020059cc(void *object);
extern void *data_ov009_021b0e14;
extern void *data_020b8e44;
extern void *data_ov009_021af260;

#define FLD(p, off) (*(void **)((uint8_t *)(p) + (off)))
#define VCALL0(o, idx) (((void (*)(void *))((*(void ***)(o))[idx]))(o))

void func_ov009_021ae674(void *self)
{
    uint8_t i = 0;
    uint8_t j;
    void *o;
    void *c;
    void *x;
    uint32_t idx;
    uint32_t loc[3];

    if (FLD(self, 0xbc) == 0) {
        o = func_0203bb94(&data_ov009_021b0e14, 1, 0, 0);
        FLD(self, 0xbc) = o;
        VCALL0(o, 10);
        x = FLD(self, 0xbc);
        (((void (*)(void *, uint32_t))((*(void ***)x)[8]))(x, 3));
        func_02056bc0((uint8_t *)self + 0x48, FLD(self, 0xbc));
    }

    func_02069288(FLD(self, 0xc0));
    x = FLD(FLD(self, 0xc0), 0x98);
    VCALL0(x, 10);

    for (j = 0; j < 4; j++) {
        c = FLD((uint8_t *)self + (j << 2), 0xc4);
        func_02069288(c);
        x = FLD(FLD((uint8_t *)self + (j << 2), 0xc4), 0x98);
        VCALL0(x, 10);
        c = FLD((uint8_t *)self + (j << 2), 0xc4);
        x = FLD(c, 0x98);
        (((void (*)(void *, uint32_t, uint32_t))((*(void ***)x)[14]))(x, 2, i));
    }

    idx = *(uint32_t *)((uint8_t *)self + 0x14c);
    c = FLD((uint8_t *)self + (idx << 2), 0xc4);
    func_020697ac(self, c);

    VCALL0(FLD(self, 0xd4), 10);

    for (i = 0; i < 4; i++) {
        idx = func_02036b4c((uint8_t *)self + 0xe8, i);
        o = func_020159c8(data_020b8e44, ((void **)&data_ov009_021af260)[idx]);
        func_02005988(loc, o);
        func_02068ddc(FLD((uint8_t *)self + (i << 2), 0xd8), loc);
        func_020059cc(loc);
        VCALL0(FLD((uint8_t *)self + (i << 2), 0xd8), 10);
    }

    VCALL0(FLD(self, 0x144), 10);
}
