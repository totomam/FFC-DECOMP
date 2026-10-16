#include "ffc/types.h"
void func_ov004_02146e30(uint8_t *p) {
    uint32_t *q;
    if (*(uint32_t *)(p + 0xa4) == 1) {
        q = *(uint32_t **)(*(uint8_t **)(p + 0x88) + 0xa0); q[4] = 3;
    } else {
        q = *(uint32_t **)(*(uint8_t **)(p + 0x88) + 0xa0); q[4] = 4;
    }
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
