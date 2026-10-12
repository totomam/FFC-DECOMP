#include "ffc/types.h"

typedef uint32_t (*VFn3)(void *, uint32_t);
typedef struct { uint32_t a, b; } Pair;

extern void *data_020b8e44;
extern uint32_t func_02076434(void *p);
extern uint32_t func_0203c250(void);
extern uint32_t func_02060ef8(void);
extern void func_0203c2d0(void);
extern void *func_02060610(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *dst, uint32_t v);
extern void *func_020324d0(void *obj, Pair s, void *buf, uint32_t c, void *d, void *e);
extern void *func_020059cc(void *object);
extern void *func_02032d24(void *obj, Pair s, void *buf, uint32_t c, void *d);

void func_ov001_0218e3b4(uint8_t *self, uint32_t flag) {
    void *v2 = *(void **)data_020b8e44;
    void *o2;
    void *p;
    void *q;
    uint8_t *n;
    uint32_t x, r7;
    uint32_t d;
    uint32_t bi[3], be[3];
    Pair pi, pe;
    volatile uint32_t t;

    if (*(uint32_t *)((uint8_t *)v2 + 0x88) == 0) return;
    x = func_02076434(v2);
    o2 = *(void **)(self + 0x98);
    r7 = ((VFn3 *)*(void **)o2)[3](o2, x);
    func_0203c250();
    t = func_02060ef8();
    func_0203c2d0();
    q = func_02060610();
    n = self + 0x14;
    func_02056bc0(n, q);
    func_02056bc0(n, (void *)t);

    if (flag) {
        d = 0;
        p = func_0205681c(0xc0);
        if (p) {
            func_02005988(bi, r7);
            pi.a = 0x80;
            pi.b = 0x60;
            p = func_020324d0(p, pi, bi, 4, 0, 0);
            d = 1;
        }
        func_02056bc0(self + 0x14, p);
        if (d) func_020059cc(bi);
    } else {
        d = 0;
        p = func_0205681c(0xb0);
        if (p) {
            func_02005988(be, r7);
            pe.a = 0x80;
            pe.b = 0x60;
            p = func_02032d24(p, pe, be, 4, 0);
            d = 1;
        }
        func_02056bc0(self + 0x14, p);
        if (d) func_020059cc(be);
    }
}
