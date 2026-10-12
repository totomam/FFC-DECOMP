#include "ffc/types.h"

extern void func_020060a8(void *p, int i);

void func_02007754(uint8_t *a, uint32_t m) {
    int i;
    for (i = 0; i < 16; i++) {
        if (m & (uint16_t)(1u << i)) {
            uint8_t *p = a + i * 0x18;
            *(uint32_t *)(p + 0x34) = 0x7f;
            *(uint32_t *)(p + 0x30) = 0x7f;
            *(uint32_t *)(p + 0x2c) = 0x7f;
            func_020060a8(a + 4, i);
        }
    }
    *a = 1;
}
