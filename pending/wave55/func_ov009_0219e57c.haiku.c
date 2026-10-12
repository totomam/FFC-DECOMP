#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef struct Obj Obj;
struct Obj { void **vt; };
#define OV(o, i) (((o)->vt)[i])
typedef void (*VFn1)(void *self, uint32_t v);
typedef void (*VFn0)(void *self);
typedef void (*VFnB)(void *self, uint32_t a, uint32_t b);

extern void *data_ov009_021b014c[];
extern void *data_ov009_021b0058[];
extern uint32_t data_020b8e44;
extern uint32_t data_ov009_021b0558[];
extern uint32_t data_ov009_021b0568[];
extern uint32_t data_ov009_021b0174[];

extern void *func_0203b6fc(void);
extern void *func_0203bb94(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02015a38(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_02036384(void *o);
extern void func_0200a630(void *dst, uint32_t v);
extern void func_0200a678(void *o);
extern void func_020613e4(void *dst, uint32_t a, void *b, uint32_t c, uint32_t d);
extern uintptr_t func_020159f8(uint32_t g);
extern void *func_0203ba60(void *arg, Pair p, uintptr_t c, uint32_t d);
extern void func_02067e70(void *o, uint32_t v);
extern void *func_0203b878(void *o, uint32_t v);
extern void func_02068e18(void *o, void *x);
extern void func_02068d58(void *o, uint32_t a, uint32_t b);
extern void *func_0203b77c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_020363bc(const void *o);
extern uint32_t func_02086ad4(void *o, const void *first, uint32_t v);
extern void func_02005988(void *dst, void *src);
extern void func_0206139c(void *dst, uint32_t a, void *b, uint32_t c, uint32_t d);
extern void func_020059cc(void *o);
extern void func_02068ddc(void *o, void *x);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02064390(void *o, uint32_t a, uint32_t b);

#define VCALL(o, idx, T) (((T)((*(void ***)(o))[idx])))

void *func_ov009_0219e57c(uint8_t *self, void *arg, uint32_t useTbl, uint32_t idx)
{
    void *ret;
    void *obj;
    uint32_t t4c[4];
    uint32_t t40[3];
    uint32_t t34[3];
    uint32_t t28[3];
    uint32_t t1c[3];
    uint32_t sp8;
    Pair pr;
    Pair pr2;
    uintptr_t r3;
    uint32_t r7;
    void *r5;
    uint16_t hw;

    ret = func_0203b6fc();

    if (useTbl) {
        obj = data_ov009_021b014c[idx - 1];
    } else {
        obj = data_ov009_021b0058[8];
    }
    {
        r5 = func_0203bb94(obj, 0, 0, 0);
        VCALL(r5, 8, VFn1)(r5, 3);
        VCALL(r5, 10, VFn0)(r5);
        func_02056bc0(ret, r5);
    }

    r7 = func_02015a38(data_020b8e44, 0, 1, 0);

    sp8 = func_02036384(self + 0x84);
    func_0200a630(t40, sp8);

    func_020613e4(&pr, r7, t40, 0, 0);
    r3 = func_020159f8(data_020b8e44);
    r5 = func_0203ba60(arg, pr, r3, 1);
    func_0200a678(t40);

    func_02067e70(r5, 3);
    r5 = func_0203b878(r5, r7);

    func_0200a630(t34, sp8);
    func_02068e18(r5, t34);
    func_0200a678(t34);
    VCALL(r5, 8, VFn1)(r5, 3);
    func_02068d58(r5, 0x5c, 5);
    VCALL(r5, 10, VFn0)(r5);
    func_02056bc0(ret, r5);

    r7 = (uint32_t)func_0203b77c(data_ov009_021b0558, 0, 0, 0);
    {
        uint8_t *pp = (uint8_t *)func_020363bc(self + 0x84);
        hw = *(uint16_t *)(pp + 0x34);
    }
    func_02086ad4(t4c, data_ov009_021b0568, hw);
    func_02005988(t28, t4c);

    func_0206139c(&pr2, r7, t28, 0, 0);
    r3 = func_020159f8(data_020b8e44);
    r5 = func_0203ba60(arg, pr2, r3, 1);
    func_020059cc(t28);
    func_02067e70(r5, 3);
    r5 = func_0203b878(r5, r7);

    func_02005988(t1c, t4c);
    func_02068ddc(r5, t1c);
    func_020059cc(t1c);
    VCALL(r5, 8, VFn1)(r5, 3);
    func_02068d58(r5, 0x2b, 6);
    VCALL(r5, 10, VFn0)(r5);
    func_02056bc0(ret, r5);

    {
        uint8_t b1 = ((uint8_t *)func_020363bc(self + 0x84))[1];
        r5 = func_0203b95c((void *)data_ov009_021b0174[b1], arg, 0, 1);
    }
    VCALL(r5, 14, VFnB)(r5, 1, 0);
    func_02064390(r5, 0x80, 0x60);
    VCALL(r5, 8, VFn1)(r5, 3);
    VCALL(r5, 15, VFn1)(r5, 3);
    VCALL(r5, 10, VFn0)(r5);
    func_02056bc0(ret, r5);

    return ret;
}
