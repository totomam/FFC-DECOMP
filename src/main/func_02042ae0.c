#include "ffc/types.h"

void func_02042ae0(uint8_t *a) {
    uint8_t *p;
    uint32_t *w;

    p = *(uint8_t **)(a + 0x8c);
    w = (uint32_t *)(p + 0x14);
    w[3] = (w[3] & ~0xffu) | 1u;

    p = *(uint8_t **)(a + 0x8c);
    w = (uint32_t *)(p + 0x48);
    w[3] = (w[3] & ~0xffu) | 1u;

    p = *(uint8_t **)(a + 0x154);
    w = (uint32_t *)p;
    w[3] = (w[3] & ~0xffu) | 1u;
}
