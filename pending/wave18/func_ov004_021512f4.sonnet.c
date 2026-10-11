#include "ffc/types.h"

extern int32_t data_ov004_02159448[];

typedef struct {
    int32_t x;
    int32_t y;
} Vec2;

void func_ov004_021512f4(int32_t *out, Vec2 v, ...) {
    int32_t x = v.x;
    int32_t y = v.y;
    int32_t a = x - data_ov004_02159448[0x44 / 4];
    int32_t b = y - data_ov004_02159448[0x48 / 4];
    out[0] = a * 4 - 2;
    out[1] = b * 8 - 4;
}
