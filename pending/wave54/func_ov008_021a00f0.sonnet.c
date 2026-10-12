/* cflags: -lang c++ */
#include "ffc/types.h"

struct Blk { uint32_t w[4]; };
struct Str { uint32_t w[3]; };
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual Blk v7();
    virtual void v8(); virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual int v12();
};
struct Src {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual Blk v4();
};
extern "C" {
void func_020628ac(Obj *o, Blk b);
void func_02056c4c(void *o);
uint32_t func_ov005_02195e2c(Obj *o, Blk a, Blk b, int c, int d);
void func_02056bc0(void *object, uint32_t node);
void func_ov008_021a0368(void *self);
void func_02005988(Str *dst, const void *src);
void func_02068ddc(void *obj, Str *arg);
void *func_020059cc(Str *object);
extern uint32_t data_ov008_021a87b4[];
void func_ov008_021a00f0(void *a0, Src *a1);
}

#define O (*(Obj **)(self + 0xe0))
void func_ov008_021a00f0(void *a0, Src *a1)
{
    uint8_t *self = (uint8_t *)a0;
    Str s24;
    uint8_t i;
    uint8_t v;
    uint8_t *p;

    self[0x102] = 0;
    if (a1 == 0) {
        O->v11();
        return;
    }
    if (O->v12() != 0) {
        O->v10();
        func_020628ac(O, a1->v4());
    } else {
        func_02056c4c(*(void **)(self + 0xdc));
        func_02056bc0(*(void **)(self + 0xdc), func_ov005_02195e2c(O, O->v7(), a1->v4(), 10, -5));
    }
    p = self + 0x104;
    i = 0;
    do {
        self[0x104] = (uint8_t)i;
        v = (uint8_t)(*p + (self[0x100] << 3));
        if (((uint32_t *)*(void **)(self + 0xd0))[i] == (uint32_t)(uintptr_t)a1 &&
            v < *(uint32_t *)(self + 0xf0)) {
            func_ov008_021a0368(self);
            return;
        }
        func_02005988(&s24, data_ov008_021a87b4);
        func_02068ddc(*(void **)(self + 0xe4), &s24);
        func_020059cc(&s24);
        i++;
    } while (i < 8);
}
