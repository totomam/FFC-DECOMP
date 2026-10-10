#include "ffc/types.h"

#define ABS(type, address) (*(type *)(uintptr_t)(address))

void func_02082030(uint32_t value) { ABS(uint32_t, 0x04000010) = value; }
