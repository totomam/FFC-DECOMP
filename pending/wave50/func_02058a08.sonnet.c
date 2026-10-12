#include "ffc/types.h"
typedef struct Byte { uint8_t b; } Byte;
typedef struct Elem { uint32_t w; int16_t h4; uint16_t h6; } Elem;
typedef struct Obj {
    uint32_t pad0[7];
    uint32_t f1c;
    uint32_t pad2[2];
    int32_t f28;
    int32_t f2c;
    uint32_t pad30;
    Elem *f34;
    uint32_t f38;
    uint32_t f3c;
    uint32_t pad40[4];
    uint8_t f50;
} Obj;
extern void func_02058e98(void *a, Elem *c, Byte b);
void func_02058a08(Obj *p) {
    Obj *o = p;
    uint8_t z; Elem *e;
    Elem *base;
    uint32_t n;
    o->f50 = 1;
    o->f2c = -1;
    o->f28 = -1;
    o->f1c = o->f38 << 5;
    base = o->f34;
    z = 0;
    if (o->f38 < o->f3c) {
        o->f38 = o->f38 + 1;
        e = base + (o->f38 - 1);
        e->w = base->w;
        e->h4 = base->h4;
        e->h6 = base->h6;
    } else {
        Byte t; t.b = z;
        func_02058e98(&o->f34, base, t);
    }
    o->f34[o->f38 - 1].h4 = 0;
}
