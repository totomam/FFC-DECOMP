#include "ffc/types.h"

extern uint32_t func_ov006_021b3888(uint32_t a, void *b, uint32_t c);
extern uint32_t data_ov006_021bc814[];

void func_ov006_021b3de8(uint32_t idx, uint32_t x) {
    uint32_t tmp;
    data_ov006_021bc814[idx] = func_ov006_021b3888(x, &tmp, 4);
}
