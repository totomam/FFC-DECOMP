/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj {
    virtual void m0(void);
    virtual void m1(void);
    virtual void m2(void);
    virtual void m3(void);
    virtual void m4(void);
    uint8_t pad[0x14 - 4];
    uint32_t f14;
    uint8_t pad2[0x28 - 0x18];
    uint32_t f28;
    uint8_t pad3[0x74 - 0x2c];
    uint32_t f74;
};

extern "C" void func_0202b20c(Obj *p) {
    p->m4();
    p->f14 = 0;
    p->f28 = 0;
    p->f74 = 0x10;
}
