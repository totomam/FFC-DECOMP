#include "ffc/global_accessors.h"
#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
#define ABS(type, address) (*(type *)(uintptr_t)(address))
#define VOLATILE_ABS(type, address) (*(volatile type *)(uintptr_t)(address))

uintptr_t func_02099058(void) { return 0xffff; }
