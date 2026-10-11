#include "ffc/types.h"

extern void func_02056858(uint32_t arg);

void func_02023e0c(uint8_t *p)
{
    uint32_t off = 0x1d0;
    if (p[off] != 0) {
        func_02056858(*(uint32_t *)(p + 0x1a0));
        *(uint32_t *)(p + 0x1a0) = 0;
        *(uint32_t *)(p + 0x1ac) = 0;
        p[off] = 0;
    }
}
