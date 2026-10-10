#include "ffc/types.h"

extern void func_020836d0(uint32_t a);

void func_02081c40(uint32_t a)
{
    *(volatile uint32_t *)0x04000400 = 0x16;
    func_020836d0(a);
}
