#include "ffc/types.h"

struct Obj {
    uint32_t a[6];
    struct Obj *self;
    uint8_t *ptr;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
};

extern uint8_t *data_ov006_021bc820;
extern uint8_t data_ov006_021b8ac6[];
extern uint8_t data_ov006_021b8ac4[];
extern uint8_t data_ov006_021b8ac0[];
extern void func_ov006_021b43e0(void);

extern uint32_t func_ov006_021b49e4(uint32_t a, uint32_t b);
extern void func_02078e98(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_020820fc(void);
extern void func_020820d0(void);
extern void func_02078f2c(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_ov006_021b4624(void *p, uint32_t x);
extern uint32_t func_ov006_021b570c(uint32_t a, void *fn, void *p, uint32_t c);

static inline void h(uint32_t i, uint32_t v) {
    volatile uint16_t *p;
    p = (volatile uint16_t *)0x4000008; if (i == 1) p = (volatile uint16_t *)0x4001008;
    *p = (uint16_t)(*p & 0xffbf);
    *p = (uint16_t)((*p & 0x43) | (v << 6));
}

struct Obj *func_ov006_021b42f8(uint32_t idx, uint32_t param)
{
    struct Obj *o;
    uint32_t r6;
    uint32_t r7;
    volatile uint16_t *reg;
    uint32_t addr;

    o = (struct Obj *)(data_ov006_021bc820 + 0x610 + idx * 0x30);
    r6 = *(uint16_t *)(data_ov006_021b8ac6 + (idx << 2));
    r7 = *(uint16_t *)(data_ov006_021b8ac4 + (idx << 2));
    o->f28 = func_ov006_021b49e4((r7 * r6) << 5, 0x20);

    h(idx, 0x30);

    func_02078e98(o, o->f28, r7, r6, 4);

    o->self = o;
    o->ptr = data_ov006_021bc820 + (param << 3);
    o->f20 = 1;
    o->f24 = 1;

    if (idx == 1) {
        func_020820fc();
    } else {
        func_020820d0();
    }

    func_02078f2c(o, r7, r6, 0, 0, 0x20, *(uint16_t *)(data_ov006_021b8ac0 + (idx << 1)), 0xf);
    func_ov006_021b4624(o, 0);

    o->f2c = func_ov006_021b570c(1, (void *)func_ov006_021b43e0, data_ov006_021bc820 + 0x67c + idx, 0xc8);
    return o;
}
