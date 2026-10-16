#include "ffc/types.h"
extern void func_02089cc0(uint8_t v, uint32_t a, uint32_t b);
void func_02079ad0(uint32_t *pp, uint32_t a, uint32_t b)
{
    if (*(volatile uint32_t *)pp != 0) {
        func_02089cc0(*(uint8_t *)(*pp + 0x3c), a, b);
    }
}
