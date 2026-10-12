/* cflags: -lang c++ */
#include "ffc/types.h"
struct Obj { virtual void v0(); virtual void v1(); virtual void v2(uint32_t, uint32_t); virtual void v3(); virtual void v4(uint32_t); virtual void v5(uint32_t); };
extern "C" {

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
extern void *func_02023e3c(Obj *b);
extern void func_02028454(Tmp *t, void *x, void *y, void *z, uint32_t w);
extern void func_02052d3c(uint32_t h, uint32_t p);
extern void func_02052c04(uint32_t h);
extern Tmp *func_0202a608(void *c);
extern void func_0202a5fc(void *c, uint32_t v);
extern void func_0202a600(void *c, uint32_t v);
extern uint32_t func_0202a5e8(void *c);
extern uint32_t func_0202a5f0(void *c);
extern uint32_t func_0202a5f4(void *c);
extern void func_020240e8(Obj *b, uint32_t x, uint32_t y, uint32_t z);
extern uint32_t func_0202a5ec(void *a);

}
extern "C" void func_0202a3c0(void *ap, Obj *b, void *c, uint32_t d)
{
    uint8_t *a = (uint8_t *)ap;
    uint32_t v;
    Tmp tC, tB, tA;
    struct { void *p; volatile uint8_t f; } g;
    uint32_t z8, zc;
    Tmp *r;

    g.p = data_021394c4;
    g.f = 1;
    if (g.f) {
        func_0208763c();
    }
    {
        void *q;
        if (c == 0) goto L46;
        if (FW(a, 0x84) <= 0x2c) goto L42;
    L2E:
        q = a;
    CALL:
        v = func_0202a5e0(q);
        b->v2(v, 0);
        goto L0066;
    L42:
        q = c;
        goto CALL;
    L46:
        if (FW(a, 0x84) > 0x2c) goto L2E;
        if (g.f) {
            func_02087678(g.p);
        }
        return;
    }
L0066:
    v = func_0202a5e4(a);
    b->v4(v);
    if (c == 0) {
        goto L0172;
    }
    if (FW(a, 0x8c) <= 0xc) {
        goto LB;
    }
    tC.h = FW(a, 0x54);
    tC.p = FW(a, 0x58);
    tC.f = FB(a, 0x5c);
    if (tC.h) {
        func_02052be0(tC.h);
        if (tC.f) {
            func_02052d10(tC.h, tC.p);
        }
    }
    func_02028454(&tC, a + 0x7c, a + 0x80, func_02023e3c(b), d);
    if (tC.h) {
        if (tC.f) {
            func_02052d3c(tC.h, tC.p);
        }
        func_02052c04(tC.h);
    }
    goto L01d8;
LB:
    zc = 0;
    z8 = 0;
    r = func_0202a608(c);
    tB.h = r->h;
    tB.p = r->p;
    tB.f = r->f;
    if (tB.h) {
        func_02052be0(tB.h);
        if (tB.f) {
            func_02052d10(tB.h, tB.p);
        }
    }
    func_02028454(&tB, &zc, &z8, func_02023e3c(b), d);
    if (tB.h) {
        if (tB.f) {
            func_02052d3c(tB.h, tB.p);
        }
        func_02052c04(tB.h);
    }
    func_0202a5fc(c, zc);
    func_0202a600(c, z8);
    func_020240e8(b, func_0202a5e8(c), func_0202a5f0(c), func_0202a5f4(c));
    goto L01f4;
L0172:
    if (FW(a, 0x8c) <= 0xc) {
        goto L01ec;
    }
    tA.h = FW(a, 0x54);
    tA.p = FW(a, 0x58);
    tA.f = FB(a, 0x5c);
    if (tA.h) {
        func_02052be0(tA.h);
        if (tA.f) {
            func_02052d10(tA.h, tA.p);
        }
    }
    func_02028454(&tA, a + 0x7c, a + 0x80, func_02023e3c(b), d);
    if (tA.h) {
        if (tA.f) {
            func_02052d3c(tA.h, tA.p);
        }
        func_02052c04(tA.h);
    }
L01d8:
    v = func_0202a5e8(a);
    func_020240e8(b, v, FW(a, 0x7c), FW(a, 0x80));
    goto L01f4;
L01ec:
    func_020240e8(b, 0, 0, 0);
L01f4:
    v = func_0202a5ec(a);
    b->v5(v);
    if (g.f) {
        func_02087678(g.p);
    }
}
