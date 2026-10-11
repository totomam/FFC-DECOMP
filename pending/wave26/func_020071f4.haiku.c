#include "ffc/types.h"

int func_020071f4(uint8_t *base) {
    int i;
    for (i = 2; i < 0x12; i++) {
        if (*(uint32_t *)(base + i * 0x14 + 0x1c) == 0) {
            return i;
        }
    }
    return -1;
}
