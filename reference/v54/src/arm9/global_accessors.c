#include "ffc/global_accessors.h"

#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
#define ABS(type, address) (*(type *)(uintptr_t)(address))
#define VOLATILE_ABS(type, address) (*(volatile type *)(uintptr_t)(address))

uintptr_t ffc_arm9_020159f8(void) { return 0x020ACAD2; }
uintptr_t ffc_arm9_0207caac(void) { return 0x02FFFE00; }
uintptr_t ffc_arm9_0207cab4(void) { return 0x02FFE000; }
uintptr_t ffc_arm9_02088a38(void) { return 0x02FFFC40; }
void ffc_arm9_0207ca98(uint32_t value) { ABS(uint32_t, 0x0214075C) = value; }
uint16_t ffc_arm9_0208196c(void) { return ABS(uint16_t, 0x020B2944); }
uint16_t ffc_arm9_02088344(void) { return VOLATILE_ABS(uint16_t, 0x04000100); }
uint32_t ffc_arm9_02087a88(uint32_t index) { return ((uint32_t *)(uintptr_t)0x02FFFDC4)[index]; }
uint32_t ffc_arm9_02087a94(uint32_t index) { return ((uint32_t *)(uintptr_t)0x02FFFDA0)[index]; }
void ffc_arm9_02087c08(uint32_t index, uint32_t value) { ((uint32_t *)(uintptr_t)0x02FFFDA0)[index] = value; }
uint32_t ffc_arm9_02051448(int32_t fixed_index) {
    int32_t index = fixed_index >> 4;
    return ((uint32_t *)(uintptr_t)0x0209F308)[index];
}
uint32_t ffc_arm9_02054184(void) {
    VOLATILE_ABS(uint16_t, 0x04000208) = 1;
    return 1;
}
uint32_t ffc_arm9_0205fb68(uint32_t index, uint32_t multiplier) {
    return ((uint32_t *)(uintptr_t)0x0209FD38)[index] * multiplier;
}
void ffc_arm9_0208657c(void) {
    ABS(uint32_t, 0x02FE0548) = 0;
    ABS(uint32_t, 0x02FE0544) = 0;
}
void ffc_arm9_02086b28(void) { ABS(uint32_t, 0x0214150C)++; }
uint32_t ffc_arm9_02059d54(uint32_t index) {
    return *(uint32_t *)(uintptr_t)(0x0209F488 + index * 12) << 11;
}
uint32_t ffc_arm9_02004eb4(void) { return (VOLATILE_ABS(uint8_t, 0x04004000) & 3) == 1; }
void ffc_arm9_02062848(void *object) {
    FIELD(uint32_t, object, 0x0C) &= ~0xFFU;
    FIELD(uint32_t, object, 0x00) = 0x020B1640;
}
void ffc_arm9_02054658(void *object, uint32_t value_14) {
    FIELD(uint32_t, object, 0x0C) &= ~0xFFU;
    FIELD(uint32_t, object, 0x00) = 0x020B05E8;
    FIELD(uint32_t, object, 0x14) = value_14;
}
void ffc_arm9_02054af0(void *object, uint32_t value_14) {
    FIELD(uint32_t, object, 0x0C) &= ~0xFFU;
    FIELD(uint32_t, object, 0x00) = 0x020B05FC;
    FIELD(uint32_t, object, 0x14) = value_14;
}
void ffc_arm9_02054cf8(void *object, uint32_t value_14) {
    FIELD(uint32_t, object, 0x0C) &= ~0xFFU;
    FIELD(uint32_t, object, 0x00) = 0x020B0624;
    FIELD(uint32_t, object, 0x14) = value_14;
}
void ffc_arm9_02061314(void *object) {
    FIELD(uint32_t, object, 0x00) = 0x020B1428;
    FIELD(uint32_t, object, 0x04) = 0;
    FIELD(uint32_t, object, 0x08) = 0;
    FIELD(uint32_t, object, 0x0C) = 0;
    FIELD(uint32_t, object, 0x10) = 0;
}
void ffc_arm9_0207cc74(void) {
    ABS(uint32_t, 0x021407D4) = 0xFFFFFFFD;
    ABS(uint32_t, 0x021407D8) = 0;
    ABS(uint32_t, 0x021407E4) = 0;
    ABS(uint32_t, 0x021407E0) = 0;
    ABS(uint32_t, 0x021407DC) = 0;
}
void ffc_arm9_0205fdb0(void *destination, const void *source) {
    uint32_t nibble = FIELD(uint32_t, (void *)source, 0x18) & 0xF;
    FIELD(uint32_t, destination, 4) = (FIELD(uint32_t, destination, 4) & 0xFFFF0FFFU) | (nibble << 12);
}
uint64_t ffc_arm9_02096bac(uint64_t value) { return value & 0x7FFFFFFFFFFFFFFFULL; }
void ffc_arm9_0207ebd0(void *destination, const void *source) {
    FIELD(uint32_t, destination, 0) = ABS(uint32_t, 0x021412E4);
    FIELD(uint32_t, destination, 4) = FIELD(uint32_t, (void *)source, 0x18);
}
void ffc_arm9_02059db8(void *object, uint32_t value_34, uint32_t bit) {
    FIELD(uint32_t, object, 0x10) = (FIELD(uint32_t, object, 0x10) & 0xFFFFDFFFU) | ((bit & 1) << 13);
    FIELD(uint32_t, object, 0x34) = value_34;
}
void ffc_arm9_02086aa4(int32_t bit_index) {
    uintptr_t address = 0x02FFFFB0;
    int32_t shift = bit_index - 0x40;
    if (bit_index >= 0x60) {
        address += 4;
        shift = bit_index - 0x60;
    }
    uint8_t amount = (uint8_t)shift;
    uint32_t mask = amount < 32 ? 0x80000000U >> amount : 0;
    *(uint32_t *)address |= mask;
}
void ffc_arm9_02035d34(void *object) {
    uint32_t old = FIELD(uint32_t, object, 4);
    FIELD(uint32_t, object, 0) = 0x020AE644;
    FIELD(uint32_t, object, 4) = old & 0xFFFFFE00U;
}
uint32_t ffc_arm9_02037748(void) { return ABS(uint32_t, 0x021395B4) != 0; }
void ffc_arm9_02087620(void *object) {
    FIELD(uint32_t, object, 4) = 0;
    FIELD(uint32_t, object, 0) = 0;
    FIELD(uint32_t, object, 8) = 0;
    FIELD(uint32_t, object, 0x0C) = 0;
}
uint64_t ffc_arm9_02096aa8(uint64_t magnitude, uint64_t sign_source) {
    return (magnitude & 0x7FFFFFFFFFFFFFFFULL) | (sign_source & 0x8000000000000000ULL);
}
uintptr_t ffc_arm9_020870bc(void) {
    uintptr_t node = ABS(uint32_t, 0x02141518);
    while (node != 0 && ABS(uint32_t, node + 0x64) != 1) node = ABS(uint32_t, node + 0x68);
    return node;
}
uint32_t ffc_arm9_0207dc40(uint32_t value) {
    uint32_t bit = value - 9;
    return bit <= 26 && (0x0400030FU & (1U << bit)) != 0;
}
