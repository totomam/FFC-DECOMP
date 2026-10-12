/* cflags: -nothumb */
#include "ffc/types.h"

void func_02081aa0(uint32_t *out, const int32_t *m, int32_t x0, int32_t y0, int32_t x1, int32_t y1)
{
    int32_t dy = y1 - y0;
    int32_t dx = x1 - x0;
    int32_t b = m[1], d = m[3], a = m[0], c = m[2];
    int32_t nx = a * dx + b * dy;
    int32_t ny = c * dx + d * dy;
    int16_t a16 = (a << 12) >> 16;
    uint16_t b16 = (b << 12) >> 16;
    int16_t c16 = (c << 12) >> 16;
    uint16_t d16 = (d << 12) >> 16;
    out[0] = (b16 << 16) | (uint16_t)a16;
    out[1] = (d16 << 16) | (uint16_t)c16;
    out[2] = (nx + (x0 << 12)) >> 4;
    out[3] = (ny + (y0 << 12)) >> 4;
}
