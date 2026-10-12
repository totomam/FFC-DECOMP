/* cflags: -lang c++ */
#include "ffc/types.h"

struct Pair { uint32_t a; uint32_t b; };
extern "C" {
extern Pair data_ov001_021945e0;
extern Pair data_ov001_021945e8;
extern void func_02084b2c(void *dst, int val, uint32_t size);
extern uint32_t func_0203b738(void);
extern void func_02056bc0(void *object, void *node);
}
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void f10(); virtual void v11(); virtual void v12(); virtual int f13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void f18();
};
extern "C" void func_ov001_02189f04(Obj *self);
extern "C" void func_ov001_02189f04(Obj *self)
{
    uint8_t *p = (uint8_t *)self;
    *(uint32_t *)(p + 0x6bc) = 0;
    *(uint32_t *)(p + 0x6c0) = 0;
    self->f10();
    if (self->f13() != 0) {
        { uint32_t a = data_ov001_021945e0.a; uint32_t b = data_ov001_021945e0.b; *(uint32_t *)(p + 0xf4) = a; *(uint32_t *)(p + 0xf8) = b; }
        return;
    }
    p[0x725] = 1;
    self->f18();
    func_02084b2c(p + 0x104, 0, 0x5b0);
    func_02056bc0(p + 0x14, (void *)func_0203b738());
    { uint32_t a = data_ov001_021945e8.a; uint32_t b = data_ov001_021945e8.b; *(uint32_t *)(p + 0xf4) = a; *(uint32_t *)(p + 0xf8) = b; }
}
