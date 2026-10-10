#include "ffc/types.h"

extern uint32_t data_020b03cc;
extern uint32_t data_020b03d0;

void func_0204fb04(uint32_t *out, uint32_t idx) {
    uint32_t off = idx << 3;
    out[0] = *(uint32_t *)((uint8_t *)&data_020b03cc + off);
    out[1] = *(uint32_t *)((uint8_t *)&data_020b03d0 + off);
}
