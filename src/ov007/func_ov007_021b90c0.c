#include "ffc/types.h"

uint32_t func_ov007_021b90c0(uint8_t *r0, uint32_t r1)
{
    switch (r1) {
    default:
    case 0:
        return ((uint32_t **)(r0 + 0xd8))[0][0];
    case 1:
        return ((uint32_t **)(r0 + 0xd8))[0][1];
    case 2:
        return ((uint32_t **)(r0 + 0xd8))[0][2];
    case 3:
        return ((uint32_t **)(r0 + 0xd8))[0][3];
    }
}
