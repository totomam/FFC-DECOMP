/* cflags: -nothumb */
#include "ffc/global_accessors.h"
#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
#define ABS(type, address) (*(type *)(uintptr_t)(address))
#define VOLATILE_ABS(type, address) (*(volatile type *)(uintptr_t)(address))

uint32_t func_02004eb4(void) { return (VOLATILE_ABS(uint8_t, 0x04004000) & 3) == 1; }
