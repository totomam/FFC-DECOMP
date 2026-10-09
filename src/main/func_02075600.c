#include "ffc/types.h"

void func_02075600(uint8_t *p) {
    uint32_t v = *(uint32_t *)(p + 0xc);
    *(uint32_t *)(p + 0xc) = (v & ~0xffu) | 2u;
}
