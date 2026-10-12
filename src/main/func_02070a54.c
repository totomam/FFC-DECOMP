#include "ffc/types.h"

extern void func_020709b8(void *p);
extern uint32_t func_02070a44(void *p);
extern uint32_t func_02070a4c(void *p);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern uint32_t func_02056830(uint32_t a);
extern uint8_t data_020b21e4[];

static inline uint32_t mul(uint32_t n, uint32_t k)
{
    uint32_t r = 0, i;
    for (i = 0; i < k; i++) r += n;
    return r;
}

uint32_t *func_02070a54(uint32_t *self)
{
    func_020709b8(self);
    self[0] = (uint32_t)data_020b21e4;
    self[2] = func_02070a44(self);
    self[3] = func_0209a978(func_02070a4c(self), self[2]);
    self[4] = func_02056830(func_02070a44(self) * (uint32_t)(self[2] != self[2] ? 2 : 1));
    return self;
}
