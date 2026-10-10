#include "ffc/types.h"

void func_02060548(void *p, uint32_t v) {
    uint16_t *h = (uint16_t *)((uint8_t *)p + 4);
    *h = (*h & ~0xc0) | (v << 6);
}
