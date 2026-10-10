#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

void func_ov004_0215131c(Vec2 *out, Vec2 v) {
    int32_t a = v.x;
    int32_t b = v.y;
    out->x = a >> 12;
    out->y = b >> 12;
}
