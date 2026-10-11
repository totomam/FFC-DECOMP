#include "ffc/types.h"

extern uint32_t data_020b2318;

typedef struct {
    void *vtbl;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint8_t f1c;
    uint8_t pad1d[3];
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
} FfcObj;

void func_02072f4c(FfcObj *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e)
{
    o->f14 = a;
    o->f18 = 0;
    o->f1c = 0;
    o->f0c &= ~0xffu;
    o->f28 = d;
    o->vtbl = &data_020b2318;
    o->f20 = b;
    o->f24 = c;
    o->f2c = e;
}
