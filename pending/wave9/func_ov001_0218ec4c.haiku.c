#include "ffc/types.h"

void func_ov001_0218ec4c(uint8_t *p) {
    uint32_t v = 0;
    if (*(uint32_t *)(p + 0x8c) == 1) {
        v = 1;
    }
    **(uint32_t **)(p + 0x84) = v;
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
