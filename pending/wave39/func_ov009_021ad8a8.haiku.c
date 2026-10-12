#include "ffc/types.h"

extern void sym_02196145(uint32_t a, uint32_t b);

void func_ov009_021ad8a8(void *p0) {
    uint8_t *p = (uint8_t *)p0;
    uint8_t flag = p[0x27b];

    if (flag == 0) {
        if (p[0x28c] > p[0x28a]) {
            p[0x28c] = p[0x28a];
        }
        p[0x27d] = p[0x28c];
    } else if (flag == 1) {
        if (p[0x28d] > p[0x28b]) {
            p[0x28d] = p[0x28b];
        }
        p[0x27d] = p[0x28d];
    }

    sym_02196145(*(uint32_t *)(p + 0x16c), (uint8_t)(p[0x27d] + 1));
}
