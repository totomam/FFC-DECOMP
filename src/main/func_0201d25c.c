#include "ffc/types.h"

extern uint32_t func_02036cd8(const void *object);

int func_0201d25c(int unused, uint8_t *base, uint32_t count)
{
    uint32_t i;
    for (i = 0; i < count; i++) {
        if (func_02036cd8(base + i * 0x18) == 0) {
            return i;
        }
    }
    return -1;
}
