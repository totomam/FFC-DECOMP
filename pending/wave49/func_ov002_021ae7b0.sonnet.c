/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
struct Obj { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(Pair p); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(uint32_t x); virtual void f9(); virtual void f10(); virtual void f11(); virtual void f12(); virtual void f13(); virtual void f14(); virtual void f15(uint32_t x); };

extern "C" uint32_t func_ov002_021d3310(const void *object);
extern "C" void func_ov002_021d3334(void *object, uint32_t value);
extern "C" uint32_t func_ov002_021ae6b0(void *self);
extern "C" uint32_t func_ov002_021ae6a4(void *self);
extern "C" void *func_0203b688(void);
extern "C" uint32_t func_ov002_0219b850(void *p);
extern "C" void func_ov002_02198dfc(void);
extern "C" uint32_t func_ov002_021bc13c(void);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" uint32_t func_ov002_021c92c0(uint32_t a, uint32_t b);
extern "C" uint32_t func_02055a2c(uint32_t a, uint32_t b);
extern "C" uint32_t func_ov002_021c91b4(uint32_t a);
extern "C" uint32_t func_ov002_021ae9c8(uint32_t a, uint32_t b);
extern "C" uint32_t func_ov002_02198e24(uint32_t a);
extern "C" void *func_0203b7fc(uint32_t a, uint32_t b, uint32_t c);
extern "C" Obj *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern "C" void func_ov002_021ad534(Pair *out, uint32_t a, uint32_t b);
extern "C" void *func_02064aa8(void *object);
extern "C" void func_0205f2f0(void *object, uint32_t value);
extern "C" void func_ov002_02198dec(void);
extern "C" uint32_t func_ov002_0219f4e0(void);
extern "C" uint32_t func_020655dc(void *object, uint32_t a, uint32_t b);
extern "C" uint32_t func_02021610(uint32_t a, uint32_t b);
extern "C" uint32_t func_02056aec(void *object);
extern "C" void func_ov002_021b1004(void *self, uint32_t v);
extern "C" void func_ov002_021b101c(void *self, uint32_t v);
extern "C" void *data_ov002_021d5378[];

extern "C" void func_ov002_021ae7b0(uint8_t *self, uint32_t param)
{
    
    uint32_t r4;
    uint32_t sp0;
    uint32_t r6;
    void *r7;
    uint32_t sp4;
    uint32_t s;
    volatile Pair pa;
    Pair tmp;
    volatile Pair pb;

    if (func_ov002_021d3310(self + 0x14C) == 0 || param == 0) {
        func_ov002_021d3334(self + 0x14C, param);
        return;
    }
    func_ov002_021d3310(self + 0x14C);
    r4 = func_ov002_021ae6b0(self);
    func_ov002_021d3334(self + 0x14C, param);
    if (func_ov002_021ae6a4(self) != 5) {
        return;
    }
    if (r4 == func_ov002_021ae6b0(self)) {
        return;
    }
    sp0 = (r4 != 0) ? 0x1116 : 0x1110;
    r6 = (*(uint32_t *)(self + 0xC0) == 1) ? 1 : 0;
    r7 = func_0203b688();
    func_ov002_0219b850(*(void **)(self + 0x130));
    func_ov002_02198dfc();
    func_02056bc0(r7, (void *)func_ov002_021bc13c());
    sp4 = func_ov002_0219b850(*(void **)(self + 0x130));
    s = func_ov002_021c92c0(0, sp0 + r6);
    func_02056bc0(r7, (void *)func_02055a2c(sp4 + 0x80, s));
    r6 = func_ov002_0219b850(*(void **)(self + 0x130));
    s = func_ov002_021c91b4(0);
    func_02056bc0(r7, (void *)func_ov002_021ae9c8(r6, s));
    func_02056bc0(r7, (void *)func_ov002_02198e24(func_ov002_0219b850(*(void **)(self + 0x130))));


    if (r4 == 0) {
        void *n = func_0203b7fc(8, 4, 1);
        uint8_t *p2 = *(uint8_t **)(self + 0x12C);
        Obj *obj;
        uint32_t v;

        uint32_t x = *(uint32_t *)(p2 + 0x34);
        uint32_t y = *(uint32_t *)(p2 + 0x38);
        pa.a = x;
        *(uint32_t *)((uint8_t *)n + 0x34) = x;
        pb.a = x;
        pa.b = y;
        pb.b = y;
        *(uint32_t *)((uint8_t *)n + 0x38) = y;
        obj = func_0203b95c(data_ov002_021d5378[8], n, 0, 1);
        func_ov002_021ad534(&tmp, *(uint32_t *)(self + 0xC0), *(uint32_t *)(self + 0xC4));
        obj->f3(tmp);
        obj->f8(0);
        obj->f15(1);
        obj->f10();
        void *o2 = func_02064aa8(obj);
        func_0205f2f0(o2, 1);
        func_ov002_0219b850(*(void **)(self + 0x130));
        func_ov002_02198dec();
        v = func_ov002_0219f4e0();
        func_02056bc0((void *)v, obj);
        func_02056bc0((void *)v, n);
        v = func_020655dc(obj, 5, 0);
        func_02056bc0(self + 0x14, (void *)v);
        v = func_02021610(0x42D, 0);
        func_02056bc0(self + 0x14, (void *)v);
        func_02056bc0(self + 0x14, r7);
        v = func_02056aec(obj);
        func_02056bc0(self + 0x14, (void *)v);
        v = func_02056aec(n);
        func_02056bc0(self + 0x14, (void *)v);
        func_ov002_021b1004(self, 7);
    } else {
        func_02056bc0(self + 0x14, r7);
        func_ov002_021b101c(self, 7);
    }
}
