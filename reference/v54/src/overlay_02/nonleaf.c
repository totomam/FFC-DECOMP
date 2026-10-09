#include "ffc/overlay_02.h"

#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))

extern uint32_t ffc_ov02_021acf84(const void *object);
extern uint32_t ffc_ov02_021ac9f0(uint32_t first, uint32_t second);
extern void ffc_arm9_02091a24(const void *message);
extern void ffc_arm9_0208f42c(void);
extern uint32_t ffc_ov02_021aaab0(const void *object);
extern uint32_t ffc_ov02_021ad008(void *object, uint32_t index, uint32_t value);
extern uint32_t ffc_ov02_021ad084(void *object);

uint32_t ffc_ov02_021aafc0(const void *object) {
    const void *nested = (const void *)(uintptr_t)ffc_ov02_021aac08(object);
    return CONST_FIELD(uint16_t, nested, 0x38) != 0;
}

uint32_t ffc_ov02_021aa1a0(const void *object, uint32_t index) {
    return (int32_t)ffc_ov02_021aa198(object, index) > 2;
}

uint32_t ffc_ov02_021acff4(const void *object, uint32_t index) {
    return index >= ffc_ov02_021acf84(object);
}

uint32_t ffc_ov02_021ac8d8(const void *first, const void *second) {
    return ffc_ov02_021ac9f0(ffc_ov02_021aab58(first), ffc_ov02_021aab58(second));
}

void *ffc_ov02_021d2b7c(const void *object, uint32_t index) {
    if (index >= CONST_FIELD(uint32_t, object, 4)) {
        ffc_arm9_02091a24((const void *)0x021D78C4);
        ffc_arm9_0208f42c();
    }
    return (uint8_t *)(uintptr_t)CONST_FIELD(uint32_t, object, 0) + index * 8;
}

uint32_t ffc_ov02_021aab20(const void *object) {
    if (ffc_ov02_021aaab0(object) != 0 && ffc_ov02_021aab40(object) == 5) {
        return 1;
    }
    return 0;
}

uint32_t ffc_ov02_021aaffc(const void *object) {
    if (ffc_ov02_021aab40(object) == 0x10 &&
        ffc_ov02_021a18bc((const void *)(uintptr_t)CONST_FIELD(uint32_t, object, 0xBC)) == 1) {
        return 1;
    }
    return 0;
}

uint32_t ffc_ov02_021aaf9c(void *object, uint32_t index) {
    if (index < ffc_ov02_021acf84(object)) {
        return ffc_ov02_021ad008(object, index, 0);
    }
    return ffc_ov02_021ad084(object);
}
