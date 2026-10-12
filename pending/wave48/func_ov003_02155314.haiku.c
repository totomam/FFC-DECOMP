#include "ffc/types.h"

typedef struct {
    uint32_t hdr;
    void *a;
    void *b;
    uint8_t f;
} Hnd;

extern void func_02053234(void *object);
extern void func_02016de4(Hnd *out, void *src);
extern void func_020532a4(Hnd *dst, Hnd *src);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02052be0(void *a);
extern void func_02052d10(void *a, void *b);
extern void *func_02053290(void *object);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_ov003_02155254(void *ctx, uint16_t a, uint16_t b);
extern void *data_020b8e44;

void func_ov003_02155314(uint8_t *ctx, uint32_t idx) {
    Hnd h1;
    Hnd h0;
    Hnd *p;
    Hnd *q;
    uint8_t *o;
    uint8_t *base;
    uint32_t i;
    uint32_t n;
    uint8_t *m;

    func_02053234(&h1);
    h1.a = 0;
    h1.f = 0;
    o = *(uint8_t **)(ctx + 0x30);
    p = *(Hnd **)(o + 0x394);
    if (p == 0) {
        func_02016de4(&h0, data_020b8e44);
        func_020532a4(&h1, &h0);
        if ((void *)&h0.a != (void *)&h1.a) {
        if (h1.a != 0) {
            if (h1.f) {
                func_02052d3c(h1.a, h1.b);
            }
            func_02052c04(h1.a);
        }
        h1.a = h0.a;
        h1.b = h0.b;
        h1.f = h0.f;
        if (h0.a != 0) {
            func_02052be0(h0.a);
            if (h1.f) {
                func_02052d10(h1.a, h1.b);
            }
        }
        }
        q = &h0;
        if (q->a != 0) {
            if (q->f) {
                func_02052d3c(q->a, q->b);
            }
            func_02052c04(q->a);
        }
        func_02053290(q);
        p = &h1;
    }
    func_02052d90(p->a, p->b);
    base = (uint8_t *)func_02052d90(p->a, p->b);
    m = base + *(uint32_t *)(base + *(uint32_t *)(base + 0xc) + idx * 4);
    n = *(uint32_t *)(m + 4);
    for (i = 0; i < n; i++) {
        uint16_t lo = *(uint16_t *)(m + *(uint32_t *)(m + 8) + i * 4);
        uint16_t hi = *(uint16_t *)(m + *(uint32_t *)(m + 8) + i * 4 + 2);
        func_ov003_02155254(ctx, lo, hi);
    }
    q = &h1;
    if (q->a != 0) {
        if (q->f) {
            func_02052d3c(q->a, q->b);
        }
        func_02052c04(q->a);
    }
    func_02053290(q);
}
