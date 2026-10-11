#include "ffc/types.h"

void func_ov000_02146c4c(uint8_t *base, uint32_t idx) {
    int i;
    uint32_t max;
    max = 0;
    for (i = 0; i < 3; i++) {
        uint8_t *e = base + i * 12;
        if (*(uint32_t *)(e + 0x70) != 0) {
            uint32_t v = *(uint32_t *)(e + 0x78);
            if (max < v) {
                max = v;
            }
        }
    }
    *(uint32_t *)(base + idx * 12 + 0x78) = max + 1;
}
