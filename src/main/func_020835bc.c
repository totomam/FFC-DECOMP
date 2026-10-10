#include "ffc/types.h"

extern void func_020834f0(void *p);
extern uint8_t data_0214139e;

void func_020835bc(void)
{
    volatile uint32_t *reg = (volatile uint32_t *)0x04000000;
    *reg = *reg & 0xbfffffff;
    func_020834f0(&data_0214139e);
}
