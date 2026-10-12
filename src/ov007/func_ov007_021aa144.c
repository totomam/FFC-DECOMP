#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_02021338(uint32_t x);
extern int func_020692e0(void *o);
extern void func_02069288(void *o);
extern int func_020692e8(void *o);
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_020692a4(void *o);
extern void func_020692f0(void *o);
extern void func_ov007_021aa054(void *self);
extern void func_ov007_021a9d64(void *self, int x);
extern Pair data_ov007_021c4cb4[];
extern uint32_t data_ov007_021c49f0[];

#define VT(o) (*(void ***)(o))

void func_ov007_021aa144(void *self, uint8_t v)
{
    uint8_t *p = (uint8_t *)self;
    void *o;
    void **t;
    uint8_t idx;
    uint8_t i;
    uint8_t val;
    uint8_t *q;
    Pair s;

    func_02021338(0xbc);
    p[0x135] = v;
    o = *(void **)(p + 0xc4);
    if (func_020692e0(o) == 0) {
        func_02069288(o);
        if (func_020692e8(o)) {
            t = (void **)((uint8_t *)o + 0x98);
            ((void (*)(void *, int, int))VT(*t)[14])(*t, 3, 1);
        } else {
            t = (void **)((uint8_t *)o + 0x98);
            ((void (*)(void *, int, int))VT(*t)[14])(*t, 2, 1);
        }
    }

    val = (uint8_t)(func_0209a76c(p[0x135] + 1, 10) >> 32);
    q = p + p[0x134];
    q[0x136] = val;

    idx = p[0x134];
    o = ((void **)(p + 0xf0))[idx];
    q = p + idx;
    ((void (*)(void *, int, int))VT(o)[14])(o, q[0x136] + 1, 0);

    o = ((void **)(p + 0xf0))[p[0x134]];
    ((void (*)(void *))VT(o)[10])(o);

    p[0x134] = p[0x134] + 1;
    if (p[0x134] >= 12) {
        o = *(void **)(p + 0x120);
        ((void (*)(void *))VT(o)[11])(o);
        for (i = 0; i < 10; i++) {
            func_020692a4(*(void **)(p + 0xc8 + i * 4));
        }
        o = *(void **)(p + 0xc0);
        if (func_020692e0(o) == 0) {
            func_02069288(o);
            if (func_020692e8(o)) {
                t = (void **)((uint8_t *)o + 0x98);
                ((void (*)(void *, int, int))VT(*t)[14])(*t, 3, 1);
            } else {
                t = (void **)((uint8_t *)o + 0x98);
                ((void (*)(void *, int, int))VT(*t)[14])(*t, 2, 1);
            }
        }
        func_020692f0(*(void **)(p + 0xc0));
    } else {
        Pair *e = data_ov007_021c4cb4 + p[0x134];
        s.a = e->a + data_ov007_021c49f0[9];
        s.b = e->b + data_ov007_021c49f0[10];
        o = *(void **)(p + 0x120);
        ((void (*)(void *, Pair))VT(o)[3])(o, s);
    }

    func_ov007_021aa054(p);
    func_ov007_021a9d64(p, 1);
}
