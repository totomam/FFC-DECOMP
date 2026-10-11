#include "ffc/types.h"

void *func_0207c8dc(uint8_t *p, int32_t i) {
    uint32_t off;
    if (i < 0) {
        return 0;
    }
    if ((uint32_t)i >= *(uint32_t *)(p + 0x1c)) {
        return 0;
    }
    off = (uint32_t)i * 12;
    if (*(int32_t *)(p + 0x20 + off) == -1) {
        return 0;
    }
    return p + 0x20 + off;
}
