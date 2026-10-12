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
extern uint32_t data_ov004_02157b44[];

void *func_ov004_02145cf4(void *self, void *param)
{

    uint32_t tmp[3];
    S loc;
    void *sel;

    func_02056c9c(self, 0);
    *(void **)self = data_ov004_02157b08;
    *(void **)((uint8_t *)self + 0x88) = param;
    {
        S *o = (S *)((uint8_t *)self + 0x94);
        func_02053234(o);
        o->b = 0;
        o->d = 0;
    }

    if (func_ov004_02153544(param)) {
        sel = data_ov004_02157b18;
    } else {
        sel = data_ov004_02157b30;
    }
    func_02005988(tmp, sel);
    func_02018c48(&loc, tmp);
    func_020532a4((uint8_t *)self + 0x94, &loc);

    if ((void *)&loc.b != (void *)&((S *)((uint8_t *)self + 0x94))->b) {
        if (((S *)((uint8_t *)self + 0x94))->b) {
            if (((S *)((uint8_t *)self + 0x94))->d) {
                func_02052d3c(((S *)((uint8_t *)self + 0x94))->b, ((S *)((uint8_t *)self + 0x94))->c);
            }
            func_02052c04(((S *)((uint8_t *)self + 0x94))->b);
        }
        ((S *)((uint8_t *)self + 0x94))->b = loc.b;
        ((S *)((uint8_t *)self + 0x94))->c = loc.c;
        ((S *)((uint8_t *)self + 0x94))->d = loc.d;
        if (loc.b) {
            func_02052be0(loc.b);
            if (((S *)((uint8_t *)self + 0x94))->d) {
                func_02052d10(((S *)((uint8_t *)self + 0x94))->b, ((S *)((uint8_t *)self + 0x94))->c);
            }
        }
    }

    if (loc.b) {
        if (loc.d) {
            func_02052d3c(loc.b, loc.c);
        }
        func_02052c04(loc.b);
    }
    func_02053290(&loc);
    func_020059cc(tmp);

    *(uint32_t *)((uint8_t *)self + 0x80) = data_ov004_02157b44[0];
    *(uint32_t *)((uint8_t *)self + 0x84) = data_ov004_02157b44[1];
    return self;
}
