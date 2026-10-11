#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} V;

typedef struct {
    int32_t pad[8];
    int32_t x0;
    int32_t y0;
    int32_t x1;
    int32_t y1;
} S;

void func_02065d88(S *p, V v)
{
    V t = v;
    p->x1 += t.x - p->x0;
    p->y1 += t.y - p->y0;
    p->x0 = t.x;
    p->y0 = t.y;
}
