#include "ffc/types.h"

uint32_t func_ov006_021b0548(uint32_t c)
{
    if (c <= 0x39) {
        return c - 0x30;
    }
    if (c <= 0x46) {
        return c - 0x37;
    }
    return c - 0x57;
}
