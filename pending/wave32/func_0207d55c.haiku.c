#include "ffc/types.h"

extern int32_t func_0207d4f0(void);
extern void func_0207d47c(uint32_t a, uint32_t b);

uint32_t func_0207d55c(void)
{
    uint32_t r4 = 0xb8;
    if (func_0207d4f0() != 0) {
        r4 = 0x90;
    }
    func_0207d47c(r4, 0);
    {
        uint32_t v = *(volatile uint32_t *)0x2fffae0;
        volatile uint32_t *reg = (volatile uint32_t *)0x40001a4;
        *reg = ((0xa7u << 24) | (v & 0xf8ffffffu)) & (0xf8ffffffu << 13);
        while (!(*reg & (2u << 22))) {
        }
    }
    return *(volatile uint32_t *)0x4100010;
}
