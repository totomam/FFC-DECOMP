#include "ffc/types.h"

extern int32_t data_ov004_02159448[];

typedef struct {
    int32_t x;
    int32_t y;
} Pos;

void func_ov004_021512c4(int32_t *out, Pos p, int32_t z) {
    int32_t dx = p.x - data_ov004_02159448[13];
    int32_t dy = p.y - data_ov004_02159448[14];
    out[0] = dx * 8 + ((dy & 1) * 8) / 2;
    out[1] = dy * 8;
}
