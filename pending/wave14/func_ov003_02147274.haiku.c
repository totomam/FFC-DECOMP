#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

void func_ov003_02147274(Vec2 *out, const Vec2 *a, const Vec2 *b)
{
    Vec2 tmp[4];
    int32_t y = a->y + b->y;
    int32_t x = a->x + b->x;
    out->x = x;
    out->y = y;
}
