#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;
extern uint8_t data_ov003_02179de0[];
extern uint8_t data_ov003_02179e00[];

extern uint32_t func_020192f4(uint32_t x);
extern void func_02018404(void *out, uint32_t x);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_0201c0d0(uint32_t a, uint32_t b);
extern uint32_t func_ov003_0214649c(void *obj);
extern uint32_t func_02091b10(void *object, void *first, ...);
extern void func_02005988(void *dst, void *src);
extern uint32_t func_02052000(void *obj);
extern void func_020059cc(void *obj);
extern uint32_t func_0203bb94(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *obj, uint32_t node);
extern uint32_t func_0205e7ac(uint32_t obj);
extern uint32_t func_0205e7a8(uint32_t obj);
extern uint32_t func_0205da88(void);
extern void func_02058318(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *obj);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t fc;
} Ctx;

uint32_t func_ov003_02151fa8(uint8_t *a, uint32_t unused, uint32_t c)
{
    Ctx ctx;
    uint8_t s14[0xc];
    uint8_t s30[0x44];
    uint32_t v, sum, i, n, p, j;
    uint8_t *m, *base, *e, *mar2;
    uint32_t q, r4, obj;
    uint32_t x;
    Ctx *k;

    v = func_020192f4(data_020b8e44);
    func_02018404(&ctx, data_020b8e44);

    sum = 0;
    for (i = 0; i < *(uint32_t *)((uint8_t *)func_02052d90((void *)ctx.f4, ctx.f8) + 4); i++) {
        m = func_02052d90((void *)ctx.f4, ctx.f8);
        base = m + *(uint32_t *)(m + 8);
        e = base + (i << 3);
        if (v == *(uint16_t *)(e + 2)) {
            if (func_0201c0d0(data_020b93b8, *(uint16_t *)e) != 0) {
                n = *(uint16_t *)(e + 4);
                p = 1;
                for (j = 0; j < n; j++) {
                    p = p * 10;
                }
                sum += p;
            }
        }
    }

    q = func_ov003_0214649c(*(void **)(a + 0x94));
    mar2 = func_02052d90(*(void **)(q + 0xe4), *(uint32_t *)(q + 0xe8));
    x = *(uint32_t *)(mar2 + 0x1c);
    if (x != 0) {
        func_02091b10(s30, data_ov003_02179de0, v, sum, x);
    } else {
        func_02091b10(s30, data_ov003_02179e00, v, sum);
    }

    func_02005988(s14, s30);
    r4 = func_02052000(s14);
    func_020059cc(s14);
    if (r4 != 0) {
        uint8_t *o;
        uint32_t *vt;
        o = (uint8_t *)func_0203bb94(s30, 1, 1, 0);
        *(uint8_t **)(a + 0xa4) = o;
        vt = *(uint32_t **)o;
        ((void (*)(void *, uint32_t))vt[8])(o, 2);
        o = *(uint8_t **)(a + 0xa4);
        vt = *(uint32_t **)o;
        ((void (*)(void *))vt[10])(o);
        func_02056bc0(a + 0x48, *(uint32_t *)(a + 0xa4));
        if (c != 0) {
            r4 = func_0205e7ac(*(uint32_t *)(a + 0xa4));
            func_0205e7a8(*(uint32_t *)(a + 0xa4));
            func_02058318(r4, func_0205da88(), 0x14, 0, 0, (uint32_t)-1);
        }
    }

    k = &ctx;
    if (k->f4 != 0) {
        if (k->fc != 0) {
            func_02052d3c(k->f4, k->f8);
        }
        func_02052c04(k->f4);
    }

    return (uint32_t)func_02053290(k);
}
