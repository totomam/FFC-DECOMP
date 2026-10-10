#include "ffc/types.h"

void func_02023e54(uint8_t *p, int32_t flag)
{
    if (flag != 0) {
        uint32_t v = *(uint32_t *)(p + 0x20);
        *(uint32_t *)(p + 0x20) = v | 0x8000;
        return;
    }
    {
        uint32_t v = *(uint32_t *)(p + 0x20);
        *(uint32_t *)(p + 0x20) = v & 0xffff7fff;
    }
}
