#include "ffc/types.h"

typedef struct Deep {
    uint32_t p0[4];
    uint32_t f10;
} Deep;

typedef struct Inner {
    uint8_t pad[0xa0];
    Deep *fa0;
} Inner;

typedef struct Obj {
    uint32_t v[3];
} Obj;

typedef struct Self {
    uint32_t f0[3];
    uint32_t flags;
    uint32_t f10[28];
    uint32_t f80;
    uint32_t f84;
    Inner *f88;
    uint32_t pad8c[6];
    uint32_t fa4;
} Self;

extern uint32_t func_ov004_02153544(void *p);
extern uint32_t func_0201e9f8(void *p);
extern void func_02005988(void *dst, const void *src);
extern uint32_t func_020159c8(void *p, uint32_t n);
extern void func_02053370(void *dst, void *src, uint32_t n);
extern void func_ov004_02145e04(Self *self, uint32_t n, Obj *a, uint32_t *b, Obj *c, Obj *d);
extern void *func_020059cc(void *object);

extern void *data_020b93b8;
extern void *data_020b8e44;
extern uint8_t data_ov004_02157b6c[];
extern uint8_t data_ov004_02157b78[];
typedef struct Pair { uint32_t a, b; } Pair;
extern Pair data_ov004_02157b70;

void func_ov004_02146d48(Self *p)
{
    Obj d, c, b, a;

    if (func_ov004_02153544(p->f88) != 0) {
        p->f88->fa0->f10 = 3;
        p->flags = (p->flags & ~0xffu) | 2;
        return;
    }
    if (func_0201e9f8(data_020b93b8) == 0) {
        p->f88->fa0->f10 = 3;
        p->flags = (p->flags & ~0xffu) | 2;
        return;
    }

    p->fa4 = 0;
    func_02005988(&d, data_ov004_02157b6c);
    func_02005988(&c, data_ov004_02157b6c);
    func_02005988(&b, data_ov004_02157b78);
    func_02053370(&a, &b, func_020159c8(data_020b8e44, 9));
    func_ov004_02145e04(p, 0x11, &d, &p->fa4, &c, &a);
    func_020059cc(&a);
    func_020059cc(&b);
    func_020059cc(&c);
    func_020059cc(&d);
    *(Pair *)&p->f80 = data_ov004_02157b70;
}
