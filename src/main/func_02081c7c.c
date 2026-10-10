#include "ffc/types.h"

extern void func_020836ac(uint32_t a);

void func_02081c7c(uint32_t a)
{
    *(volatile uint32_t *)0x04000400 = 0x19;
    func_020836ac(a);
}
