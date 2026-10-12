#include "ffc/types.h"

extern void func_02024dfc(uint32_t elem, uint8_t val, uint32_t e);

void func_0202c4a0(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t e)
{
    uint32_t j = 0;
    uint32_t i = 0;

    for (; i < *(uint32_t *)(p + 0xb20); i++) {
        if (c * j >= b) {
            j = 0;
        }
        func_02024dfc(((uint32_t *)(p + 0x19c))[i], (uint8_t)(a + c * j), e);
        j++;
    }
}
