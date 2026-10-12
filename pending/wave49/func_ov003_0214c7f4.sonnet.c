#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    void *p;
    uint32_t idx;
    uint8_t flag;
} Loc;

typedef struct { uint32_t a, b; } Pair;
typedef struct {
    uint32_t pad;
    Loc loc;
    uint32_t q[3];
} Frame;

extern uint32_t data_020b8e44;
extern uint32_t data_0209e040;

extern void func_02016704(Loc *loc, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_0209a484(uint32_t x);
extern uint32_t func_0209b5bc(uint32_t a, uint32_t b);
extern uint32_t func_0209b108(uint32_t a, uint32_t b);
extern uint32_t func_0209af28(uint32_t a, uint32_t b);
extern uint32_t func_0209ab5c(uint32_t a);
extern void *func_0203b688(void);
extern uint32_t func_0203b75c(uint32_t x);
extern uint32_t func_ov003_0215b344(uint32_t b);
extern uint32_t func_ov003_0215b1f8(uint32_t b, uint32_t c, uint32_t d, uint32_t e,
                                    uint32_t f, uint32_t g, uint32_t h);
extern uint32_t func_02056aec(uint32_t x);
extern uint32_t func_ov003_0215b294(uint32_t b, uint32_t c, Pair d,
                                    uint32_t f, uint32_t g, uint32_t h);
extern uint32_t func_02021610(uint32_t a, uint32_t b);
extern uint32_t func_ov003_0215b394(uint32_t b, uint32_t c, uint32_t d, uint32_t e,
                                    uint32_t f, uint32_t g, uint32_t h);
extern void func_02056bc0(void *object, void *node);
extern void func_02052d3c(void *p, uint32_t idx);
extern void func_02052c04(void *p);
extern void *func_02053290(void *object);

void *func_ov003_0214c7f4(uint8_t *a, uint32_t b, uint32_t c, uint32_t d,
                          uint32_t e, uint32_t f, uint32_t g)
{
    Loc loc;
    uint32_t q[3];
    uint8_t *m;
    uint8_t *r4;
    uint32_t x, t, s18, s1c, s20, s24, s28, s2c, s30, s34, sbf, r7;
    uint16_t h;
    uint32_t r5;

    func_02016704(&loc, data_020b8e44);
    m = func_02052d90(loc.p, loc.idx);
    r4 = m + *(uint32_t *)(m + *(uint32_t *)(m + 0xc) + 8);
    q[1] = *(uint32_t *)(r4 + 4);
    q[2] = *(uint32_t *)(r4 + 8);

    t = func_0209a484(*(uint32_t *)(r4 + 0xc));
    t = func_0209b5bc(t, 0x45800000u);
    t = func_0209b108(0xc2b40000u, t);
    t = func_0209b5bc(t, 0x43b40000u);
    t = func_0209af28(0x45800000u, t);
    s18 = func_0209ab5c(t);
    h = *(uint16_t *)(r4 + 2);
    r4 = func_0203b688();
    s1c = func_0203b75c(10);
    s20 = func_ov003_0215b344(b);
    s24 = func_ov003_0215b1f8(b, 2 << 13, 0x14, 0xc, 2, 2, 0);
    x = data_0209e040 - 5;
    s28 = func_0203b75c(15 - x);
    s2c = func_02056aec(*(uint32_t *)(a + (d << 2) + 0x218));
    s30 = func_0203b75c(x);
    sbf = func_ov003_0215b294(b, 2, *(Pair *)&q[1], s18, h, 0);
    r7 = func_02021610(0xf2, 0);
    s34 = func_0203b75c(5);
    r5 = func_ov003_0215b394(b, e, 0, 0x1000, f, g, 0);

    func_02056bc0(r4, (void *)c);
    func_02056bc0(r4, (void *)r5);
    func_02056bc0(r4, (void *)s34);
    func_02056bc0(r4, (void *)r7);
    func_02056bc0(r4, (void *)sbf);
    func_02056bc0(r4, (void *)s30);
    func_02056bc0(r4, (void *)s2c);
    func_02056bc0(r4, (void *)s28);
    func_02056bc0(r4, (void *)s24);
    func_02056bc0(r4, (void *)s20);
    func_02056bc0(r4, (void *)s1c);

    if (loc.p != 0) {
        Loc *l = &loc;
        if (((volatile uint8_t *)l)[0xc] != 0) {
            func_02052d3c(((void **)l)[1], ((uint32_t *)l)[2]);
        }
        func_02052c04(((void **)l)[1]);
    }
    func_02053290(&loc);
    return r4;
}
