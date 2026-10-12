#include "ffc/types.h"

typedef struct Elem {
    uint32_t w[7];
    uint8_t *p1;
    uint32_t n1;
    uint32_t c1;
    uint8_t *p2;
    uint32_t n2;
    uint32_t c2;
    uint8_t f[4];
} Elem;

typedef struct Vec {
    Elem *base;
    uint32_t count;
    uint32_t cap;
} Vec;

extern uint32_t func_ov004_02152638(Vec *v, uint32_t n);
extern void func_ov004_02152a8c(Vec *v, uint32_t n, uint32_t f, uint32_t z);
extern void func_ov004_02152340(void *dst, uint8_t *begin, uint8_t *end, uint32_t f);
extern void func_ov004_02152398(void *dst, uint8_t *begin, uint8_t *end, uint32_t f);
extern void func_ov004_02152a4c(Vec *v);

void func_ov004_021526b8(Vec *o, uint32_t n, Elem *src)
{
    struct { Elem *base; uint32_t count; uint32_t cap; uint32_t *capref; uint32_t pos; } tmp;
    uint8_t lf[9];
    uint32_t r;
    uint32_t pos;
    uint32_t j;
    uint32_t f6;
    uint32_t f5;
    uint32_t f3;
    uint32_t f2;
    Elem *dst;
    Elem *end;
    Elem *tb;
    uint32_t t;

    tmp.capref = &o->cap;
    tmp.base = 0;
    tmp.count = 0;
    tmp.cap = 0;
    tmp.pos = 0;
    r = func_ov004_02152638(o, o->count + n - o->cap);
    lf[7] = 0;
    func_ov004_02152a8c((Vec*)&tmp, r, lf[7], 0);
    pos = o->count; tmp.pos = pos;

    if (n != 0) {
        f6 = lf[6];
        f5 = lf[5];
        do {
            dst = tmp.base + (o->count + tmp.count);
            if (dst != 0) {
                dst->w[0] = src->w[0];
                dst->w[1] = src->w[1];
                dst->w[2] = src->w[2];
                dst->w[3] = src->w[3];
                dst->w[4] = src->w[4];
                dst->w[5] = src->w[5];
                dst->w[6] = src->w[6];
                dst->p1 = 0;
                dst->n1 = 0;
                dst->c1 = 0;
                func_ov004_02152340(&dst->p1, src->p1, src->p1 + (src->n1 << 3), f6);
                dst->p2 = 0;
                dst->n2 = 0;
                dst->c2 = 0;
                func_ov004_02152398(&dst->p2, src->p2, src->p2 + (src->n2 << 2), f5);
                dst->f[0] = src->f[0];
                dst->f[1] = src->f[1];
                dst->f[2] = src->f[2];
                dst->f[3] = src->f[3];
            }
            n--;
            tmp.count++;
        } while (n != 0);
    }

    end = o->base + o->count;
    tb = tmp.base + tmp.pos;
    if (end > o->base) {
        f3 = lf[3];
        f2 = lf[2];
        do {
            end--;
            tb--;
            if (tb != 0) {
                tb->w[0] = end->w[0];
                tb->w[1] = end->w[1];
                tb->w[2] = end->w[2];
                tb->w[3] = end->w[3];
                tb->w[4] = end->w[4];
                tb->w[5] = end->w[5];
                tb->w[6] = end->w[6];
                tb->p1 = 0;
                tb->n1 = 0;
                tb->c1 = 0;
                func_ov004_02152340(&tb->p1, end->p1, end->p1 + (end->n1 << 3), f3);
                tb->p2 = 0;
                tb->n2 = 0;
                tb->c2 = 0;
                func_ov004_02152398(&tb->p2, end->p2, end->p2 + (end->n2 << 2), f2);
                tb->f[0] = end->f[0];
                tb->f[1] = end->f[1];
                tb->f[2] = end->f[2];
                tb->f[3] = end->f[3];
            }
            tmp.pos--;
            tmp.count++;
        } while (end > o->base);
    }

    t = (uint32_t)o->cap;
    o->cap = tmp.cap;
    tmp.cap = t;
    t = (uint32_t)o->base;
    o->base = tmp.base;
    tmp.base = (Elem *)t;
    t = o->count;
    o->count = tmp.count;
    tmp.count = t;
    func_ov004_02152a4c((Vec*)&tmp);
}
