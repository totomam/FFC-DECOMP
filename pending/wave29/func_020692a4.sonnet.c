/* cflags: -lang c++ */
#include "ffc/types.h"

struct O {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(int a); virtual void v8(int a);
    uint8_t pad[0x80];
    uint8_t f84; uint8_t f85;
};

extern "C" void func_020692a4(O *self);
extern "C" void func_020692a4(O *self)
{
    if (self->f84 != 0) {
        self->f84 = 0;
        self->v8(0);
        if (self->f85 != 0) {
            self->f85 = 0;
            self->v7(0);
        }
    }
}
