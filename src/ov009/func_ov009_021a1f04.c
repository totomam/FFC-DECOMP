#include "ffc/types.h"

extern void *func_0203b720(void);
extern void *func_02056aec(void *a);
extern void *func_ov009_0219e428(uint32_t a);
extern void *func_02060634(void *a, uint32_t b, uint32_t c, void *d, uint32_t e, uint32_t f);
typedef struct { uint32_t a, b; } P;
extern void *func_02062a78(void *a, P p, P q, void *f, uint32_t g);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02005988(void *dst, void *src);
extern void func_020095b8(void *dst, void *src);
extern void *func_02036384(void *a);
extern void func_0200a630(void *dst, void *src);
extern void func_020510c0(void *dst, void *src, uint32_t n);
extern void func_0203943c(void *a, void *b, void *c, void *d);
extern void func_0200b65c(void *a, void *b);
extern void *func_020059cc(void *object);
extern void *func_0200a678(void *object);
extern void *func_0203be48(void *a, void *b, uint32_t c, uint32_t d);

extern uint8_t *data_0213df20;
extern uint8_t data_ov009_021b0618[];
extern uint32_t data_ov009_021b06b0[2];

void func_ov009_021a1f04(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t off;
    uint32_t A[3], B[3], C[3], D[3], E[3], F[3], G[3];
    P sx[2];
    uint8_t i; uint8_t *l;
    void *x, *y, *z, *v, *w, *t, *r, *tmp;
    uint8_t *rb, *s2, *s3;
    void *r6;


    x = func_0203b720();
    off = 0x7e << 2;
    y = func_02056aec(*(void **)(p + off));
    r6 = *(void **)(data_0213df20 + 0x20);
    t = func_ov009_0219e428(0x3c);
    z = func_02060634(r6, 0x10, 0, t, 0, 0);
    sx[0].a = 0; sx[0].b = 0xc0; sx[1].a = 0; sx[1].b = 0;
    t = func_ov009_0219e428(0x3c);
    v = func_02062a78(*(void **)(p + off), sx[1], sx[0], t, 2);
    w = func_0203b6fc();
    func_02056bc0(w, v);
    func_02056bc0(w, z);
    l = p + 0x14;
    func_02056bc0(l, w);
    func_02056bc0(l, y);
    func_02056bc0(l, x);

    for (i = 0; i < 5; i++) {
        uint32_t *q = *(uint32_t **)(p + (off - 0x20) + i * 4);
        q[3] = (q[3] & ~0xffu) | 1u;
    }

    if (p[0x214]) {
        r = func_02052d90(*(void **)(p + 0x200), *(uint32_t *)(p + 0x204));
        rb = (uint8_t *)r;
        s2 = rb + *(uint32_t *)(rb + *(uint32_t *)(rb + 8) + 0x3c);
        s3 = s2 + *(uint32_t *)(s2 + 4);
        func_02005988(A, s3);
        func_020095b8(B, A);
        func_02005988(C, data_ov009_021b0618);
        func_0200a630(D, func_02036384(p + 0x148));
        func_020510c0(E, D, 0);
        func_0203943c(F, B, C, E);
        func_0200b65c(A, F);
        func_020059cc(F);
        func_020059cc(E);
        func_0200a678(D);
        func_020059cc(C);
        func_020059cc(B);
        func_020095b8(G, A);
        tmp = func_0203be48(data_0213df20, G, 0, 0);
        func_02056bc0(p + 0x14, tmp);
        func_020059cc(G);
        func_020059cc(A);
    }

    *(P *)(p + 0x80) = *(P *)data_ov009_021b06b0;
}
