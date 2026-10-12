#include "ffc/types.h"

typedef struct {
    uint32_t lo : 13;
    uint32_t hi : 19;
} FfcBits13;

uint32_t func_02036d78(const void *object) {
    const FfcBits13 *p = (const FfcBits13 *)((const uint8_t *)object + 0x10);
    return p->lo;
}
