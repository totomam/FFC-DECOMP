#include "ffc/types.h"

void func_ov002_021ada00(uint8_t *p, uint32_t a, uint32_t b) {
    uint32_t z = 0;
    *(uint32_t *)(p + 0x80) = z;
    if (a) {
        uint32_t v = z | 1;
        *(uint32_t *)(p + 0x80) = v;
    }
    if (b) {
        uint32_t w = *(uint32_t *)(p + 0x80);
        *(uint32_t *)(p + 0x80) = 2 | w;
    }
}
