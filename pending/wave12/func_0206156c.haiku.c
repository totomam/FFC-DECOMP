#include "ffc/types.h"

uint32_t func_0206156c(void *p) {
    uint8_t *b = *(uint8_t **)((uint8_t *)p + 0x18);
    uint32_t off = *(uint32_t *)(b + 0x34);
    uint32_t hi = b[off];
    uint8_t lo = *(uint8_t *)(b + off + 1);
    return (hi << 8) | lo;
}
