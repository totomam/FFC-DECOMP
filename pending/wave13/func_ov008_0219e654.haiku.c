#include "ffc/types.h"

extern uint32_t data_ov008_021a7f80[];

typedef struct {
    uint32_t x, y;
} Pair;

void func_ov008_0219e654(Pair *out)
{
    Pair p[2];
    p[0].x = data_ov008_021a7f80[28];
    p[0].y = data_ov008_021a7f80[29];
    p[1].x = data_ov008_021a7f80[26];
    p[1].y = data_ov008_021a7f80[27];
    out[0] = p[1];
    out[1] = p[0];
}
