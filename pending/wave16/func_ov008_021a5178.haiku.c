#include "ffc/types.h"

extern uint32_t data_ov008_021a894c[];

typedef struct {
    uint32_t x, y;
} Pair;

void func_ov008_021a5178(Pair *out)
{
    Pair p[2];
    p[0].x = data_ov008_021a894c[10];
    p[0].y = data_ov008_021a894c[11];
    p[1].x = data_ov008_021a894c[8];
    p[1].y = data_ov008_021a894c[9];
    out[0] = p[1];
    out[1] = p[0];
}
