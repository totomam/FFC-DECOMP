#include "ffc/types.h"

uint32_t func_02066600(uint8_t *p) {
    uint32_t v = *(uint32_t *)(*(uint32_t *)(*(uint32_t *)(p + 0x20) + 0x18) + 0x18);
    return 1u << v;
}
