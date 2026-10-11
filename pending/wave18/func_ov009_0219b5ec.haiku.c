#include "ffc/types.h"

void func_ov009_0219b5ec(uint8_t *p, uint32_t v, uint32_t c) {
    if (c) {
        *(uint32_t *)(p + 0x22c) = v;
        return;
    }
    *(uint32_t *)(p + 0x22c) = 0xffffffffu;
    *(uint32_t *)(p + 0x228) = 0xffffffffu;
}
