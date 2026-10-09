#include "ffc/global_accessors.h"
#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
#define ABS(type, address) (*(type *)(uintptr_t)(address))
#define VOLATILE_ABS(type, address) (*(volatile type *)(uintptr_t)(address))

void func_0205fdb0(void *destination, const void *source) {
    uint32_t nibble = FIELD(uint32_t, (void *)source, 0x18) & 0xF;
    FIELD(uint32_t, destination, 4) = (FIELD(uint32_t, destination, 4) & 0xFFFF0FFFU) | (nibble << 12);
}
