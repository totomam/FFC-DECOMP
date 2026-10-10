#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

void func_ov003_02147550(Vec2 *out, const Vec2 *a, const Vec2 *b)
{
    Vec2 tmp;
    tmp.y = a->y - b->y;
    tmp.x = a->x - b->x;
    out->x = tmp.x;
    out->y = tmp.y;
}
