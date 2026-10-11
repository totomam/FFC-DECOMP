#include "ffc/types.h"

extern uint32_t data_ov003_0217aaf4;

typedef struct {
    uint32_t f00;
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
} FuncStruct;

void func_ov003_02166a58(FuncStruct *p, uint32_t a, uint32_t b, uint32_t c,
                         uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h)
{
    p->f14 = a;
    p->f20 = d;
    p->f24 = e;
    p->f28 = f;
    p->f2c = g;
    p->f0c &= ~0xffu;
    p->f00 = (uint32_t)&data_ov003_0217aaf4;
    p->f18 = b;
    p->f1c = c;
    p->f30 = h;
}
