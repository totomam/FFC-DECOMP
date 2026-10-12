#include "ffc/types.h"

typedef struct { void *p; void *q; uint8_t flag; } Tmp;
typedef struct { uint32_t x; void *p; void *q; uint8_t flag; } Obj;
typedef struct { uint32_t a; uint32_t b; } Pair;

extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_02005988(void *dst, void *src);
extern void func_02051bc0(void *object, void *src);
extern void func_020059cc(void *object);
extern void *func_02053260(void *object, uint32_t a, uint32_t b);
extern void func_0201506c(void *object, void *source, uint32_t value);
extern void func_02052d3c(void *p, void *q);
extern void func_02052c04(void *p);
extern void func_02052be0(void);
extern void func_02052d10(void *p, void *q);
extern void func_02052c94(void *p, void *q);
extern void func_02052d90(void *p, void *q);
extern void *func_02042660(void *a, uint32_t *idx);
extern void func_020532a4(void *a, void *b);
extern void func_02053290(void *object);
extern char data_020af644[];

void func_020424f4(uint8_t *self, uint32_t idx, ...)
{
    uint8_t *base;
    Obj *d;
    uint32_t A[17];
    uint32_t B[3];
    Obj o;
    Tmp t;

    uint32_t off = 0x124;
    base = *(uint8_t **)(self + off);
    if (*(uint32_t *)(base + idx * 8) == 0) {
        func_02086ad4(A, (uint32_t)data_020af644);
        func_02005988(B, A);
        func_02051bc0(B, *(uint8_t **)(self + off) + idx * 8);
        func_020059cc(B);
    }

    {
        Pair *pr = (Pair *)(*(uint8_t **)(self + off) + idx * 8);
        func_02053260(&o, pr->a, pr->b);
    }
    o.p = 0;
    o.flag = 0;
    func_0201506c(&t, &o, 0);
    if ((void *)&t != (void *)&o.p) {
        if (o.p != 0) {
            if (o.flag != 0) func_02052d3c(o.p, o.q);
            func_02052c04(o.p);
        }
        o.p = t.p;
        o.q = t.q;
        o.flag = t.flag;
        if (t.p != 0) {
            func_02052be0();
            if (o.flag != 0) func_02052d10(o.p, o.q);
        }
    }
    if (t.p != 0) {
        if (t.flag != 0) func_02052d3c(t.p, t.q);
        func_02052c04(t.p);
    }
    if (o.p != 0 && o.flag == 0) {
        o.flag = 1;
        func_02052c94(o.p, o.q);
    }
    func_02052d90(o.p, o.q);

    d = (Obj *)((uint8_t *)func_02042660(self + 0x90, &idx) + 4);
    func_020532a4(d, &o);
    if ((void *)&o.p != (void *)((uint8_t *)d + 4)) {
        if (d->p != 0) {
            if (d->flag != 0) func_02052d3c(d->p, d->q);
            func_02052c04(d->p);
        }
        d->p = o.p;
        d->q = o.q;
        d->flag = o.flag;
        if (o.p != 0) {
            func_02052be0();
            if (d->flag != 0) func_02052d10(d->p, d->q);
        }
    }
    if (o.p != 0) {
        if (o.flag != 0) func_02052d3c(o.p, o.q);
        func_02052c04(o.p);
    }
    func_02053290(&o);
}
