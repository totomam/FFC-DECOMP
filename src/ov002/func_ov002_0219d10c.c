#include "ffc/types.h"

uint32_t func_ov002_0219d10c(uint8_t *p) {
    uint8_t *q = *(uint8_t **)(p + 0x20);
    if (q != 0) {
        return 1u << *(uint32_t *)(q + 0x18);
    }
    return 0;
}
