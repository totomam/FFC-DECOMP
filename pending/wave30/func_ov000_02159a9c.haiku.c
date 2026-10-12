#include "ffc/types.h"

extern uint32_t func_ov000_02159440(void *a, void *b);

struct Obj {
    uint32_t f0;
    uint8_t p1[0x14];
    uint8_t *elems;
    uint8_t p2[0x18];
    void (*fnA)(uint32_t, uint32_t, void *, uint32_t);
    uint32_t argA;
    uint8_t p3[8];
    void (*fnB)(uint32_t, uint32_t);
    uint32_t argB;
};

struct G {
    uint8_t pad[0xc];
    struct Obj *obj;
};

extern struct G data_ov000_0217004c;

void func_ov000_02159a9c(uint32_t p0)
{
    uint8_t work[0x214];
    struct Obj *o = data_ov000_0217004c.obj;
    if (o->fnB != 0 && o->f0 != 1) {
        o->fnB(p0, o->argB);
    }
    o = data_ov000_0217004c.obj;
    if (o->fnA != 0) {
        uint8_t *buf = work + 0x108;
        uint32_t r = func_ov000_02159440(o->elems + 12 * p0, buf);
        o = data_ov000_0217004c.obj;
        o->fnA(p0, r, buf, o->argA);
    }
}
