#include "ffc/types.h"

typedef struct {
    uint32_t lo : 14;
    uint32_t hi : 18;
} FfcBits8;

uint32_t func_02036cc8(const void *object) {
    const FfcBits8 *p = (const FfcBits8 *)((const uint8_t *)object + 8);
    return p->lo;
}
