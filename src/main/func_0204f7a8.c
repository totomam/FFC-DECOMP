#include "ffc/types.h"

void func_0204f7a8(void *p, uint32_t v) {
    uint8_t *b = (uint8_t *)p;
    if (v == *(uint32_t *)(b + 0x24)) {
        *(uint16_t *)(b + 0x5c) = *(uint16_t *)(b + 0x5c) | 0x8000;
    } else {
        *(uint16_t *)(b + 0x5c) = *(uint16_t *)(b + 0x5c) & ~0x8000;
    }
}
