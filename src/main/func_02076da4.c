#include "ffc/types.h"

void func_02076da4(uint8_t *p) {
    uint32_t *q = *(uint32_t **)(p + 0x90);
    *q = 0;
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
