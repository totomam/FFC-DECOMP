#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S8;

extern void func_02056c9c(void *obj, uint32_t v);
extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_ov002_02198df4(uint32_t v);
extern void *func_ov002_0219b208(void *obj, uint32_t a5, uint32_t x, uint32_t a2, uint32_t b8);
extern S8 func_ov002_0219b0cc(uint32_t a2, uint32_t i);
extern void *func_ov002_021bd608(void *obj, uint32_t a5, uint32_t a3, S8 s);
extern uint8_t *func_ov002_02198e58(uint32_t v);
extern uint8_t func_02036360(const void *object);
extern uint8_t func_0203c474(uint32_t a, uint32_t b, uint32_t c);
extern char data_020ae6d4[];
extern char data_ov002_021d4b9c[];
extern char data_ov002_021d4bb8[];
extern char data_020b0688[];

void *func_ov002_0219b67c(void *self, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t a5, uint8_t a6)
{
    uint32_t i;
    uint32_t l1 = a1;
    uint32_t l3 = a3;
    uint8_t *s0;
    uint8_t *s1;
    void *o;
    S8 t;

    func_02056c9c(self, 0);

    s0 = (uint8_t *)self + 0x80;
    *(void **)s0 = data_020ae6d4;
    s1 = s0 + 0x10;
    *(uint32_t *)(s0 + 4) = 0;
    *(uint32_t *)(s0 + 8) = 0;
    *(uint32_t *)(s0 + 0xc) = 0;
    *(uint32_t *)(s0 + 0x10) = 0;
    s0 += 0x1c;
    *(uint32_t *)(s1 + 4) = 0;
    *(uint32_t *)(s1 + 8) = 0;
    func_02087620(s0);

    *(void **)self = data_ov002_021d4b9c;
    *(void **)((uint8_t *)self + 0x80) = data_ov002_021d4bb8;
    *(uint32_t *)((uint8_t *)self + 0xb8) = l1;
    *(uint32_t *)((uint8_t *)self + 0xbc) = a2;
    *(uint32_t *)((uint8_t *)self + 0xc0) = l3;
    *(uint32_t *)((uint8_t *)self + 0xc4) = a5;

    for (i = 0; i < 3; i++) {
        *(uint32_t *)((uint8_t *)self + 0xd0 + i * 4) = 0;
    }

    s0 = (uint8_t *)self + 0xe0;
    s0[4] = 0;
    *(uint32_t *)(s0 + 4) = 0;
    *(uint32_t *)(s0 + 8) = 0;
    *(uint32_t *)(s0 + 0xc) = 0;
    s0 += 0x10;
    *(void **)((uint8_t *)self + 0xe0) = data_020b0688;
    func_02087620(s0);

    *(uint32_t *)((uint8_t *)self + 0x10c) = 0;
    *(uint32_t *)((uint8_t *)self + 0x110) = 0;
    *(uint32_t *)((uint8_t *)self + 0x114) = 0;
    *(uint32_t *)((uint8_t *)self + 0x128) = 0;
    ((uint8_t *)self)[0x130] = a6;
    ((uint8_t *)self)[0x131] = 0;

    ((uint8_t *)self)[0x5a] = 1;

    o = func_0205681c(0xc8);
    if (o != 0) {
        uint32_t h = func_ov002_02198df4(*(uint32_t *)((uint8_t *)self + 0xc4));
        o = func_ov002_0219b208(o, *(uint32_t *)((uint8_t *)self + 0xc4), h, a2, *(uint32_t *)((uint8_t *)self + 0xb8));
    }
    *(void **)((uint8_t *)self + 0x118) = o;
    func_02056bc0((uint8_t *)self + 0x48, o);

    for (i = 0; i < 3; i++) {
        void *q = func_0205681c(0xd8);
        if (q != 0) {
            t = func_ov002_0219b0cc(a2, i);
            q = func_ov002_021bd608(q, a5, l3, t);
        }
        *(void **)((uint8_t *)self + 0x11c + i * 4) = q;
        func_02056bc0((uint8_t *)self + 0x48, *(void **)((uint8_t *)self + 0x11c + i * 4));
    }

    {
        uint8_t *base = func_ov002_02198e58(*(uint32_t *)((uint8_t *)self + 0xc4));
        uint32_t off;
        uint8_t c1, c2, c3;
        base = base + 0x14;
        off = *(uint32_t *)((uint8_t *)self + 0xb8) * 0x160;
        c1 = func_02036360(base + off + 0x1c);
        c2 = func_02036360(base + off + 0x7c);
        c3 = func_02036360(base + off + 0xdc);
        ((uint8_t *)self)[0x131] = func_0203c474(c1, c2, c3);
    }

    return self;
}
