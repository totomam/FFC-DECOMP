#include "ffc/leaf_accessors.h"
#define FIELD(type, object, offset) (*(type *)((uint8_t *)(object) + (offset)))
#define CONST_FIELD(type, object, offset) (*(const type *)((const uint8_t *)(object) + (offset)))
typedef struct {
    uint32_t word_00;
    uint8_t padding_04[4];
    uint32_t word_08;
    uint8_t padding_0c[4];
    uint32_t word_10;
    uint8_t padding_14[4];
    uint32_t word_18;
    uint8_t padding_1c[4];
    uint32_t word_20;
    uint8_t padding_24[4];
    uint32_t word_28;
    uint32_t word_2c;
    uint16_t halfwords_30[17];
    uint8_t padding_52[2];
    uint32_t word_54;
    uint32_t word_58;
    uint32_t word_5c;
} FfcSparseCopy60;

uint32_t func_0207f8b0(uint32_t unused, const void *range, uint32_t *difference) {
    const void *nested = (const void *)(uintptr_t)CONST_FIELD(uint32_t, range, 4);
    (void)unused;
    *difference = CONST_FIELD(uint32_t, nested, 12) - CONST_FIELD(uint32_t, nested, 4);
    return 0;
}
