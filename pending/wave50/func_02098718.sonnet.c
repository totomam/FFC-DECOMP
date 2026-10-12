/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" int64_t func_0209a71c(int64_t first, int64_t second);
extern "C" void func_02098718(uint32_t *out, struct Self *self, int64_t a, uint8_t t0, uint8_t t1);

struct Self {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int32_t v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual int64_t v15(int64_t x, int32_t m);
    uint8_t pad[0x30];
    int32_t n34;
    uint8_t pad2[2];
    uint8_t f3a;
};

#define FAIL do { out[0] = 0xffffffff; out[1] = 0xffffffff; out[2] = 0; return; } while (0)

extern "C" void func_02098718(uint32_t *out, Self *self, int64_t a, uint8_t t0, uint8_t t1)
{
    int32_t mode;
    int64_t res;
    int32_t n;

    if (self->f3a == 0 || (uint8_t)(t1 & 0x18) == 0 || !(a == 0 || self->n34 > 0)) FAIL;
    if (self->v5() < 0) FAIL;
    switch (t0) {
    case 1: mode = 0; break;
    case 2: mode = 1; break;
    case 4: mode = 2; break;
    default: FAIL;
    }
    n = self->n34;
    if (n <= 0) n = 0;
    res = self->v15(func_0209a71c((int64_t)n, a), mode);
    if (res < 0) FAIL;
    out[0] = (uint32_t)res;
    out[1] = (uint32_t)(res >> 32);
    out[2] = 0;
}
