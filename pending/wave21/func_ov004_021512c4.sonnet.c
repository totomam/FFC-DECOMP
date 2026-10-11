#include "ffc/types.h"

extern int32_t data_ov004_02159448[];

typedef struct {
    int32_t x;
    int32_t y;
} Pt;

void func_ov004_021512c4(int32_t *out, Pt p, ...) {
    int32_t *d = data_ov004_02159448;
    int32_t dy = p.y - d[14];
    int32_t dx = p.x - d[13];
    int32_t t = (dy & 1) << 3;
    out[0] = (dx << 3) + t / 2;
    out[1] = dy << 3;
}
