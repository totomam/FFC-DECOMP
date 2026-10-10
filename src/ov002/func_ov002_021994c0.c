#include "ffc/types.h"

int func_ov002_021994c0(uint8_t *p, uint32_t mask)
{
    if (*(uint32_t *)(p + 0xdc) & mask) {
        return 1;
    }
    return 0;
}
