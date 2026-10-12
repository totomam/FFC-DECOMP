/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct { int32_t x, y, z; } Vec3;

int32_t func_02081658(Vec3 *a, Vec3 *b) {
    int32_t dx = a->x - b->x;
    int32_t dy = a->y - b->y;
    int32_t dz = a->z - b->z;
    int64_t s = (int64_t)dx * dx;
    s += (int64_t)dy * dy;
    s += (int64_t)dz * dz;
    s <<= 2;
    volatile uint16_t *ctrl = (volatile uint16_t *)0x040002b0;
    volatile uint32_t *d = (volatile uint32_t *)0x040002b0;
    ctrl[0] = 1;
    d[2] = (uint32_t)s;
    d[3] = (uint32_t)(s >> 32);
    while (ctrl[0] & 0x8000);
    return ((int32_t)*(volatile uint32_t *)0x040002b4 + 1) >> 1;
}
