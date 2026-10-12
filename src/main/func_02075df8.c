/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_020553c4(void *p);
extern void func_020553e8(void *p);
extern uint32_t func_02056830(void);
extern void func_02056858(uint32_t x);
extern void func_02075e3c(void *a, void *b, uint32_t c, uint32_t d);
}
struct Obj {
    virtual void v0();
    virtual void v1();
    virtual uint32_t f2();
    virtual void f3(uint32_t);
};
extern "C" void func_02075df8(void *a, void *b, Obj *obj);
extern "C" void func_02075df8(void *a, void *b, Obj *obj)
{
    func_020553c4(obj);
    uint32_t r = obj->f2();
    uint32_t t = func_02056830();
    obj->f3(t);
    func_02075e3c(a, b, t, r);
    func_02056858(t);
    func_020553e8(obj);
}
