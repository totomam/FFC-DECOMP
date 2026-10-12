#include "ffc/types.h"

extern void *func_02015ba4(void *unused, uint32_t index);
extern void *data_020b8e44;

uint32_t func_0203c474(uint32_t a, uint32_t b, uint32_t c) {
    uint32_t r4;
    if (a == 0 || b == 0 || c == 0) {
        return 0;
    }
    r4 = *(uint32_t *)((uint8_t *)func_02015ba4(data_020b8e44, a) + 0x5c);
    r4 &= *(uint32_t *)((uint8_t *)func_02015ba4(data_020b8e44, b) + 0x5c);
    if (*(uint32_t *)((uint8_t *)func_02015ba4(data_020b8e44, c) + 0x5c) & r4) {
        return 1;
    }
    return 0;
}
