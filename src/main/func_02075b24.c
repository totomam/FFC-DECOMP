#include "ffc/types.h"

void func_02075b24(uint8_t *s, uint32_t a, uint32_t b) {
    *(uint32_t *)(*(uint8_t **)(s + 0x40) + 0x425c) = a;
    *(uint32_t *)(*(uint8_t **)(s + 0x40) + 0x4260) = b;
}
