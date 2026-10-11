#include "ffc/types.h"

void func_ov009_0219bc34(uint8_t *p, int32_t x, ...) {
    volatile int32_t buf[6];
    int32_t r = 1;
    buf[0] = 0;
    if (x >= 0) {
        if (x < 0x64000) {
            r = 0;
        }
    }
    if (r == 0) {
        *(int32_t *)(p + 0x200) = x;
    }
}
