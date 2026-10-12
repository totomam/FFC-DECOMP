#include "ffc/types.h"

extern void func_02005988(void *dst, void *src);
extern void func_02068ddc(void *obj, void *arg);
extern void *func_020059cc(void *object);
extern void func_02018ec8(void *dst, uint32_t val);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02053290(void *object);
extern uint32_t data_ov005_021992f4[];
extern uint32_t data_020b8e44[];

typedef struct {
    uint32_t a;
    void *b;
    void *c;
    uint8_t d;
} Tmp;

void func_ov005_02196594(uint8_t *self, uint32_t idx, uint32_t flag)
{
    Tmp t;
    uint32_t s1[3];
    uint32_t s0[3];
    Tmp *tp;
    uint32_t *o;
    void **vt;
    void *o2;
    uint8_t *p;
    uint8_t *base;
    uint32_t w;
    uint32_t r;

    func_02005988(s1, data_ov005_021992f4);
    func_02068ddc(*(void **)(self + 0x84), s1);
    func_020059cc(s1);

    o = *(uint32_t **)(self + 0x84);
    if ((int8_t)o[3] == 0) {
        vt = (void **)o[0];
        ((void (*)(void *))vt[2])(o);
    }

    if (flag != 0) {
        o2 = *(void **)(self + 0x80);
        vt = *(void ***)o2;
        ((void (*)(void *, uint32_t))vt[6])(o2, 3);
    } else {
        o2 = *(void **)(self + 0x80);
        vt = *(void ***)o2;
        ((void (*)(void *, uint32_t))vt[6])(o2, 1);
    }

    tp = &t;
    func_02018ec8(tp, data_020b8e44[0]);
    p = (uint8_t *)func_02052d90(tp->b, tp->c);
    base = p + *(uint32_t *)(p + 8);
    w = *(uint32_t *)(base + idx * 4);
    r = func_020159c8(data_020b8e44[0], *(uint16_t *)(p + w));

    func_02005988(s0, (void *)r);
    func_02068ddc(*(void **)(self + 0x84), s0);
    func_020059cc(s0);

    if (tp->b != 0) {
        if (tp->d != 0) {
            func_02052d3c(tp->b, tp->c);
        }
        func_02052c04(tp->b);
    }
    func_02053290(tp);
}
