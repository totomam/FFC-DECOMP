#include "ffc/types.h"

extern uint32_t func_0204fac4(uint32_t x);
extern void func_0205cb98(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern uint32_t data_020b03c0[];

typedef struct {
    uint32_t vt;
    uint32_t pad[3];
    uint32_t flags;
    uint32_t pad2[9];
    uint32_t field38;
    uint32_t field3c;
} Obj;

void *func_0204fb1c(Obj *self, uint32_t a, uint32_t b, uint32_t c, uint32_t p5, uint32_t p6) {
    uint32_t r = func_0204fac4(p5);
    func_0205cb98(self, a, b, c, r, p5, p6);
    self->vt = (uint32_t)data_020b03c0;
    self->field38 = p5;
    self->field3c = 0;
    self->flags &= ~0x80u;
    return self;
}
