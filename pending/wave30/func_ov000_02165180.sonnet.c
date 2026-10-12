#include "ffc/types.h"

typedef struct Obj {
    uint32_t f00;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    void (*f24)(uint32_t);
} Obj;

extern void *func_ov000_02164ed0(void);
extern uint32_t func_ov000_0216591c(void);
extern void func_ov000_02165834(void *p);
extern void func_ov000_02168784(void *p, void *args);
extern void func_ov000_0216583c(void *p);

void func_ov000_02165180(Obj *self, uint32_t a, ...)
{
    Obj *r4;
    r4 = (Obj *)func_ov000_02164ed0();
    self->f1c = 1;
    self->f10 = 1;
    self->f14 = 1;
    self->f04 = a;
    self->f08 = func_ov000_0216591c();
    if (self->f24 != 0) {
        self->f24(self->f20);
    }
    func_ov000_02165834((char *)r4 + 0x10);
    func_ov000_02168784(*(void **)((char *)r4 + 0x28), &self);
    func_ov000_0216583c((char *)r4 + 0x10);
}
