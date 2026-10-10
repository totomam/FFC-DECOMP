#include "ffc/types.h"

extern void func_02021344(uint32_t v, uint32_t flag);

void func_ov003_0215b088(uint8_t *p)
{
    uint16_t v = *(uint16_t *)(p + 0x336);
    if (v) {
        func_02021344(v, 0);
    }
}
