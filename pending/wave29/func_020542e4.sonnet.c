/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_0205428c(int arg);
extern "C" void func_020542e4(void *p);

struct A { int pad[3]; };
struct B {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual uint32_t *get(int x);
};
struct P { int pad[3]; B b; int pad2[10]; uint8_t f; };

extern "C" void func_020542e4(void *pp)
{
    P *p = (P *)pp;
    if (p->f != 0) {
        int r4 = 0;
        uint32_t *s = p->b.get(0);
        uint32_t r1 = s[1];
        uint32_t r0 = s[2];
        if ((r1 & (r0 ^ r1)) & 0x30c) {
            if ((r1 & 0x30c) == 0x30c) r4 = 1;
        }
        if (r4 != 0) func_0205428c(0);
    }
}
