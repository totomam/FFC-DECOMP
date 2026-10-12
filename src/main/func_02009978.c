#include "ffc/types.h"

extern int data_020aadbc;
extern uint32_t func_0205681c(uint32_t a);
extern uint32_t func_0206ae98(uint32_t a, int32_t b, uint32_t c);
extern void func_02084b2c(uint32_t a, uint32_t b, uint32_t c);
extern void func_0206add8(uint32_t a, uint32_t b);

typedef struct {
    uint32_t vt;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
} Obj;

void *func_02009978(void *self, uint32_t arg) {
    Obj *p = (Obj *)self;
    uint32_t r;
    uint32_t *q;
    uint32_t a, b;

    p->fc = p->fc & ~0xffu;
    p->vt = (uint32_t)&data_020aadbc;
    p->f14 = arg;

    r = func_0205681c(0x44);
    if (r != 0) {
        r = func_0206ae98(r, -1, p->f14);
    }
    p->f18 = r;

    q = (uint32_t *)r;
    a = q[13];
    p->f1c = a;
    b = q[14];
    p->f20 = b;

    func_02084b2c(a, 0, 6 << 6);
    func_02084b2c(p->f20, 0, 6 << 6);

    func_0206add8(p->f18, 1);
    return self;
}
