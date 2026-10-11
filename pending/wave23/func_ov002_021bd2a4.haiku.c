#include "ffc/types.h"

extern void func_ov002_021bc6cc(uint32_t arg);

void func_ov002_021bd2a4(uint8_t *p)
{
    uint32_t i;
    for (i = 0; i < 2; i++) {
        func_ov002_021bc6cc(*(uint32_t *)(p + i * 0x1c + 0x98));
    }
}
