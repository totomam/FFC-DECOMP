#include "ffc/types.h"

typedef struct Byte {
    uint8_t b;
} Byte;

extern void func_02058e98(void *a, Byte b);

typedef struct Elem {
    uint32_t w;
    int16_t h4;
    uint16_t h6;
} Elem;

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

void func_02058a08(Obj *p) {
    Obj *o = p;
    uint8_t one = 1;
    uint8_t z;
    Elem *e;

    o->f50 = one;
    o->f2c = one - 2;
    o->f28 = one - 2;
    o->f1c = o->f38 << 5;
    z = 0;
    if (o->f38 < o->f3c) {
        uint32_t idx = o->f38;
        Elem *base = o->f34;
        o->f38 = idx + 1;
        e = base + idx;
        e->w = base->w;
        e->h4 = base->h4;
        e->h6 = base->h6;
    } else {
        Byte t;
        t.b = z;
        func_02058e98(&o->f34, t);
    }
    e = o->f34 + (o->f38 - 1);
    e->h4 = 0;
}
