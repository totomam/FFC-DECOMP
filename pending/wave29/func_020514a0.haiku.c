#include "ffc/types.h"

uint32_t func_020514a0(uint32_t c)
{
    if (c <= 0x7f) {
        return (uint16_t)c;
    }
    if (c <= 0x7fff) {
        return (uint16_t)((c & 0x3f) | ((c & 0x1f00) >> 2));
    }
    return (uint16_t)((c & 0x3f) | ((c & 0x3f00) >> 2) | ((c & 0xf0000) >> 4));
}
