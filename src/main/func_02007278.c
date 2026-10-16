#include "ffc/types.h"
typedef struct { int32_t w[5]; } E;
void func_02007278(E *p, int32_t i)
{
    if (i <= 1) return;
    if (i >= 18) return;
    p[i].w[5] = 0;
    p[i].w[6] = 0;
    p[i].w[7] = 0;
    p[i].w[9] = -1;
    p[i].w[8] = -1;
}
