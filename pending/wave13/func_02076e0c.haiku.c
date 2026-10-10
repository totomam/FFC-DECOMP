#include "ffc/types.h"

void func_02076e0c(uint8_t *p, int32_t v) {
    if (v >= 0 && v <= 4) {
        *(int32_t *)(p + 0x80) = v;
    }
}
