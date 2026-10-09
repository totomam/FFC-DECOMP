#include "ffc/global_accessors.h"
#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
#define ABS(type, address) (*(type *)(uintptr_t)(address))
#define VOLATILE_ABS(type, address) (*(volatile type *)(uintptr_t)(address))

void func_02059db8(void *object, uint32_t value_34, uint32_t bit) {
    FIELD(uint32_t, object, 0x10) = (FIELD(uint32_t, object, 0x10) & 0xFFFFDFFFU) | ((bit & 1) << 13);
    FIELD(uint32_t, object, 0x34) = value_34;
}
