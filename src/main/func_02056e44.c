#include "ffc/types.h"

void func_02056e44(uint8_t *p) {
    uint32_t *q = *(uint32_t **)(p + 0x14);
    q[3] &= ~0xffu;
}
