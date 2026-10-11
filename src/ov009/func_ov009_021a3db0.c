#include "ffc/types.h"

void func_ov009_021a3db0(void *p) {
    uint8_t *b = (uint8_t *)p;
    uint8_t *s = *(uint8_t **)(b + 0x14);
    if (*(uint32_t *)(s + 0x9c) == *(uint32_t *)(s + 0xa0)) {
        uint32_t v = *(uint32_t *)(b + 0xc);
        *(uint32_t *)(b + 0xc) = (v & ~0xffu) | 2;
    }
}
