#include "ffc/types.h"

void func_ov009_0219aa04(uint8_t *p, uint32_t i, uint16_t a, uint16_t b) {
    uint32_t off = i << 1;
    *(uint16_t *)(p + off + 0x94) = a;
    *(uint16_t *)(p + off + 0xa0) = b;
}
