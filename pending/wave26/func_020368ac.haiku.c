#include "ffc/types.h"

int32_t func_020368ac(uint8_t *p) {
    uint32_t i;
    for (i = 0; i < 5; i++) {
        if (p[0x34 + i * 4] == 0) {
            return i;
        }
    }
    return -1;
}
