#include "ffc/types.h"

uint16_t func_0200848c(uint8_t *p) {
    uint32_t off = *(uint32_t *)p;
    uint8_t *q = p + (off << 4);
    return *(uint16_t *)(q + 0xe);
}
