#include "ffc/types.h"

#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))

typedef struct {
    uint32_t lo : 2;
    uint32_t rest : 30;
} Bits2;

uint32_t func_02020410(const void *object) {
    const void *nested = (const void *)(uintptr_t)CONST_FIELD(uint32_t, object, 0x20);
    return ((const Bits2 *)((const uint8_t *)nested + 0x10))->lo;
}
