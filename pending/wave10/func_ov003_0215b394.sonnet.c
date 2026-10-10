#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
extern int func_0203e894(int, S, int, int, int, int, int, uint8_t);
extern S data_ov003_0217a1f0;

int func_ov003_0215b394(int a0, int a1, int a2, int a3, int a4, int a5, ...)
{
    int *p = &a3;
    return func_0203e894(a0, data_ov003_0217a1f0, a1, a2, p[0], p[1], p[2], *((uint8_t *)&a4 + 8));
}
