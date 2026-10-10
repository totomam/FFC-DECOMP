#include "ffc/types.h"

extern void func_02089cc0(uint8_t v);

void func_02079ad0(uint32_t *p)
{
    uint32_t x;
    x = *p;
    if (x == 0) return;
    func_02089cc0(*(uint8_t *)(*(volatile uint32_t *)p + 0x3c));
}
