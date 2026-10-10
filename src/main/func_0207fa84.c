#include "ffc/types.h"

extern uint32_t func_0207f8a0(uint32_t unused, const void *range, uint32_t *difference);
extern uint8_t data_020a1ad0[];

uint32_t func_0207fa84(void *p, uint32_t *difference)
{
    uint32_t result = 0;
    uint32_t inner = *(uint32_t *)((uint8_t *)p + 8);

    if (*(uint32_t *)(inner + 0x24) == (uint32_t)data_020a1ad0) {
        if (func_0207f8a0(inner, p, difference) == 0) {
            result = 1;
        }
    }
    return result;
}
