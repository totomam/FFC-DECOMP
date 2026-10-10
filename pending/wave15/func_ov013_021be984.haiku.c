#include "ffc/types.h"

void func_ov013_021be984(uint8_t *base, uint32_t *p)
{
    if (p[3] == 0x100b0) {
        uint8_t *b = base + p[4];
        b[0x11c] = 1;
    }
}
