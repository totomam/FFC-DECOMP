#include "ffc/types.h"

extern uint32_t data_ov008_021a7a54[];

typedef struct {
    uint32_t x, y;
} Pair;

void func_ov008_0219bbfc(Pair *out)
{
    Pair p[2];
    p[0].x = data_ov008_021a7a54[17];
    p[0].y = data_ov008_021a7a54[18];
    p[1].x = data_ov008_021a7a54[11];
    p[1].y = data_ov008_021a7a54[12];
    out[0] = p[1];
    out[1] = p[0];
}
