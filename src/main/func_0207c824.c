#include "ffc/types.h"

extern uint32_t func_0207ea98(void *object, uint32_t first, uint32_t second);
extern void func_0207eab0(void *object, uint32_t a, uint32_t b);

void func_0207c824(uint8_t *self, uint32_t a, uint32_t b, uint32_t c)
{
    func_0207ea98(self + 0x64, *(uint32_t *)(self + 0xac) + c, 0);
    func_0207eab0(self + 0x64, a, b);
}
