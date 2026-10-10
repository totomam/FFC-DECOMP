#include "ffc/types.h"

uint32_t func_0204f7d4(uint8_t *p)
{
    uint16_t f = *(uint16_t *)(p + 0x5c);
    if (f & 0x8000) {
        return *(uint32_t *)(p + 0x20);
    }
    return *(uint32_t *)(p + 0x24);
}
