#include "ffc/types.h"

void func_ov002_021ae750(uint8_t *base, uint32_t idx, uint8_t val)
{
    uint8_t *p = base + 0x17c;
    if (p[idx] != val) {
        p[idx] = val;
    }
}
