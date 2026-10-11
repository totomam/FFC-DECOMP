#include "ffc/types.h"

void func_ov003_02154f5c(uint8_t *base) {
    uint32_t i;
    for (i = 0; i < 10; i++) {
        uint32_t *q = (uint32_t *)(base + i * 0x14);
        q[0x45] = 0;
        q[0x46] = 0;
        q[0x47] = 0;
        q[0x48] = 0;
    }
    ((uint32_t *)base)[0x76] = 0;
}
