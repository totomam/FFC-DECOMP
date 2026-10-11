#include "ffc/types.h"

void func_0204f7a8(uint8_t *p, uint32_t v) {
    if (v == *(uint32_t *)(p + 0x24)) {
        *(uint16_t *)(p + 0x5c) = *(uint16_t *)(p + 0x5c) | 0x8000;
    } else {
        uint32_t x = *(uint16_t *)(p + 0x5c);
        x &= 0xffff7fff;
        *(uint16_t *)(p + 0x5c) = x;
    }
}
