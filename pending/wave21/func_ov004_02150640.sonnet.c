#include "ffc/types.h"
typedef struct { int32_t a, b, c; } S;
void func_ov004_02150640(S *out, S p)
{
    int32_t x = p.a, y = p.b;
    int32_t r = (x + y + 1) % 2;
    out->a = (x - 1) / 2;
    out->b = y - r;
    out->c = r;
}
