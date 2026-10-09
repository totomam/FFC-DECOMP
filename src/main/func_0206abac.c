#include "ffc/global_accessors.h"
#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
#define ABS(type, address) (*(type *)(uintptr_t)(address))
#define VOLATILE_ABS(type, address) (*(volatile type *)(uintptr_t)(address))

void func_0206abac(void *object, uint32_t value_14) {
    FIELD(uint32_t, object, 0x0C) &= ~0xFFU;
    FIELD(uint32_t, object, 0x00) = 0x20b1c00;
    FIELD(uint32_t, object, 0x14) = value_14;
}
