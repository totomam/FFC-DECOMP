#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
} S;

extern uint8_t data_ov003_0217a774[];

typedef struct {
    uint32_t vt;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint16_t f20;
    uint16_t f22;
    uint16_t f24;
    uint16_t f26;
    uint8_t f28;
} Obj;

void func_ov003_02164114(Obj *p, uint32_t x, uint16_t y, uint16_t z, S s)
{
    p->f14 = x;
    p->f18 = s.a;
    p->fc &= ~0xffu;
    p->f1c = s.b;
    p->vt = (uint32_t)data_ov003_0217a774;
    p->f20 = y;
    p->f22 = z;
    p->f24 = s.c;
    p->f26 = s.d;
    p->f28 = s.e;
}
