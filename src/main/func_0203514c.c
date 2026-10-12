#include "ffc/types.h"

extern uint32_t func_02068680(uint32_t x);
extern uint32_t func_02068b30(uint32_t x);

typedef struct Obj {
    void **vtbl;
} Obj;

typedef struct Self {
    uint8_t pad[8];
    Obj *obj;
} Self;

void func_0203514c(Self *p, uint32_t x)
{
    uint32_t v;
    Obj *o;

    if (func_02068680(x) != 0) {
        return;
    }
    v = func_02068b30(x);
    if (v >= 0x30 && v <= 0x39) {
        v -= 0x30;
    } else if (v >= 0x61 && v <= 0x66) {
        v -= 0x57;
    } else if (v >= 0x41 && v <= 0x46) {
        v -= 0x3c;
    } else {
        v = 0;
    }
    o = p->obj;
    if (o != 0) {
        ((void (*)(Obj *, uint32_t))o->vtbl[6])(o, v + 1);
    }
}
