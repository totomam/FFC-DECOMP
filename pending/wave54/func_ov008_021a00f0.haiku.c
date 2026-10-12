#include "ffc/types.h"

typedef struct Vt { void *slot[16]; } Vt;
typedef struct Obj { Vt *vt; } Obj;
typedef struct Blk { uint32_t w[4]; } Blk;
typedef struct Str { uint32_t w[3]; } Str;

extern void func_020628ac(Obj *o, Blk b);
extern void func_02056c4c(void *o);
extern uint32_t func_ov005_02195e2c(Obj *o, Blk a, Blk b, int c, int d);
extern void func_02056bc0(void *object, uint32_t node);
extern void func_ov008_021a0368(void *self);
extern void func_02005988(Str *dst, const void *src);
extern void func_02068ddc(void *obj, Str *arg);
extern void *func_020059cc(Str *object);
extern uint32_t data_ov008_021a87b4[];

void func_ov008_021a00f0(void *a0, void *a1)
{
    uint8_t *self = (uint8_t *)a0;
    Obj *o;
    Blk b50, b40, b30;
    Str s24;
    uint32_t i;
    uint8_t v;

    self[0x102] = 0;
    if (a1 == 0) {
        o = *(Obj **)(self + 0xe0);
        ((void (*)(Obj *))o->vt->slot[11])(o);
        return;
    }
    o = *(Obj **)(self + 0xe0);
    if (((int (*)(Obj *))o->vt->slot[12])(o) == 0) {
        func_02056c4c(*(void **)(self + 0xdc));
        o = *(Obj **)(self + 0xe0);
        ((void (*)(void *, Blk *))o->vt->slot[7])(o, &b40);
        ((void (*)(void *, Blk *))((void **)(*(void ***)a1))[4])(a1, &b30);
        func_ov005_02195e2c(o, b40, b30, 10, -5);
    } else {
        ((void (*)(Obj *))o->vt->slot[10])(o);
        ((void (*)(void *, Blk *))((void **)(*(void ***)a1))[4])(a1, &b50);
        func_020628ac(o, b50);
    }
    i = 0;
    do {
        self[0x104] = (uint8_t)i;
        v = (uint8_t)(self[0x104] + (self[0x100] << 3));
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
