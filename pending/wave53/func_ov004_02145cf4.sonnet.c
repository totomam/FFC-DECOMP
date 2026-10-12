#include "ffc/types.h"

typedef struct S {
    uint32_t a;
    void *b;
    void *c;
    uint8_t d;
} S;

extern void func_02056c9c(void *p, int x);
extern void func_02053234(void *o);
extern int func_ov004_02153544(void *p);
extern void func_02005988(void *t, void *d);
extern void func_02018c48(void *a, void *b);
extern void func_020532a4(void *o, void *s);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02052be0(void *a);
extern void func_02052d10(void *a, void *b);
extern void *func_02053290(void *o);
extern void *func_020059cc(void *o);
extern uint32_t data_ov004_02157b08[];
extern uint32_t data_ov004_02157b18[];
extern uint32_t data_ov004_02157b30[];
extern uint32_t data_ov004_02157b44[2];

void *func_ov004_02145cf4(void *self, void *param)
{

    struct { S loc; uint32_t tmp[3]; } L;
    void *sel;
    uint32_t z = 0;

    func_02056c9c(self, 0);
    *(void **)self = data_ov004_02157b08;
    *(void **)((uint8_t *)self + 0x88) = param;
    {
        S *o = (S *)((uint8_t *)self + 0x94);
        func_02053234(o);
        o->b = (void *)z;
        o->d = z;
    }

    if (func_ov004_02153544(param)) {
        sel = data_ov004_02157b18;
    } else {
        sel = data_ov004_02157b30;
    }
    uint32_t *tp = L.tmp;
    func_02005988(tp, sel);
    S *lp = &L.loc;
    func_02018c48(lp, tp);
    func_020532a4((uint8_t *)self + 0x94, lp);

    if ((void *)&L.loc.b != (void *)&((S *)((uint8_t *)self + 0x94))->b) {
        if (((S *)((uint8_t *)self + 0x94))->b) {
            if (((S *)((uint8_t *)self + 0x94))->d) {
                func_02052d3c(((S *)((uint8_t *)self + 0x94))->b, ((S *)((uint8_t *)self + 0x94))->c);
            }
            func_02052c04(((S *)((uint8_t *)self + 0x94))->b);
        }
        void *nb = lp->b;
        ((S *)((uint8_t *)self + 0x94))->b = nb;
        ((S *)((uint8_t *)self + 0x94))->c = lp->c;
        ((S *)((uint8_t *)self + 0x94))->d = lp->d;
        if (nb) {
            func_02052be0(nb);
            if (((S *)((uint8_t *)self + 0x94))->d) {
                func_02052d10(((S *)((uint8_t *)self + 0x94))->b, ((S *)((uint8_t *)self + 0x94))->c);
            }
        }
    }

    S *q = &L.loc;
    if (L.loc.b) {
        if (q->d) {
            func_02052d3c(q->b, q->c);
        }
        func_02052c04(q->b);
    }
    func_02053290(q);
    func_020059cc(L.tmp);

    {
        uint32_t *dp = data_ov004_02157b44;
        uint32_t x = dp[0];
        uint32_t y = dp[1];
        *(uint32_t *)((uint8_t *)self + 0x80) = x;
        *(uint32_t *)((uint8_t *)self + 0x84) = y;
    }
    return self;
}
