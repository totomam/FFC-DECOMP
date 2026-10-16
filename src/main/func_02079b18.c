#include "ffc/types.h"
extern void func_02089c18(uint8_t v, uint32_t a, uint32_t b);
void func_02079b18(uint32_t *pp, uint32_t a, uint32_t b)
{
    if (*(volatile uint32_t *)pp != 0) {
        func_02089c18(*(uint8_t *)(*pp + 0x3c), a, b);
    }
}
