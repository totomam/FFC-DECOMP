#include "ffc/types.h"

extern int32_t data_ov004_02159448[];

typedef struct {
    int32_t x;
    int32_t y;
} Pt;

void func_ov004_021512c4(int32_t *out, Pt p, ...) {
    int32_t *d = data_ov004_02159448;
    int32_t ox = d[13];
    int32_t oy = d[14];
    int32_t dy = p.y - oy;
    int32_t dx = p.x - ox;
    out[0] = dx * 8 + ((dy & 1) * 8) / 2;
    out[1] = dy * 8;
}
