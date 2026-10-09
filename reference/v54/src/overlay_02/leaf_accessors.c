#include "ffc/overlay_02.h"

#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))

void *ffc_ov02_02196414(void *object) { return (uint8_t *)object + 0x80; }
uint32_t ffc_ov02_021d3310(const void *object) { return CONST_FIELD(uint32_t, object, 0); }
uint32_t ffc_ov02_021d3314(const void *object) { return CONST_FIELD(uint32_t, object, 4); }
uint32_t ffc_ov02_021d3318(const void *object) { return CONST_FIELD(uint32_t, object, 8); }
uint32_t ffc_ov02_021a16d4(const void *object) { return CONST_FIELD(uint32_t, object, 0xF4); }
uint32_t ffc_ov02_021a16dc(const void *object) { return CONST_FIELD(uint32_t, object, 0xF4); }
uint32_t ffc_ov02_021a1ac4(const void *object) { return CONST_FIELD(uint32_t, object, 0xF8); }
uint32_t ffc_ov02_021aa770(const void *object) { return CONST_FIELD(uint32_t, object, 0xC0); }
uint32_t ffc_ov02_021aa778(const void *object) { return CONST_FIELD(uint32_t, object, 0xC4); }
uint32_t ffc_ov02_021aa780(const void *object) { return CONST_FIELD(uint32_t, object, 0xC8); }
uint32_t ffc_ov02_021aa788(const void *object) { return CONST_FIELD(uint32_t, object, 0xCC); }
uint32_t ffc_ov02_021aa850(const void *object) { return CONST_FIELD(uint32_t, object, 0xBC); }
uint16_t ffc_ov02_021a170c(const void *object) { return CONST_FIELD(uint16_t, object, 0x130); }
uint32_t ffc_ov02_021a18bc(const void *object) { return CONST_FIELD(uint32_t, object, 0x120); }
uint8_t ffc_ov02_021a1e04(const void *object) { return CONST_FIELD(uint8_t, object, 0x140); }
uint32_t ffc_ov02_021aa198(const void *object, uint32_t index) { return CONST_FIELD(uint32_t, object, 0x18 + index * 4); }
uint32_t ffc_ov02_021aac08(const void *object) { return CONST_FIELD(uint32_t, object, 0x138); }
void *ffc_ov02_021aac10(void *object) { return (uint8_t *)object + 0x190; }
uint8_t ffc_ov02_021aab40(const void *object) {
    const void *nested = (const void *)(uintptr_t)CONST_FIELD(uint32_t, object, 0x138);
    return CONST_FIELD(uint8_t, nested, 0x19);
}
uint8_t ffc_ov02_021aab4c(const void *object) {
    const void *nested = (const void *)(uintptr_t)CONST_FIELD(uint32_t, object, 0x138);
    return CONST_FIELD(uint8_t, nested, 0x1A);
}
uint8_t ffc_ov02_021aab58(const void *object) {
    const void *nested = (const void *)(uintptr_t)CONST_FIELD(uint32_t, object, 0x138);
    return CONST_FIELD(uint8_t, nested, 1);
}
uint32_t ffc_ov02_021a18c4(const void *object, uint32_t index) {
    const uint32_t *values = (const uint32_t *)(uintptr_t)CONST_FIELD(uint32_t, object, 0x11C);
    return values[index];
}
uint32_t ffc_ov02_021aa11c(const void *object, uint32_t bit) {
    uint8_t shift = (uint8_t)bit;
    return shift < 32 && (CONST_FIELD(uint32_t, object, 4) & (1U << shift)) != 0;
}
uint8_t ffc_ov02_021aac84(const void *object, uint32_t offset) {
    return CONST_FIELD(uint8_t, object, 0x16A + offset);
}
uint32_t ffc_ov02_021ac9d8(uint32_t one_based_index, uint32_t row) {
    const uint32_t *entry = (const uint32_t *)(uintptr_t)(0x021D3B30 + row * 12);
    return entry[one_based_index - 1];
}
