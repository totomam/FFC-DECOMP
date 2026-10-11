#include "ffc/types.h"

void func_02007278(uint8_t *base, int32_t idx) {
    if (idx > 1 && idx < 0x12) {
        int32_t *p = (int32_t *)(base + idx * 0x14);
        p[5] = 0;
        p[6] = 0;
        p[7] = 0;
        p[8] = -1;
        p[9] = -1;
    }
}
