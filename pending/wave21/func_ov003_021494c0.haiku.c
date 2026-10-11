#include "ffc/types.h"

extern uint8_t data_ov003_021797e4[];

typedef struct {
    void *vt;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint16_t f18;
    uint16_t f1a;
    uint16_t f1c;
    uint16_t f1e;
    uint32_t f20;
    uint32_t f24;
} Obj;

void func_ov003_021494c0(Obj *p, uint32_t x1, uint16_t x2, uint16_t x3,
                         uint32_t a, uint16_t b, uint16_t c, uint32_t d)
{
    uint32_t t = p->f0c & 0xFFFFFF00u;
    void *v = data_ov003_021797e4;
    p->f14 = x1;
    p->f0c = t;
    p->vt = v;
    p->f1a = x3;
    p->f18 = x2;
    p->f1c = b;
    p->f1e = c;
    p->f20 = a;
    p->f24 = d;
}
