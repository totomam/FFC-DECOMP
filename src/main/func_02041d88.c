/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    uint8_t pad[8];
    int32_t flag;
};

extern "C" void *func_0205681c(uint32_t size);
extern "C" Obj *func_0203a588(void *obj, uint32_t arg);
extern "C" void *func_02041d88(uint8_t *p);

extern "C" void *func_02041d88(uint8_t *p) {
    Obj *o = (Obj *)func_0205681c(0x90);
    if (o != 0) {
        o = func_0203a588(o, *(uint32_t *)(p + 0x90));
    }
    if ((int8_t)o->flag == 0) {
        o->f2();
    }
    return o;
}
