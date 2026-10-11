#include "ffc/types.h"

void func_ov011_021c5900(uint8_t *p)
{
    int32_t v = *(int32_t *)(p + 0x120);
    switch (v) {
    case 0:
        p[0x118] = 2;
        break;
    case 1:
        p[0x118] = 3;
        break;
    case 2:
        p[0x118] = 4;
        break;
    default:
        p[0x118] = 5;
        break;
    }
}
