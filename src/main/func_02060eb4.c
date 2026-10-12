#include "ffc/types.h"

typedef struct {
    uint32_t low : 5;
    uint32_t high : 27;
} Bits;

uint32_t func_02060eb4(const void *object) {
    const Bits *b = (const Bits *)((const uint8_t *)object + 4);
    return b->low;
}
