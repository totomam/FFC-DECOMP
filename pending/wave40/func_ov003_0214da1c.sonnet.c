#include "ffc/types.h"

uint8_t *func_ov003_0214da1c(uint8_t *p, uint8_t *q, uint32_t key) {
    uint32_t val;
    uint32_t n;
    uint32_t i;
    uint8_t *base;
    uint32_t *tab;

    val = 1;
    if (key == 0x171717) {
        key = 0x1f1f1f;
    }
    n = *(uint32_t *)(q + 8);
    base = q + *(uint32_t *)(q + 0xc);
    for (i = 0; i < n; i++) {
        if (key == *(uint32_t *)(base + (i << 3) + 4)) {
            val = base[i << 3];
        }
    }
    n = *(uint32_t *)(p + 8);
    tab = (uint32_t *)(p + *(uint32_t *)(p + 0xc));
    for (i = 0; i < n; i++) {
        if (val == *(uint16_t *)(p + tab[i] + 2)) {
            return p + tab[i];
        }
    }
    return 0;
}
