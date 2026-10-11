#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern char data_020ac978[];

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
    uint8_t f28;
    uint32_t f2c;
} Obj;

Obj *func_ov002_021c9354(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                         uint32_t e, uint32_t f, uint32_t g, uint8_t h)
{
    Obj *o = (Obj *)func_0205681c(0x30);
    if (o != 0) {
        o->f08 = 0;
        o->f0c = 0x100d5;
        o->vt = data_020ac978;
        o->f10 = a;
        o->f14 = b;
        o->f18 = c;
        o->f1c = d;
        o->f20 = e;
        o->f24 = f;
        o->f28 = h;
        o->f2c = g;
    }
    return o;
}
