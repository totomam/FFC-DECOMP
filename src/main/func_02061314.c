#include "ffc/global_accessors.h"
#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
#define ABS(type, address) (*(type *)(uintptr_t)(address))
#define VOLATILE_ABS(type, address) (*(volatile type *)(uintptr_t)(address))

void func_02061314(void *object) {
    FIELD(uint32_t, object, 0x00) = 0x020B1428;
    FIELD(uint32_t, object, 0x04) = 0;
    FIELD(uint32_t, object, 0x08) = 0;
    FIELD(uint32_t, object, 0x0C) = 0;
    FIELD(uint32_t, object, 0x10) = 0;
}
