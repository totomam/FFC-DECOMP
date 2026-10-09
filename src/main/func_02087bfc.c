#include "ffc/global_accessors.h"
#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
#define ABS(type, address) (*(type *)(uintptr_t)(address))
#define VOLATILE_ABS(type, address) (*(volatile type *)(uintptr_t)(address))

void func_02087bfc(uint32_t index, uint32_t value) { ((uint32_t *)(uintptr_t)0x2fffdc4)[index] = value; }
