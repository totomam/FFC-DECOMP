#include "ffc/types.h"

extern void func_020834f0(void *p);
extern uint8_t data_021413a0;

void func_020835dc(void)
{
    volatile uint32_t *reg = (volatile uint32_t *)0x04000000;
    *reg = *reg & 0x7fffffff;
    func_020834f0(&data_021413a0);
}
