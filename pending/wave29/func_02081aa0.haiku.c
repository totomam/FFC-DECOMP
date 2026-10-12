/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c;
    int32_t d;
} Mtx;

void func_02081aa0(uint32_t *out, const Mtx *m, int32_t x0, int32_t y0, int32_t x1, int32_t y1)
{
    int32_t dy = y1 - y0;
    int32_t bdy = m->b * dy;
    int32_t ddy = m->d * dy;
    int32_t dx = x1 - x0;
    int32_t nx = m->a * dx + bdy;
    int32_t ny = m->c * dx + ddy;

    out[0] = ((uint32_t)(uint16_t)((m->b << 12) >> 16) << 16) | (uint16_t)((m->a << 12) >> 16);
    out[1] = ((uint32_t)(uint16_t)((m->d << 12) >> 16) << 16) | (uint16_t)((m->c << 12) >> 16);
    out[2] = (uint32_t)((nx + (x0 << 12)) >> 4);
    out[3] = (uint32_t)((ny + (y0 << 12)) >> 4);
}
