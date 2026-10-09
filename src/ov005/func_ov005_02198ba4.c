#include "ffc/types.h"

extern uint32_t data_ov005_021993f4[];

typedef struct {
    uint32_t x, y;
} Pair;

void func_ov005_02198ba4(Pair *out)
{
    Pair p[2];
    p[0].x = data_ov005_021993f4[6];
    p[0].y = data_ov005_021993f4[7];
    p[1].x = data_ov005_021993f4[14];
    p[1].y = data_ov005_021993f4[15];
    out[0] = p[1];
    out[1] = p[0];
}
