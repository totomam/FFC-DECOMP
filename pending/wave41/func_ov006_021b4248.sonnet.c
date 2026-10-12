#include "ffc/types.h"

extern uint8_t *data_ov006_021bc820;
extern void *func_ov006_021b3f44(uint32_t x);
extern uint32_t func_ov006_021b52c8(int a, uint32_t b, uint32_t c, uint32_t *d);
extern uint32_t func_02078ff8(uint32_t x, uint32_t y);
extern void func_02078eb4(void *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

struct Obj {
    uint8_t pad0[0x14];
    void *vt;
    struct Obj *self;
    void *ptr1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint16_t f2c;
    uint8_t f2e;
    uint8_t f2f;
};

struct Obj *func_ov006_021b4248(int a, uint8_t b, uint8_t c, uint32_t d, uint32_t *out1, uint32_t e)
{
    struct Obj *o;
    struct { uint32_t d; uint32_t t; } L;
#define tmp L.t
    uint32_t base;

    L.d = d;
    o = func_ov006_021b3f44(*(uint32_t *)(data_ov006_021bc820 + 0x670));
    o->f2e = b;
    o->f2f = c;
    o->f28 = func_ov006_021b52c8(a, b * c, L.d, &L.t);
    o->f2c = tmp;
    *out1 = func_02078ff8(b, c);
    if (a == 1) {
        base = 0x66 << 20;
    } else {
        base = 0x19 << 22;
    }
    base += tmp << 7;
    func_02078eb4(o, base, b, c, 4);
    ((void (*)(struct Obj *, int))((void **)o->vt)[1])(o, 0);
    {void *p = data_ov006_021bc820 + (e << 3);
    o->self = o;
    o->ptr1c = p;}
    o->f20 = 1;
    o->f24 = 1;
    return o;
}
