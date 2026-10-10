#include "ffc/types.h"

uint8_t *func_ov003_0216f064(uint8_t *p, int32_t i) {
    uint8_t *base = p + *(int32_t *)(p + 8);
    return base + i * 12;
}
