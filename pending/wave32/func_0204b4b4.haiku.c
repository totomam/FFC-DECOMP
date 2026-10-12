#include "ffc/types.h"

void func_0204b4b4(uint32_t *p, int32_t x, uint32_t *out1, int32_t *out2) {
    if (x < 0x400) {
        *out1 = 0;
        *out2 = x;
        return;
    }
    int32_t n = (x - 0x400) >> 9;
    uint32_t k = n - 1;
    uint32_t v = *(uint32_t *)((uint8_t *)p + 0x34);
    if (n != 0) {
        do {
            v = *(uint32_t *)v;
        } while (k-- != 0);
    }
    *out1 = v;
    *out2 = (x - 0x400) & 0x1ff;
}
