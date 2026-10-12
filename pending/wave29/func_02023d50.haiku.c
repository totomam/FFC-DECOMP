#include "ffc/types.h"

void func_02023d50(uint8_t *a, uint8_t *b) {
    void **vt;
    *(uint32_t *)(a + 0xec) = *(uint32_t *)(b + 0xec);
    *(uint32_t *)(a + 0xd4) = *(uint32_t *)(b + 0xd4);
    *(uint32_t *)(a + 0xd8) = *(uint32_t *)(b + 0xd8);
    vt = *(void ***)a;
    ((void (*)(void *, uint32_t, uint32_t, uint32_t))vt[3])(a, *(uint32_t *)(b + 0xe8), *(uint32_t *)(b + 0xe4), 1);
    vt = *(void ***)a;
    ((void (*)(void *, uint32_t))vt[5])(a, *(uint32_t *)(b + 0xf0));
}
