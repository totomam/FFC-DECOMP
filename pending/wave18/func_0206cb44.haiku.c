#include "ffc/types.h"

void func_0206cb44(uint8_t *base)
{
    *(uint32_t *)(base + 0x31b8) = 0;
    *(uint8_t *)(base + 0x30b4) = 0;
    *(uint8_t *)(base + 0x30b5) = 1;
    *(uint32_t *)(base + 0x30b0) = 0;
    *(uint8_t *)(base + 0xf92) = 0;
    {
        uint8_t *q = *(uint8_t **)(base + 0x3220);
        q[3] = 1;
    }
}
