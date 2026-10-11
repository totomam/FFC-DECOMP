#include "ffc/types.h"

extern void func_02084ca4(uint32_t a, uint32_t b);

void func_ov013_021bed2c(uint8_t *p) {
    uint8_t *r5 = *(uint8_t **)(p + 0x1c);
    if (*(uint16_t *)(p + 2) != 0) {
        *(uint8_t *)(r5 + 0x13c) = 1;
        return;
    }
    if (*(uint16_t *)(p + 4) != 0x15) {
        return;
    }
    uint8_t *base = *(uint8_t **)(r5 + 0x12c);
    uint32_t idx = *(uint32_t *)(r5 + 0x138);
    uint32_t *e = (uint32_t *)(base + (idx << 3));
    if (*(uint16_t *)(p + 0x10) != e[1]) {
        *(uint8_t *)(r5 + 0x13c) = 1;
        return;
    }
    func_02084ca4(*(uint32_t *)(p + 0xc), e[0]);
    *(uint32_t *)(r5 + 0x138) = *(uint32_t *)(r5 + 0x138) + 1;
}
