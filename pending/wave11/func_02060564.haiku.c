#include "ffc/types.h"

void func_02060564(uint8_t *p, uint32_t a, uint32_t b) {
    *(uint16_t *)(p + 6) = (uint16_t)(a | (b << 8));
}
