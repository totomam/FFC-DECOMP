/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void m28();
    virtual void m2c();
    virtual int m30();
    uint8_t pad[0x3c - 4];
    uint8_t f3c;
    uint32_t f40;
};

extern "C" void func_ov005_02195db0(Obj *p, uint32_t n)
{
    int r;
    if (n < 1u || n > 2u) {
        return;
    }
    r = p->m30();
    p->m2c();
    p->f3c = (uint8_t)n;
    if (r) {
        p->m2c();
    } else {
        p->m28();
    }
    p->f40 = 0;
}
