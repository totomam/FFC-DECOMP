/* cflags: -lang c++ */
#include "ffc/types.h"

struct S { uint32_t a, b; S &operator=(const S &o){ uint32_t x=o.a; uint32_t y=o.b; a=x; b=y; return *this; } };
struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13();
    virtual uint32_t f38();
    virtual void f3c(); virtual void f40(); virtual void f44(); virtual void f48();
    virtual void f4c(void *);
    virtual void f50(); virtual void f54();
    virtual void f58();
    uint8_t pad[0xf4-4];
    S w;
    uint8_t pad2[0x6c4-0xfc];
    uint32_t m;
};
extern "C" {
extern void func_02037550(O *p);
extern void *func_0205681c(uint32_t size);
extern void func_ov001_0218de64(O *p, uint32_t a, uint32_t b, uint32_t c);
extern char data_020ac6b8[];
extern S data_ov001_02194678;

void func_ov001_0218af9c(O *a) {
    uint32_t *obj;
    func_02037550(a);
    if (a->m == 0) {
        a->f58();
        return;
    }
    obj = (uint32_t *)func_0205681c(0x18);
    if (obj != 0) {
        uint8_t flag = a->m != 0;
        uint32_t val = a->f38();
        obj[2] = 0;
        obj[3] = 0x100b2;
        obj[0] = (uint32_t)(uintptr_t)data_020ac6b8;
        obj[4] = val;
        ((uint8_t *)obj)[0x14] = flag;
    }
    a->f4c(obj);
    func_ov001_0218de64(a, 4, 1, 0);
    a->w = data_ov001_02194678;
}
}
