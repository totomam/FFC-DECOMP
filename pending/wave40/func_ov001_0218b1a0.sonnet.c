/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern void func_020559d4(void *p);
extern void func_ov001_0218def8(void *p, int v);
extern uint32_t func_0203b72c(void);
extern void func_02056bc0(void *object, void *node);
}
struct Pair { uint32_t a; uint32_t b; };
extern "C" Pair data_ov001_021946a0;
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual uint32_t v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20();
};
extern "C" void func_ov001_0218b1a0(uint8_t *p)
{
    Obj *o = (Obj *)p;
    func_020559d4(p + 0xb0);
    func_020559d4(p + 0xb0);
    func_020559d4(p + 0xb0);
    func_020559d4(p + 0xb0);
    func_020559d4(p + 0xb0);
    o->v20();
    func_ov001_0218def8(p, 0);
    uint32_t r6 = o->v16();
    uint32_t t = func_0203b72c();
    uint8_t *r4 = p + 0x14;
    func_02056bc0(r4, (void *)t);
    func_02056bc0(r4, (void *)r6);
    Pair *d = &data_ov001_021946a0; uint32_t x = d->a; uint32_t y = d->b; *(uint32_t *)(p + 0xf8) = y; *(uint32_t *)(p + 0xf4) = x;
}
