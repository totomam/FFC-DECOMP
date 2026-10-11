#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern char data_ov003_021794ac[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    void *vt;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    int f14;
    uint16_t f18;
    int f1c;
    uint32_t f20;
    uint32_t f24;
} Obj;

Obj *func_ov003_021495dc(int p0, Pair pr, uint16_t d, int e)
{
    Obj *o = (Obj *)func_0205681c(0x28);
    if (o != 0) {
        Pair t;
        t = pr;
        o->f0c &= ~0xffu;
        o->vt = data_ov003_021794ac;
        o->f14 = p0;
        o->f18 = d;
        o->f1c = e;
        o->f20 = t.a;
        o->f24 = t.b;
    }
    return o;
}
