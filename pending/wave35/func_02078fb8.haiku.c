#include "ffc/types.h"

void func_02078fb8(uint16_t *dst, int w, int h, int stride, int v0, uint32_t hi) {
    int i;
    int j;
    uint16_t top = (uint16_t)((hi << 28) >> 16);
    for (i = 0; i < h; i++) {
        uint16_t *q = dst;
        for (j = 0; j < w; j++) {
            *q = (uint16_t)(top | v0);
            v0++;
            q++;
        }
        dst += stride;
    }
}
