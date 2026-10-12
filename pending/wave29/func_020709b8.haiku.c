#include "ffc/types.h"

extern uint8_t data_020b2164[];
extern uint16_t func_02086a4c(void);
extern void func_0207cb18(uint16_t x);
extern int func_0207d420(void *p);
extern void func_0207cb24(uint16_t x);

typedef struct {
    void *vt;
    uint8_t f4;
    uint8_t pad5;
    uint16_t f6;
} Obj;

Obj *func_020709b8(Obj *self, void *p) {
    volatile uint16_t v;
    self->vt = data_020b2164;
    self->f6 = func_02086a4c();
    v = self->f6;
    func_0207cb18(self->f6);
    self->f4 = func_0207d420(p) ? 1 : 0;
    func_0207cb24(v);
    return self;
}
