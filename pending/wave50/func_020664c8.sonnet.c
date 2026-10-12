#include "ffc/types.h"

extern uint32_t *func_0205681c(uint32_t size);
extern void func_02055110(uint32_t data, uint32_t *obj, uint32_t x, uint32_t y, uint32_t p, uint32_t q);
extern uint32_t data_020b1264;
extern uint32_t data_0213e098;

typedef struct {
    uint32_t a, b, c, d;
} S4;

void func_020664c8(uint32_t *self, S4 s, uint32_t e) {
    S4 loc;

    uint32_t *o;
    uint32_t *q;
    uint32_t f34, f38, f4;


    o = func_0205681c(0x34);
    if (o != 0) {
        q = (uint32_t *)self[0x2c / 4];
        f4 = q[1];
        loc = s;
        f34 = self[0x34 / 4];
        f38 = self[0x38 / 4];
        o[0x0c / 4] = o[0x0c / 4] & ~0xffu;
        o[0] = (uint32_t)&data_020b1264;
        o[0x14 / 4] = (e << 4) | e;
        o[0x18 / 4] = f4;
        o[0x1c / 4] = f34;
        o[0x20 / 4] = f38;
        o[0x24 / 4] = loc.c - loc.a;
        o[0x28 / 4] = loc.d - loc.b;
        o[0x2c / 4] = loc.a;
        o[0x30 / 4] = loc.b;
    }
    func_02055110(data_0213e098, o, (uint32_t)o, loc.c, f34, f38);
}
