#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t zero);
extern uint32_t func_02015a38(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_020159f8(uint32_t a);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern uint32_t func_0203b9cc(Pair p, uint32_t x, uint32_t y);
extern uint32_t func_02066878(uint32_t object);
extern void func_0205fdc8(uint32_t object, uint32_t value);
extern uint32_t func_0203b878(uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, uint32_t node);
extern char data_ov005_021990b0[];
extern uint32_t data_020b8e44;

void *func_ov005_021962f0(void *self, Pair p, uint32_t c)
{
    uint32_t *obj = (uint32_t *)self;
    Pair s;
    Pair s1;
    Pair s0;
    Pair *ps;
    uint32_t r4;
    uint32_t r1;
    uint32_t *q;
    uint32_t *vt;

    func_02056c9c(self, 0);
    *(uint32_t *)self = (uint32_t)data_ov005_021990b0;
    obj[34] = c;
    obj[32] = func_02015a38(data_020b8e44, 0, 1, 0);
    if (obj[34] != 1) {
        s1.a = 0xcb;
        s1.b = 0x10;
        ps = &s1;
    } else {
        s0.a = 0xa0;
        s0.b = 0x10;
        ps = &s0;
    }
    s.a = ps->a; s.b = ps->b;
    r4 = func_0203b9cc(s, func_020159f8(data_020b8e44), 1);
    if (obj[34] != 1) {
        func_0205fdc8(func_02066878(r4), 1);
    }
    r1 = obj[32];
    r4 = func_0203b878(r4, r1);
    obj[33] = r4;
    func_02056bc0(&obj[18], r4);
    ((void (*)(uint32_t, Pair))(*(uint32_t **)obj[33])[3])(obj[33], p);
    ((void (*)(uint32_t, uint32_t))(*(uint32_t **)obj[33])[8])(obj[33], 2);
    ((void (*)(uint32_t))(*(uint32_t **)obj[33])[10])(obj[33]);
    return self;
}
