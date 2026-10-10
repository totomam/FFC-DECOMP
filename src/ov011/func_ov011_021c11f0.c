#include "ffc/overlay_11.h"
#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
extern void func_ov002_0219cfb4(void *object);
extern void *func_02056b10(void *owner);
extern uint32_t func_02056bc0(void *destination, void *value);

uint32_t func_ov011_021c11f0(void *object) {
    func_ov002_0219cfb4((void *)(uintptr_t)FIELD(uint32_t, object, 0x2b8));
    return func_02056bc0(
        (uint8_t *)object + 0x14,
        func_02056b10(
            (uint8_t *)(uintptr_t)FIELD(uint32_t, object, 0x2b8) + 0x14));
}
