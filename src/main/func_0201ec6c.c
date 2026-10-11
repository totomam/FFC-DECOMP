#include "ffc/types.h"

extern uint32_t func_02036cd8(const void *object);

uint32_t func_0201ec6c(void *self)
{
    uint32_t count = 0;
    uint32_t i;
    for (i = 0; i < 0x40; i++) {
        uint8_t *base = *(uint8_t **)((uint8_t *)self + 0x4c);
        if (func_02036cd8(base + i * 0x18) != 0) {
            count++;
        }
    }
    return count;
}
