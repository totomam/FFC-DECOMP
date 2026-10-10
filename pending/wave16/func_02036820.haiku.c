#include "ffc/types.h"

uint8_t func_02036820(uint8_t *base, uint32_t idx) {
    uint8_t *e = base + idx * 4;
    if (e[0x34]) {
        return e[0x36];
    }
    return 0;
}
