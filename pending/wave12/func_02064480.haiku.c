#include "ffc/types.h"

uint32_t func_02064480(uint8_t *a) {
    uint8_t *b = *(uint8_t **)(a + 0x24);
    uint32_t v = *(uint32_t *)(b + 0x20);
    return (v & 0xC0000000u) >> 30;
}
