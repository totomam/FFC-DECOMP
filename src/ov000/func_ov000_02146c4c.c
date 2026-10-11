#include "ffc/types.h"

void func_ov000_02146c4c(uint8_t *base, uint32_t idx) {
    int i;
    uint32_t max = 0;
    for (i = 0; i < 3 && *(uint32_t *)(base + i * 12 + 0x70) != 0; i++) {
        uint8_t *e = base + i * 12;
        if (max < *(uint32_t *)(e + 0x78)) max = *(uint32_t *)(e + 0x78);
    }
    *(uint32_t *)(base + idx * 12 + 0x78) = max + 1;
}
