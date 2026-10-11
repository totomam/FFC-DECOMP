#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint8_t data_020b16a4[];

struct Obj {
    void *vt;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
};

void func_020655dc(uint32_t a, uint32_t b, uint32_t c)
{
    struct Obj *p = (struct Obj *)func_0205681c(0x20);
    if (p != 0) {
        p->f0c &= ~0xffu;
        p->vt = data_020b16a4;
        p->f14 = a;
        p->f18 = b;
        p->f1c = c;
    }
}
