#include "ffc/types.h"

uint32_t func_ov009_021a0370(uint8_t *a) {
    uint32_t *p = *(uint32_t **)(a + 0x88);
    if (p != 0) {
        uint32_t *q = *(uint32_t **)((uint8_t *)p + 0x34);
        return *(uint32_t *)((uint8_t *)q + 0x2dc);
    }
    return 0x1f;
}
