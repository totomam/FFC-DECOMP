#include "ffc/types.h"

extern uint8_t data_ov003_0217ac2c[];

typedef struct Obj {
    void *vt;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
    uint8_t f38;
    uint32_t f3c;
} Obj;

void func_ov003_02165a50(Obj *p, uint32_t a1, uint32_t a2, uint32_t a3,
                         uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8)
{
    uint32_t v = p->f0c;
    void *d = data_ov003_0217ac2c;
    p->f14 = a1;
    p->f18 = a2;
    p->f20 = a5;
    p->f24 = a6;
    p->f38 = 1;
    p->f3c = a8;
    v = v & ~0xffu;
    p->f0c = v;
    p->vt = d;
    p->f1c = a3;
    p->f28 = a7;
}
