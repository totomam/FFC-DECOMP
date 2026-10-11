#include "ffc/types.h"

void func_ov013_021c0cf0(uint8_t *p, uint32_t v) {
    if (v == *(uint32_t *)(p + 0xc0)) {
        *(uint8_t *)(*(uint32_t *)(p + 0xb8)) = 1;
    }
    if (v == *(uint32_t *)(p + 0xc4)) {
        *(uint8_t *)(*(uint32_t *)(p + 0xbc)) = 1;
    }
}
