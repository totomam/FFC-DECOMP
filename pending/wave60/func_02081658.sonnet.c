/* cflags: -nothumb */
#include "ffc/types.h"
int32_t func_02081658(int32_t *a, int32_t *b) {
    int32_t dx = a[0] - b[0];
    int32_t dy = a[1] - b[1];
    int32_t dz = a[2] - b[2];
    int64_t s = (int64_t)dx*dx; s += (int64_t)dy*dy; s += (int64_t)dz*dz;
    *(volatile uint16_t *)0x040002b0 = 1;
    *(volatile int64_t *)0x040002b8 = s << 2;
    while (*(volatile uint16_t *)0x040002b0 & 0x8000) {}
    return (int32_t)(*(volatile uint32_t *)0x040002b4 + 1) >> 1;
}
