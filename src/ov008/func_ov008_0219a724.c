#include "ffc/types.h"

extern uint32_t data_ov008_021a77c0[];

typedef struct {
    uint32_t x, y;
} Pair;

void func_ov008_0219a724(Pair *out)
{
    Pair p[2];
    p[0].x = data_ov008_021a77c0[5];
    p[0].y = data_ov008_021a77c0[6];
    p[1].x = data_ov008_021a77c0[23];
    p[1].y = data_ov008_021a77c0[24];
    out[0] = p[1];
    out[1] = p[0];
}
