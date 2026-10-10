#include "ffc/types.h"

extern uint32_t data_02141510[];

void func_ov000_0214785c(uint32_t *p) {
    uint32_t *q = (uint32_t *)((uint8_t *)data_02141510[1] + 0xa4);
    *(uint32_t *)((uint8_t *)p + 0xa4) = *q;
}
