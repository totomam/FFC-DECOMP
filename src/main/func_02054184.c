#include "ffc/types.h"

void func_02054184(void)
{
    volatile uint16_t *reg = (volatile uint16_t *)0x04000208;
    (void)*reg;
    *reg = 1;
}
