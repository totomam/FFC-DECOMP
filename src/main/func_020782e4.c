#include "ffc/types.h"

void *func_020782e4(uint8_t *base, uint32_t key) {
    uint8_t *p;
    uint16_t i;
    uint16_t n;
    p = base + *(uint16_t *)(base + 0xc);
    n = *(uint16_t *)(base + 0xe);
    for (i = 0; i < n; i++) {
        if (*(uint32_t *)p == key) {
            return p;
        }
        p = p + *(uint32_t *)(p + 4);
    }
    return 0;
}
