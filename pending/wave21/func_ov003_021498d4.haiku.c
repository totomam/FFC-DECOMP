#include "ffc/types.h"

extern uint32_t func_0202144c(void *p);
extern void func_020211d4(uint32_t a, uint32_t b);

void func_ov003_021498d4(void *self, uint32_t a, uint32_t b)
{
    uint32_t *f = (uint32_t *)self;
    f[0x7a] = a;
    f[0x7c] = func_0202144c(self);
    f[0x7b] = 1;
    func_020211d4(a, b);
}
