#include "ffc/types.h"

void func_02060584(uint8_t *p, uint32_t v) {
    uint16_t *h = (uint16_t *)(p + 4);
    *h = (*h & 0xc0ff) | (v << 8);
}
