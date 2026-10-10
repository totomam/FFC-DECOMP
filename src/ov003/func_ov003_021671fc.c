#include "ffc/types.h"

extern uint8_t data_ov003_0217b0f4[];

typedef struct {
    uint8_t a;
    uint8_t pa[3];
    uint8_t b;
    uint8_t pb[3];
    uint8_t c;
} Trip;

typedef struct {
    void *vt;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint8_t f1c;
    uint8_t f1d;
    uint8_t f1e;
    uint8_t f1f;
} Obj;

void func_ov003_021671fc(Obj *p, uint32_t a, uint32_t b, uint8_t c, Trip t) {
    uint32_t w = p->f0c;
    w &= ~0xffu;
    p->f0c = w;
    p->vt = data_ov003_0217b0f4;
    p->f14 = a;
    p->f1c = c;
    p->f18 = b;
    p->f1d = t.a;
    p->f1e = t.b;
    p->f1f = t.c;
}
