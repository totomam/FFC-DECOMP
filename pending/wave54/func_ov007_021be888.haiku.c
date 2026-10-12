/* cflags: -lang c++ */
#include "ffc/types.h"

struct S16 { uint32_t w[4]; };

struct Obj {
    virtual void f0() = 0;
    virtual void f1() = 0;
    virtual void f2() = 0;
    virtual void f3() = 0;
    virtual S16 f4() = 0;
    virtual void f5() = 0;
    virtual void f6() = 0;
    virtual S16 f7() = 0;
    virtual void f8() = 0;
    virtual void f9() = 0;
    virtual void f10() = 0;
    virtual void f11() = 0;
    virtual int f12() = 0;
};

#define F(t, p, off) (*(t *)((uint8_t *)(p) + (off)))
#define OBJ(self) F(Obj *, self, 0xf8)

extern "C" {
extern void func_020628ac(void *obj, S16 s);
extern void func_02056c4c(void *p);
extern uint32_t func_ov005_02195e2c(void *obj, S16 a, S16 b, int c, int d);
extern void func_02056bc0(void *object, uint32_t node);
extern void func_ov005_021963cc(void *a, uint32_t b, uint32_t c);
extern void func_0201e954(void *base, uint32_t off, void *dst);
extern void func_ov005_021964c4(void *p);
extern void *data_020b93b8;
}

extern "C" void func_ov007_021be888(void *self, Obj *p1)
{
    uint32_t buf[6];
    S16 t1, t2, t3;
    uint32_t i;

    F(uint8_t, self, 0x11c) = 0;
    if (p1 == 0) {
        OBJ(self)->f11();
        return;
    }
    if (OBJ(self)->f12() != 0) {
        OBJ(self)->f10();

        func_020628ac(OBJ(self), p1->f4());
    } else {
        func_02056c4c(F(void *, self, 0xf4));


        func_02056bc0(F(void *, self, 0xf4), func_ov005_02195e2c(OBJ(self), OBJ(self)->f7(), p1->f4(), 10, -5));
    }
    for (i = 0; i < F(uint32_t, self, 0xcc); i++) {
        if (p1 == ((void **)F(void *, self, 0xc8))[i]) {
            if (F(uint32_t, self, 0x110) == F(uint32_t, self, 0x114)) {
                func_ov005_021963cc(F(void *, self, 0xfc), F(uint32_t, self, 0xe4), 0);
                return;
            }
            func_0201e954(data_020b93b8, F(uint32_t, self, 0x110) * 8, buf);
            func_ov005_021963cc(F(void *, self, 0xfc), (uint32_t)buf, 0);
            return;
        }
    }
    func_ov005_021964c4(F(void *, self, 0xfc));
    F(uint32_t, self, 0x118) = 0xffffffff;
}
