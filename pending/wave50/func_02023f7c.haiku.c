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
    virtual int32_t v7();
    int32_t &cnt() { return *(int32_t *)((char *)this + 0x180); }
    uint8_t *ptrE4() { return *(uint8_t **)((char *)this + 0xe4); }
    uint8_t *ptrF0() { return *(uint8_t **)((char *)this + 0xf0); }
};

extern "C" void func_02023f7c(Obj *self, int32_t d) {
    self->cnt() += d;
    if (*(int32_t *)(self->ptrE4() + 0x18) != 0) {
        if (self->v7() == 0) {
            return;
        }
        self->cnt() = (*(int32_t *)(self->ptrE4() + 0x18) - 1) << 4;
        return;
    }
    if (*(int32_t *)(self->ptrF0() + 0xc) == 0) {
        return;
    }
    if (self->v7() == 0) {
        return;
    }
    self->cnt() = (*(int32_t *)(self->ptrF0() + 0xc) - 1) << 4;
}
