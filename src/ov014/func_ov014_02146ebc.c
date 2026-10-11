#include "ffc/types.h"

extern uint32_t data_ov014_02155b20;

void func_ov014_02146ebc(void) {
    uint16_t *p = (uint16_t *)0x400000c;
    if (data_ov014_02155b20 == 0) {
        p[0] = (p[0] & ~3) | 3;
        p[1] = (p[1] & ~3) | 2;
    } else {
        p[0] = (p[0] & ~3) | 2;
        p[1] = (p[1] & ~3) | 3;
    }
    data_ov014_02155b20 ^= 1;
}
