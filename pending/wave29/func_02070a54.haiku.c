#include "ffc/types.h"

extern void func_020709b8(void *p);
extern uint32_t func_02070a44(void *p);
extern uint32_t func_02070a4c(void *p);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern uint32_t func_02056830(uint32_t a);
extern uint8_t data_020b21e4[];

uint32_t *func_02070a54(uint32_t *self)
{
    func_020709b8(self);
    self[0] = (uint32_t)data_020b21e4;
    self[2] = func_02070a44(self);
    self[3] = func_0209a978(func_02070a4c(self), self[2]);
    {
        uint32_t t = func_02070a44(self);
        self[4] = func_02056830(t * (uint32_t)1);
    }
    return self;
}
