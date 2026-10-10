#include "ffc/types.h"

void func_02075af4(uint8_t *s, uint32_t a, uint32_t b) {
    *(uint32_t *)(*(uint8_t **)(s + 0x40) + 0x4254) = a;
    *(uint32_t *)(*(uint8_t **)(s + 0x40) + 0x4258) = b;
}
