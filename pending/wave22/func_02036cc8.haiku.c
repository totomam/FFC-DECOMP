#include "ffc/types.h"

typedef struct {
    uint32_t low : 14;
    uint32_t high : 18;
} FfcBits08;

uint32_t func_02036cc8(const void *object) {
    return ((const FfcBits08 *)((const uint8_t *)object + 8))->low;
}
