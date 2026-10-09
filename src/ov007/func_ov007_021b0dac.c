#include "ffc/types.h"

void func_ov007_021b0dac(uint8_t *p) {
    uint32_t v = *(uint32_t *)(p + 0xc);
    *(uint32_t *)(p + 0xc) = (v & ~0xffu) | 2u;
}
