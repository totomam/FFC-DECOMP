#include "ffc/types.h"

extern void func_ov011_021c4a4c(uint8_t *a, uint8_t idx);

void func_ov011_021c3fb8(uint8_t *a, uint32_t b)
{
    uint8_t i;
    for (i = 0; i < 5; i++) {
        if (b == *(uint32_t *)(a + 0xc4 + i * 4)) {
            func_ov011_021c4a4c(a, i);
        }
    }
}
