#include "ffc/types.h"

void func_02077a88(void *p, void *q) {
    uint8_t *pb = (uint8_t *)p;
    uint32_t off = *(uint16_t *)(pb + 10);
    *(uint32_t *)((uint8_t *)q + off + 4) = 0;
    *(uint32_t *)((uint8_t *)q + off) = 0;
    *(void **)p = q;
    *(void **)(pb + 4) = q;
    *(uint16_t *)(pb + 8) = (uint16_t)(*(uint16_t *)(pb + 8) + 1);
}
