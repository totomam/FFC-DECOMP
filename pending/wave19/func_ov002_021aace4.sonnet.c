#include "ffc/types.h"
extern uint32_t data_ov002_021d52c4[];
typedef struct Obj {
    uint32_t *vt; uint32_t f4; uint32_t f8; uint32_t fc; uint32_t f10;
    uint32_t f14; uint32_t f18; uint8_t f1c; uint8_t pad1d[3];
    uint32_t f20; uint8_t f24;
} Obj;
typedef struct S { uint32_t a; uint8_t b; } S;
Obj *func_ov002_021aace4(Obj *p, uint32_t a1, uint32_t a2, uint8_t a3, S s)
{
    uint8_t *d;
    p->fc &= ~0xff;
    p->f14 = a1;
    p->f20 = s.a;
    p->vt = data_ov002_021d52c4;
    p->f18 = a2;
    p->f1c = a3;
    d = &p->f24;
    *d = s.b;
    return p;
}
