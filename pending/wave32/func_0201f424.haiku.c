#include "ffc/types.h"

extern uint8_t func_02036360(const void *object);
extern void func_0201f3bc(void *self, uint32_t index, uint32_t arg);

uint32_t func_0201f424(void *self, uint32_t arg, uint32_t *out)
{
    uint32_t i;
    for (i = 0; i < 100; i++) {
        uint8_t *base = *(uint8_t **)((uint8_t *)self + 0x5c);
        if (func_02036360(base + i * 0x60) == 0) {
            if (out != 0) {
                *out = i;
            }
            func_0201f3bc(self, i, arg);
            return 1;
        }
    }
    return 0;
}
