/* cflags: -lang c++ */
#include "ffc/types.h"
struct Pair { uint32_t a, b; };
extern "C" void func_02084b2c(void *p, int v, int n);
extern "C" void *func_0203b738(void);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" uint32_t data_ov001_021945e0[2];
extern "C" uint32_t data_ov001_021945e8[2];
struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual int v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18();
};
extern "C" void func_ov001_02189f04(O *o) {
    uint8_t *self = (uint8_t*)o;
    *(uint32_t*)(self + 0x6bc) = 0;
    *(uint32_t*)(self + 0x6c0) = 0;
    o->v10();
    if (o->v13() != 0) {
        { uint32_t a = data_ov001_021945e0[0], b = data_ov001_021945e0[1]; *(uint32_t*)(self + 0xf4) = a; *(uint32_t*)(self + 0xf8) = b; }
        return;
    }
    self[0x725] = 1;
    o->v18();
    func_02084b2c(self + 0x104, 0, 0x5b0);
    func_02056bc0(self + 0x14, func_0203b738());
    { uint32_t a = data_ov001_021945e8[0], b = data_ov001_021945e8[1]; *(uint32_t*)(self + 0xf4) = a; *(uint32_t*)(self + 0xf8) = b; }
}
