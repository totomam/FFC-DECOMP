#include "ffc/types.h"

extern void func_02056858(uint32_t v);

void func_02073904(uint8_t *p)
{
    int i;
    for (i = 0; i < 0x20; i++) {
        uint32_t *q = (uint32_t *)(p + i * 4);
        if (q[0x4B] != 0) {
            func_02056858(q[0x4B]);
            q[0x4B] = 0;
        }
    }
}
