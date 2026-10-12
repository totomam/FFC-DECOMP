#include "ffc/types.h"

extern void func_ov014_0214851c(void *self);
extern void *func_0205681c(uint32_t size);
extern void func_02053234(void *obj);
extern void func_02019218(void *dst, uint32_t a, uint32_t b);
extern void func_020532a4(void *dst, void *src);
extern void func_02052d3c(void *p, uint32_t v);
extern void func_02052c04(void *p);
extern void func_02052be0(void);
extern void func_02052d10(void *p, uint32_t v);
extern void func_02053290(void *obj);
extern void func_02005988(void *dst, const void *src);
extern void func_02018cf4(void *dst, uint32_t a, void *src);
extern void func_020059cc(void *obj);
extern uint32_t data_020b8e44;
extern uint8_t data_ov014_02155ad4[];

typedef struct Holder {
    uint32_t a;
    void *p;
    uint32_t v;
    uint8_t f;
} Holder;

typedef struct Ctx {
    uint32_t a;
    Holder *n1;
    Holder *n2;
    int32_t m;
    uint32_t k;
    uint8_t b;
} Ctx;

void func_ov014_021483c0(Ctx *c, uint32_t arg)
{
    Holder ta;
    uint8_t buf[12];
    Holder tb;
    Holder *h;
    Holder *t;

    func_ov014_0214851c(c);
    c->m = -1;
    c->k = 0;
    c->b = 0;
    h = func_0205681c(0x10);
    if (h != 0) {
        func_02053234(h);
        h->p = 0;
        h->f = 0;
    }
    c->n1 = h;

    func_02019218(&ta, data_020b8e44, arg);
    h = c->n1;
    func_020532a4(h, &ta);
    if (&ta.p != &h->p) {
        if (h->p != 0) {
            if (h->f) {
                func_02052d3c(h->p, h->v);
            }
            func_02052c04(h->p);
        }
        void *np = ta.p;
        h->p = np;
        h->v = ta.v;
        h->f = ta.f;
        if (np != 0) {
            func_02052be0();
            if (h->f) {
                func_02052d10(h->p, h->v);
            }
        }
    }
    t = &ta;
    if (ta.p != 0) {
        if (t->f) {
            func_02052d3c(t->p, t->v);
        }
        func_02052c04(t->p);
    }
    func_02053290(t);

    h = func_0205681c(0x10);
    if (h != 0) {
        func_02053234(h);
        h->p = 0;
        h->f = 0;
    }
    c->n2 = h;

    func_02005988(buf, data_ov014_02155ad4);
    func_02018cf4(&tb, data_020b8e44, buf);
    h = c->n2;
    func_020532a4(h, &tb);
    if (&tb.p != &h->p) {
        if (h->p != 0) {
            if (h->f) {
                func_02052d3c(h->p, h->v);
            }
            func_02052c04(h->p);
        }
        void *nq = tb.p;
        h->p = nq;
        h->v = tb.v;
        h->f = tb.f;
        if (nq != 0) {
            func_02052be0();
            if (h->f) {
                func_02052d10(h->p, h->v);
            }
        }
    }
    t = &tb;
    if (tb.p != 0) {
        if (t->f) {
            func_02052d3c(t->p, t->v);
        }
        func_02052c04(t->p);
    }
    func_02053290(t);
    func_020059cc(buf);
}
