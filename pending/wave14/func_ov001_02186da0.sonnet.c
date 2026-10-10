#include "ffc/types.h"

extern void *func_ov000_021686f4(uint32_t a, uint32_t b, uint32_t c);

void func_ov001_02186da0(void *self) {
    uint8_t *p = (uint8_t *)self;
    *(void **)(p + 4) = func_ov000_021686f4(4, 0x64, 0);
    *(uint32_t *)(p + 0x7d8) = 0;
}
