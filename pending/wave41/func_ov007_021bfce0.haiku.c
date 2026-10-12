#include "ffc/types.h"

int func_ov007_021bfce0(uint32_t x, uint32_t *p)
{
    switch (x) {
    case 0:
        *p = 0;
        return 0;
    case 1:
        *p = 8;
        return 2;
    case 2:
        *p = 8;
        return 3;
    case 3:
        *p = 9;
        return 1;
    default:
        return 0x11;
    }
}
