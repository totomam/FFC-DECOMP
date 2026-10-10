#include "ffc/types.h"

void func_ov003_0214b390(uint8_t *base, uint32_t off, uint8_t a, uint8_t b) {
    uint8_t *p = base + off;
    p[0x3f4] = a;
    p[0x3f6] = b;
}
