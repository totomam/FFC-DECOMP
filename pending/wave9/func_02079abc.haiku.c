#include "ffc/types.h"

extern void func_02089bd0(uint8_t v);

void func_02079abc(uint32_t *pp)
{
    if (*(volatile uint32_t *)pp != 0) {
        func_02089bd0(*(uint8_t *)(*pp + 0x3c));
    }
}
