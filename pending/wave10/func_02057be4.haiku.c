#include "ffc/types.h"

extern uint8_t data_020b0d18;
extern void func_02087620(void *object);
extern void *func_02057ddc(void *self);

struct Obj {
    void *vtbl;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t *f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint8_t sub[0x18];
    uint8_t f38;
};

struct Obj *func_02057be4(struct Obj *self, uint32_t a, uint32_t b, uint32_t c)
{
    self->vtbl = &data_020b0d18;
    self->f04 = a;
    self->f08 = b;
    self->f14 = 0;
    self->f18 = 0;
    self->f1c = c;
    func_02087620(self->sub);
    self->f38 = 0;
    self->f10 = func_02057ddc(self);
    *self->f10 = 0;
    self->f10[1] = self->f04;
    self->f10[2] = self->f08 + 1;
    return self;
}
