#include "ffc/types.h"

extern void func_020213f0(uint32_t x);
extern void func_020211d4(uint32_t a, uint32_t b);
extern void func_ov007_0219cae0(void *p);

void func_ov007_0219cabc(void *self)
{
    uint32_t *reg = *(uint32_t **)((uint8_t *)self + 0x88);
    *reg = 0x11;
    func_020213f0(0x32);
    func_020211d4(0x45, 0);
    func_ov007_0219cae0(self);
}
