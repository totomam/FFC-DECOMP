#include "ffc/types.h"

uint32_t func_ov002_021c8488(uint8_t *p)
{
    uint32_t v = *(uint32_t *)(p + 0x9c);
    if (v != 0) {
        v += 0xb8;
    }
    return v;
}
