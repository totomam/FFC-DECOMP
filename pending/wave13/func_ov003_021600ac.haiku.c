#include "ffc/types.h"

void func_ov003_021600ac(uint32_t *p) {
    *(uint8_t *)((uint8_t *)p + 0x2c) = 1;
    p[3] = (p[3] & ~0xffu) | 2;
}
