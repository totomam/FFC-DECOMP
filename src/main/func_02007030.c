#include "ffc/types.h"

void func_02007030(uint8_t *p, int32_t v) {
    int32_t m = -1;
    if (v < m) {
        v = m;
    } else if (v > 127) {
        v = m;
    }
    *(int16_t *)(p + 0xe) = (int16_t)v;
    *(p + 0x13) = 1;
}
