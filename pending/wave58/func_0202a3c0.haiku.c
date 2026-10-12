#include "ffc/types.h"

typedef struct {
    uint32_t h;
    uint32_t p;
    uint8_t f;
} Tmp;

typedef void (*VF3)(void *, uint32_t, uint32_t);
typedef void (*VF1)(void *, uint32_t);

#define FW(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))
#define FB(p, o) (*((uint8_t *)(p) + (o)))

extern uint8_t data_021394c4[];
extern void func_0208763c(void);
extern void func_02087678(void *p);
extern uint32_t func_0202a5e0(void *a);
extern uint32_t func_0202a5e4(void *a);
extern void func_02052be0(uint32_t h);
extern void func_02052d10(uint32_t h, uint32_t p);
extern void *func_02023e3c(void *b);
extern void func_02028454(Tmp *t, void *x, void *y, void *z, uint32_t w);
extern void func_02052d3c(uint32_t h, uint32_t p);
extern void func_02052c04(uint32_t h);
extern Tmp *func_0202a608(void *c);
extern void func_0202a5fc(void *c, uint32_t v);
extern void func_0202a600(void *c, uint32_t v);
extern uint32_t func_0202a5e8(void *c);
extern uint32_t func_0202a5f0(void *c);
extern uint32_t func_0202a5f4(void *c);
extern void func_020240e8(void *b, uint32_t x, uint32_t y, uint32_t z);
extern uint32_t func_0202a5ec(void *a);

void func_0202a3c0(void *ap, void *b, void *c, uint32_t d)
{
    uint8_t *a = ap;
    void *dat = data_021394c4;
    volatile uint8_t flag = 1;
    uint32_t zc, z8, v;
    Tmp t;
    Tmp *r;

    if (flag) {
        func_0208763c();
    }
    if (c == 0) {
        goto L0046;
    }
L0024:
    v = func_0202a5e0(a);
    ((VF3)(((void **)*(void ***)b)[2]))(b, v, 0);
    goto L0066;
L0046:
    if (FW(a, 0x84) > 0x2c) {
        goto L0024;
    }
    if (flag) {
        func_02087678(dat);
    }
    return;
L0066:
    v = func_0202a5e4(a);
    ((VF1)(((void **)*(void ***)b)[4]))(b, v);
    if (c == 0) {
        goto L0172;
    }
    if (FW(a, 0x8c) <= 0xc) {
        goto LB;
    }
    t.h = FW(a, 0x54);
    t.p = FW(a, 0x58);
    t.f = FB(a, 0x5c);
    if (t.h) {
        func_02052be0(t.h);
        if (t.f) {
            func_02052d10(t.h, t.p);
        }
    }
    func_02028454(&t, a + 0x7c, a + 0x80, func_02023e3c(b), d);
    if (t.h) {
        if (t.f) {
            func_02052d3c(t.h, t.p);
        }
        func_02052c04(t.h);
    }
    goto L01d8;
LB:
    zc = 0;
    z8 = 0;
    r = func_0202a608(c);
    t.h = r->h;
    t.p = r->p;
    t.f = r->f;
    if (t.h) {
        func_02052be0(t.h);
        if (t.f) {
            func_02052d10(t.h, t.p);
        }
    }
    func_02028454(&t, &zc, &z8, func_02023e3c(b), d);
    if (t.h) {
        if (t.f) {
            func_02052d3c(t.h, t.p);
        }
        func_02052c04(t.h);
    }
    func_0202a5fc(c, zc);
    func_0202a600(c, z8);
    zc = func_0202a5e8(c);
    z8 = func_0202a5f0(c);
    v = func_0202a5f4(c);
    func_020240e8(b, zc, z8, v);
    goto L01f4;
L0172:
    if (FW(a, 0x8c) <= 0xc) {
        goto L01ec;
    }
    t.h = FW(a, 0x54);
    t.p = FW(a, 0x58);
    t.f = FB(a, 0x5c);
    if (t.h) {
        func_02052be0(t.h);
        if (t.f) {
            func_02052d10(t.h, t.p);
        }
    }
    func_02028454(&t, a + 0x7c, a + 0x80, func_02023e3c(b), d);
    if (t.h) {
        if (t.f) {
            func_02052d3c(t.h, t.p);
        }
        func_02052c04(t.h);
    }
L01d8:
    v = func_0202a5e8(a);
    func_020240e8(b, v, FW(a, 0x7c), FW(a, 0x80));
    goto L01f4;
L01ec:
    func_020240e8(b, 0, 0, 0);
L01f4:
    v = func_0202a5ec(a);
    ((VF1)(((void **)*(void ***)b)[5]))(b, v);
    if (flag) {
        func_02087678(dat);
    }
}
