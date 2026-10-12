/* cflags: -lang c++ */
#include "ffc/types.h"

struct Pair { uint32_t a, b; };
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13();
    virtual uint32_t f38();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
    virtual void f4c(void *);
    uint8_t pad[0xf4 - 4];
    Pair pr;
};

extern "C" {
void func_ov001_02189e64(void *self);
void *func_0205681c(uint32_t size);
extern uint32_t data_020ac678[];
extern Pair data_ov001_021945f0;
void func_ov001_02189f80(Obj *self);
}

void func_ov001_02189f80(Obj *self)
{
    uint32_t *p;
    func_ov001_02189e64(self);
    p = (uint32_t *)func_0205681c(0x18);
    if (p != 0) {
        uint32_t v6 = *(uint32_t *)((uint8_t *)self + 0x6c8);
        uint32_t v0 = self->f38();
        p[2] = 0;
        p[3] = 0x100b3;
        p[0] = (uint32_t)data_020ac678;
        p[4] = v0;
        p[5] = v6;
    }
    self->f4c(p);
    uint32_t x = data_ov001_021945f0.a;
    uint32_t y = data_ov001_021945f0.b;
    self->pr.a = x;
    self->pr.b = y;
}
