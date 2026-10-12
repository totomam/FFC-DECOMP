#include "ffc/types.h"

extern uint32_t func_ov002_021a1868(void *self, uint32_t v);
extern uint32_t func_ov002_021a16d4(const void *object);
extern uint32_t func_ov002_02195fa4(uint32_t x);
extern uint32_t func_ov002_02198700(void *self, uint32_t v);
extern uint32_t func_ov002_021aa820(void);
extern uint32_t func_ov002_021c91b4(uint32_t x);
extern uint32_t func_ov002_0219acac(uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov002_021a4360(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t func_ov002_021c9234(uint32_t x, void *y, uint32_t z);
extern uint32_t func_02055a2c(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021c85d8(void *self, uint32_t x);
extern uint32_t func_ov002_021c92c0(uint32_t a, uint32_t b);
extern uint32_t func_ov002_021a3a10(void *self);
extern uint32_t func_0203b750(void);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov002_021aac08(const void *object);
extern uint32_t func_ov002_021a0e58(void *self, uint32_t a, uint32_t b, uint32_t c);
extern char data_020ac158[];

typedef struct {
    void *vt;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint8_t b18;
    uint8_t b19;
} Obj;

uint32_t func_ov002_021a9e54(uint8_t *self, uint32_t *p1, uint32_t *p2)
{
    int fail = 0;
    uint32_t *q = p2;
    uint32_t *pp = p1;
    uint32_t s0c;
    uint32_t s8;
    volatile uint32_t arr[6];
    int i;
    uint32_t z;
    uint32_t r;
    uint16_t us;
    Obj *o;

    if (func_ov002_021a1868(self, q[1]) == 0) {
        fail = 1;
    }
    s0c = func_ov002_021a1868(self, pp[0]);
    s8 = func_ov002_02198700(func_ov002_02195fa4(func_ov002_021a16d4(self)), q[2]);
    if (s8 == 0) {
        fail = 1;
    } else if (func_ov002_021aa820() == 0) {
        fail = 1;
    }
    if (fail != 0) {
        return 0;
    }
    fail = 0;
    r = func_ov002_021c91b4(0);
    r = func_ov002_0219acac(*(uint32_t *)(self + 0xf0), r);
    func_02056bc0(self + 0x14, (void *)r);
    r = func_ov002_021a4360(self, pp[0], 1, 0, 1, (uint32_t)-1);
    func_02056bc0(self + 0x14, (void *)r);

    z = fail;
    for (i = fail; i < 6; i++) {
        arr[i] = z;
    }
    arr[0] = pp[0];
    arr[1] = pp[1];
    r = func_ov002_021c9234(z, (void *)arr, z);
    r = func_02055a2c(*(uint32_t *)(self + 0xf0), r);
    func_02056bc0(self + 0x14, (void *)r);

    if (func_ov002_021c85d8(self + 0x144, 0) != 0) {
        r = 0x1103;
    } else {
        r = 0x1104;
    }
    r = func_ov002_021c92c0(0, r);
    r = func_02055a2c(*(uint32_t *)(self + 0xf0), r);
    func_02056bc0(self + 0x14, (void *)r);

    if (func_ov002_021a3a10(self) != 1) {
        r = func_0203b750();
        func_02056bc0(self + 0x14, (void *)r);
    }

    r = func_ov002_021c91b4(0);
    r = func_ov002_0219acac(*(uint32_t *)(self + 0xf0), r);
    func_02056bc0(self + 0x14, (void *)r);

    o = (Obj *)func_0205681c(0x1c);
    if (o != 0) {
        us = *(uint16_t *)((uint8_t *)func_ov002_021aac08((void *)s0c) + 0x50);
        o->f8 = 0;
        o->fc = 0x10154;
        o->vt = (void *)data_020ac158;
        o->f10 = 0;
        o->f14 = us;
        o->b18 = 0;
        o->b19 = 1;
    }
    r = func_02055a2c(*(uint32_t *)(self + 0xf0), (uint32_t)o);
    func_02056bc0(self + 0x14, (void *)r);

    r = func_ov002_021a0e58(self, s0c, s8, *(uint16_t *)((uint8_t *)func_ov002_021aac08((void *)s0c) + 0x50));
    func_02056bc0(self + 0x14, (void *)r);
    return 1;
}
