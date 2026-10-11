#include "ffc/types.h"

void func_ov009_0219a0e0(uint8_t *p) {
    uint8_t *q = *(uint8_t **)(p + 0x14);
    if (*(q + 0xa1) == 0) {
        uint32_t v = *(uint32_t *)(p + 0xc);
        *(uint32_t *)(p + 0xc) = (v & ~0xffu) | 2u;
    }
}
