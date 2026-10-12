/* cflags: -lang c++ */
#include "ffc/types.h"

struct Pair { uint32_t x; uint32_t y; };
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void v3(Pair p);
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual uint32_t v8();
};
struct Obj2 {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void v3(Pair p);
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(uint32_t a);
};

extern "C" {
void func_02056c9c(void *p, uint32_t v);
uint32_t func_0203b9cc(Pair p, uint32_t v, int flag);
void func_0206133c(void *object);
extern char data_ov005_02199068[];
void *func_ov005_0219704c(void *self, Pair p, Obj *d);
}

void *func_ov005_0219704c(void *self, Pair p, Obj *d)
{
    Pair s;
    func_02056c9c(self, 0);
    *(void **)self = data_ov005_02199068;
    *(Obj **)((uint8_t *)self + 0x80) = d;
    s.x = 0x100;
    s.y = 0x20;
    uint32_t r = d->v8();
    *(uint32_t *)((uint8_t *)self + 0x84) = func_0203b9cc(s, r, 1);
    func_0206133c(*(void **)((uint8_t *)self + 0x80));
    Obj2 *obj = *(Obj2 **)((uint8_t *)self + 0x84);
    obj->v3(p);
    obj = *(Obj2 **)((uint8_t *)self + 0x84);
    obj->v8(3);
    return self;
}
