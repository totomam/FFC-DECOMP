#include "ffc/types.h"

extern int func_02089218(int a, uint32_t b, int c);

int func_020862c8(uint32_t a, uint32_t b, uint32_t c)
{
    int ret = 0;

    if (func_02089218(4, 0x2002300 | (uint8_t)(a >> 16), 0) < 0) {
        return ret;
    }
    if (func_02089218(4, 0x10000 | (uint16_t)a, 0) < 0) {
        return ret;
    }
    if (func_02089218(4, 0x20000 | (b >> 16), 0) < 0) {
        return ret;
    }
    if (func_02089218(4, 0x30000 | (uint16_t)b, 0) < 0) {
        return ret;
    }
    if (func_02089218(4, 0x40000 | (c >> 16), 0) < 0) {
        return ret;
    }
    if (func_02089218(4, 0x1050000 | (uint16_t)c, 0) < 0) {
        return ret;
    }
    ret = 1;
    return ret;
}
