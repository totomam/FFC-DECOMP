/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct { int32_t x, y, z; } Vec3;

int32_t func_02081658(Vec3 *a, Vec3 *b) {
    int64_t s;
    int32_t dx;
    volatile uint16_t *ctrl = (volatile uint16_t *)0x040002b0;
    volatile uint32_t *q = (volatile uint32_t *)0x040002b0;
    uint64_t v;

    s = (int64_t)(a->y - b->y) * (a->y - b->y);
    dx = a->x - b->x;
    s += (int64_t)dx * dx;
    s += (int64_t)(a->z - b->z) * (a->z - b->z);
    v = (uint64_t)s << 2;

    ctrl[0] = 1;
    q[2] = (uint32_t)v;
    q[3] = (uint32_t)(v >> 32);
    while (ctrl[0] & 0x8000);
    return ((int32_t)q[1] + 1) >> 1;
}
