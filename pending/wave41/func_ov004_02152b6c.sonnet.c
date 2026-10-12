/* cflags: -lang c++ */
#include "ffc/types.h"

struct Pair { uint32_t a, b; };
struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(Pair s);
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(Obj *o);
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14(uint32_t a, uint32_t b);
};

extern "C" {
void func_020095b8(void *buf, uint32_t a, uint32_t b, uint32_t c);
void func_020634e0(void *tmp, void *buf, uint32_t z);
Obj *func_0203b8d4(void *tmp, uint32_t a, uint32_t b, uint32_t c);
void func_02063530(void *tmp);
void *func_020059cc(void *object);
}

extern "C" void func_ov004_02152b6c(void *p0, uint32_t p1, uint32_t p2, uint32_t p3, Pair s)
{
    uint32_t loc[4];
    Obj *obj;

    func_020095b8(&loc[1], p2, p2, p3);
    func_020634e0(&loc[0], &loc[1], 0);
    obj = func_0203b8d4(&loc[0], p1, 0, 1);
    func_02063530(&loc[0]);
    func_020059cc(&loc[1]);
    obj->v3(s);
    obj->v14(p3, 0);
    obj->v7((Obj *)p0);
    if (obj) obj->v1();
}
