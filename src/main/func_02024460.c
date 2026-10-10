#include "ffc/types.h"

extern void func_02081c7c(uint32_t a, uint32_t b);

void func_02024460(uint32_t a, uint32_t b)
{
    volatile uint32_t *reg = (volatile uint32_t *)0x04000444;
    reg[0] = 0;
    func_02081c7c(a, 0);
    reg[2] = b + 5;
    reg[1] = 1;
}
