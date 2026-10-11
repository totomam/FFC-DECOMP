#include "ffc/types.h"

extern uint8_t data_ov003_0217ac2c[];

typedef struct {
    void *vt;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
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
    uint8_t pad39[3];
    uint32_t f3c;
} S;

void func_ov003_02165a50(S *p, uint32_t a1, uint32_t a2, uint32_t a3,
                         uint32_t s0, uint32_t s4, uint32_t s8, uint32_t sc)
{
    uint32_t t = p->fc;
    p->f14 = a1;
    p->f18 = a2;
    p->f20 = s0;
    p->f24 = s4;
    p->f38 = 1;
    p->f3c = sc;
    p->fc = t & ~0xff;
    p->vt = data_ov003_0217ac2c;
    p->f1c = a3;
    p->f28 = s8;
}
