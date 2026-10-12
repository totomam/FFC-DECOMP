#include "ffc/types.h"

uint32_t func_0209d11c(uint8_t *p) {
    uint32_t r2 = *(uint32_t *)(p + 0x60);
    uint32_t r3 = 0x10;
    uint32_t base;
    uint32_t cur;
    int i;

    if (p[0x6a] == 0) {
        r3 = 0;
    }
    base = *(uint32_t *)(p + 0x18) + r2;
    cur = base - r3;
    for (i = 15; i >= 0; i--) {
        if (*(uint16_t *)(p + 0x68) & (1u << i)) {
            cur -= 4;
            *(uint32_t *)(p + 0x1c + i * 4) = *(uint32_t *)cur;
        }
    }
    *(uint32_t *)(p + 0x14) = *(uint32_t *)(p + 0x18) + r2;
    return *(uint32_t *)(p + 0x54);
}
