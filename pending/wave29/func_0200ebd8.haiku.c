#include "ffc/types.h"

extern uint8_t data_020ab878[];

void func_0200ebd8(uint8_t *p)
{
    uint32_t i;
    uint32_t *a = (uint32_t *)(p + 0x24);
    *(uint32_t *)(p + 0xc) = 0x1011d;
    *(uint8_t **)p = data_020ab878;
    *(uint32_t *)(p + 8) = 0;
    for (i = 0; i < 4; i++) {
        a[i] = 0;
        a[i + 4] = 8;
        a[i + 8] = 0;
        p[0x54 + i] = 0;
        a[i + 13] = 1;
        p[0x68 + i] = 1;
    }
}
