#include "ffc/types.h"

void func_02075b0c(uint8_t *s, uint32_t a, uint32_t b) {
    *(uint32_t *)(*(uint8_t **)(s + 0x40) + 0x4264) = a;
    *(uint32_t *)(*(uint8_t **)(s + 0x40) + 0x4268) = b;
}
