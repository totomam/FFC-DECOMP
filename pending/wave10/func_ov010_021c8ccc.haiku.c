#include "ffc/types.h"

extern void func_ov010_021c8cf8(uint8_t *a, uint8_t idx);

void func_ov010_021c8ccc(uint8_t *a, uint32_t b)
{
    uint8_t i;
    for (i = 0; i < 5; i++) {
        if (b == *(uint32_t *)(a + 0xcc + i * 4)) {
            func_ov010_021c8cf8(a, i);
        }
    }
}
