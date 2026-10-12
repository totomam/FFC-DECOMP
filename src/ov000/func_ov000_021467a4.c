#include "ffc/types.h"

static inline uint16_t sw(uint16_t v) { return (uint16_t)((v >> 8) | (v << 8)); }

int func_ov000_021467a4(uint8_t *p, uint8_t *a, uint8_t *b) {
    int r0 = 0, r1 = 0, r2 = 0, ok = 0;
    if (b[8] != 10 && b[8] != 11) ok = 1;
    if (ok) {
        if (*(uint16_t *)(b + 0xa) == sw(*(uint16_t *)(a + 2))) r2 = 1;
    }
    if (r2) {
        if (*(uint16_t *)(b + 0x18) == sw(*(uint16_t *)a)) r1 = 1;
    }
    if (r1) {
        uint32_t v = ((uint32_t)sw(*(uint16_t *)(p + 0xc)) << 16) | sw(*(uint16_t *)(p + 0xe));
        if (*(uint32_t *)(b + 0x1c) == v) r0 = 1;
    }
    return r0;
}
