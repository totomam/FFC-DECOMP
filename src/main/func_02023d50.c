/* cflags: -lang c++ */
#include "ffc/types.h"
struct B;
struct A {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(uint32_t, uint32_t, uint32_t);
    virtual void v4();
    virtual void v5(uint32_t);
    uint8_t pad[0xd4 - 4];
    uint32_t d4, d8, dc, e0, e4, e8, ec, f0;
};
extern "C" void func_02023d50(A *a, A *b);
extern "C" void func_02023d50(A *a, A *b) {
    a->ec = b->ec;
    a->d4 = b->d4;
    a->d8 = b->d8;
    a->v3(b->e8, b->e4, 1);
    a->v5(b->f0);
}
