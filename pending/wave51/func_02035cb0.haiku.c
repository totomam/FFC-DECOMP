#include "ffc/types.h"

int func_02035cb0(uint32_t *p0, uint32_t *p1) {
    uint32_t y = *p1;
    uint32_t x = *p0;
    uint32_t fy = y << 27;
    fy >>= 27;
    uint32_t fx = x << 27;
    fx >>= 27;
    if (fx < fy) return 1;
    if (fy < fx) return 0;
    fy = (y << 18) >> 23;
    fx = (x << 18) >> 23;
    if (fx < fy) return 1;
    if (fy < fx) return 0;
    fy = (y << 9) >> 23;
    fx = (x << 9) >> 23;
    if (fx < fy) return 1;
    if (fy < fx) return 0;
    fy = y >> 23;
    fx = x >> 23;
    if (fx < fy) return 1;
    return 0;
}
