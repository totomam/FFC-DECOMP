#include "ffc/types.h"

uint32_t func_ov002_02195fac(uint8_t *p)
{
    uint32_t v = *(uint32_t *)(p + 0x3d4);
    if (v != 0) {
        v += 0x80;
    }
    return v;
}
