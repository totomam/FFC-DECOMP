#include "ffc/types.h"

extern void func_02089cc0(uint8_t v);

void func_02079ad0(uint8_t **p)
{
    if (*(volatile uint32_t *)p != 0) {
        func_02089cc0(*(*p + 0x3c));
    }
}
