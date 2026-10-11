#include "ffc/types.h"

extern uint32_t func_02073868(uint32_t);
extern uint32_t func_02073870(uint32_t);
extern uint64_t func_0209a978(uint32_t, uint32_t);

int func_02075190(uint8_t *a)
{
    uint32_t x = func_02073868(*(uint32_t *)(a + 0x2c));
    uint32_t y = func_02073870(*(uint32_t *)(a + 0x2c));
    uint64_t r = func_0209a978(*(uint32_t *)(a + 0x4250), x);
    if ((uint32_t)(r >> 32) == y) {
        return 1;
    }
    return 0;
}
