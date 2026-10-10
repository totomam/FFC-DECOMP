#include "ffc/types.h"

void func_02072550(int32_t a, int32_t b, uint8_t *c) {
    if (a == 0) {
        *(int32_t *)(c + 0x2c) = 3;
    } else {
        *(int32_t *)(c + 0x2c) = 4;
    }
}
