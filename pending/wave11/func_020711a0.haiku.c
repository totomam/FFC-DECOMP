#include "ffc/types.h"

uint8_t func_020711a0(void *self, int32_t idx) {
    uint8_t *base = *(uint8_t **)((uint8_t *)self + 0x14);
    return *(uint8_t *)(base + idx * 0x1c + 0x18);
}
