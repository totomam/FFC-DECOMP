/* cflags: -lang c++ */
#include "ffc/types.h"

struct Blk16 { uint32_t w[4]; };

struct Obj {
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual Blk16 s4();
    virtual void s5();
    virtual void s6();
    virtual Blk16 s7();
    virtual void s8();
    virtual void s9();
    virtual void s10();
    virtual void s11();
    virtual int s12();
};

struct B;
extern "C" {
extern void func_020628ac(void *o, Blk16 a);
extern void func_02056c4c(void *o);
extern void *func_ov005_02195e2c(void *o, Blk16 b, Blk16 c, int x, int y);
extern void func_02056bc0(void *object, void *node);
extern void func_ov012_021cd6fc(void *o);
extern void func_02005988(void *dst, void *src);
extern void func_02068ddc(void *o, void *arg);
extern void *func_020059cc(void *object);
extern uint8_t data_ov012_021d3b9c[];

}
struct B { uint32_t w[3]; B() { func_02005988(w, data_ov012_021d3b9c); } ~B() { func_020059cc(w); } };
extern "C" {
void func_ov012_021cd428(uint8_t *p, void *q)
{
    Obj *qo = (Obj *)q;
    uint8_t i;
    uint8_t *pa;

    p[0x106] = 0;
    if (q == 0) {
        ((Obj *)*(void **)(p + 0xe4))->s11();
        return;
    }

    if (((Obj *)*(void **)(p + 0xe4))->s12()) {
        ((Obj *)*(void **)(p + 0xe4))->s10();
        func_020628ac(*(void **)(p + 0xe4), qo->s4());
    } else {
        func_02056c4c(*(void **)(p + 0xe0));
#define o ((Obj *)*(void **)(p + 0xe4))
        func_02056bc0(*(void **)(p + 0xe0), func_ov005_02195e2c(o, o->s7(), qo->s4(), 10, -5));
#undef o
    }

    pa = p + 0x107;
    for (i = 0; i < 8; i++) {
        if (q == ((void **)*(void **)(p + 0xc8))[i]) {
            *pa = i;
            if ((uint8_t)(p[0x107] + (p[0x104] << 3)) < *(uint32_t *)(p + 0xfc)) {
                func_ov012_021cd6fc(p);
                return;
            }
        }
        func_02068ddc(*(void **)(p + 0xe8), B().w);
    }
}
}
