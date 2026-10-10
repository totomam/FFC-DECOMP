#include "ffc/types.h"

extern void func_ov007_021b65d4(uint8_t *p, uint8_t idx);

void func_ov007_021b6008(uint8_t *p, uint32_t v)
{
    uint8_t i;
    for (i = 0; i < 10; i++) {
        if (((uint32_t *)(p + 0xc8))[i] == v && p[0x12c] < 0xa) {
            func_ov007_021b65d4(p, i);
        }
    }
}
