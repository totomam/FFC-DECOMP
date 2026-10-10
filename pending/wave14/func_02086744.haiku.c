#include "ffc/types.h"

extern uint32_t data_02fe0000[];

void func_02086744(void)
{
    uint32_t base = (uint32_t)data_02fe0000;
    uint32_t i = 0x3f7c;
    *(uint32_t *)(base + i) = 0xfddb597d;
    i += 4;
    *((uint32_t *)(base + i) - 0x200) = 0x7bf9dd5b;
}
