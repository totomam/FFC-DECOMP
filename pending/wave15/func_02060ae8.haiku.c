#include "ffc/types.h"

void func_02060ae8(uint8_t *p, int flag)
{
    if (flag) {
        p[8] |= 0x20;
    } else {
        p[8] &= 0xdf;
    }
}
