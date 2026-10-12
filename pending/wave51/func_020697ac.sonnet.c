/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" uintptr_t func_02069734(const void *object);

struct Pair {
    uint32_t a;
    uint32_t b;
};

struct ObjA {
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual Pair s5();
    virtual void s6(void *x);
    virtual void s7(void *x);
};

struct ObjB {
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
};

extern "C" void func_020697ac(void *a, void *b) {
    void *r6;

    if (b != 0 && *((uint8_t *)b + 0x87) != 0) {
        return;
    }

    r6 = (void *)func_02069734(a);
    if (r6 == b) {
        return;
    }

    ((ObjA *)a)->s7(r6);

    if (r6 != 0) {
        *((uint8_t *)r6 + 0x85) = 0;
        ((ObjB *)r6)->s7();
    }

    if (b != 0) {
        Pair p;
        *((uint8_t *)b + 0x85) = 1;
        ((ObjB *)b)->s7();
        p = ((ObjA *)b)->s5();
        *(uint32_t *)((uint8_t *)a + 0x9c) = p.a;
        *(uint32_t *)((uint8_t *)a + 0xa0) = p.b;
    }

    ((ObjA *)a)->s6(b);
}
