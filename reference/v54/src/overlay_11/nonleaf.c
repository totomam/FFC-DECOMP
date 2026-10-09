#include "ffc/overlay_11.h"

#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))

extern void ffc_ov02_0219cfb4(void *object);
extern void *ffc_arm9_02056b10(void *owner);
extern uint32_t ffc_arm9_02056bc0(void *destination, void *value);

uint32_t ffc_ov11_021c9418(void *object) {
    ffc_ov02_0219cfb4((void *)(uintptr_t)FIELD(uint32_t, object, 0x344));
    return ffc_arm9_02056bc0(
        (uint8_t *)object + 0x14,
        ffc_arm9_02056b10(
            (uint8_t *)(uintptr_t)FIELD(uint32_t, object, 0x344) + 0x14));
}
