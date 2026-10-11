#include "ffc/types.h"

extern uint8_t data_ov003_0217b10c[];

typedef struct {
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
} Obj;

void func_ov003_02165804(Obj *p, uint32_t a1, uint32_t a2, uint32_t a3,
                         uint32_t s5, uint32_t s6, uint32_t s7, uint32_t s8,
                         uint32_t s9, uint32_t s10)
{
    p->f14 = a1;
    p->f20 = s5;
    p->f28 = s7;
    p->f2c = s8;
    p->f30 = s9;
    p->f34 = s10;
    p->f0c &= ~0xffu;
    p->vt = data_ov003_0217b10c;
    p->f18 = a2;
    p->f1c = a3;
    p->f24 = s6;
}
