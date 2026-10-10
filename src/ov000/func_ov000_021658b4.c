#include "ffc/types.h"

extern void func_ov000_021653f4(void *object);

uint32_t func_ov000_021658b4(void *object) {
    uint32_t value = *(uint32_t *)((uint8_t *)object + 4);
    func_ov000_021653f4(object);
    return value;
}
