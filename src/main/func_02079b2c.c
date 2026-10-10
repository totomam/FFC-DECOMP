#include "ffc/types.h"
extern void func_02089bb0(uint8_t v, uint32_t a);
void func_02079b2c(uint32_t *pp, uint32_t a)
{
    if (*(volatile uint32_t *)pp != 0) {
        func_02089bb0(*(uint8_t *)(*pp + 0x3c), a);
    }
}
