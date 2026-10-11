#include "ffc/types.h"

extern uint32_t data_ov000_0216e26c[];

uint32_t func_ov000_02152ae4(uint32_t x) {
    if (x & 1) return data_ov000_0216e26c[3];
    if (x & 2) return data_ov000_0216e26c[0];
    if (x & 4) return data_ov000_0216e26c[1];
    if (x & 8) return data_ov000_0216e26c[2];
    if (x & 0x10) return data_ov000_0216e26c[4];
    return 0;
}
