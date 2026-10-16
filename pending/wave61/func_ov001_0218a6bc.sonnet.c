/* cflags: -lang c++ */
#include "ffc/types.h"
struct Pair { uint32_t a, b; };
extern "C" void func_020559d4(void *p);
struct X;
extern "C" void func_ov001_0218def8(X *p, int v);
extern "C" Pair data_ov001_02194638;
extern "C" Pair data_ov001_02194640;
struct X {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual int v13();
    virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17();
    virtual void v18(); virtual void v19(); virtual void v20();
};
extern "C" void func_ov001_0218a6bc(X *self) {
    uint8_t *p = (uint8_t*)self;
    if (self->v13()) {
        uint32_t b = data_ov001_02194638.b, a = data_ov001_02194638.a; *(uint32_t*)(p + 0xf4) = a; *(uint32_t*)(p + 0xf8) = b;
        return;
    }
    func_020559d4(p + 0xb0);
    if (p[0x106] != 0 && p[0x3de] != 0) {
        func_ov001_0218def8(self, 0);
        self->v20();
        uint32_t b2 = data_ov001_02194640.b, a2 = data_ov001_02194640.a; *(uint32_t*)(p + 0xf4) = a2; *(uint32_t*)(p + 0xf8) = b2;
    }
}
