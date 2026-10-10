#include "ffc/types.h"

int32_t func_02060e9c(const void *object) {
    uint32_t v = *(const uint32_t *)((const uint8_t *)object + 4);
    return (int32_t)(v << 16) >> 30;
}
