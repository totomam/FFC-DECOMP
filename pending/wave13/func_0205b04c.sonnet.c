#include "ffc/types.h"
typedef struct { uint32_t a, b, c; } V;
typedef struct { uint32_t k; V v; } W;
typedef struct { uint32_t x, y; W w; } S;
void func_0205b04c(S *p)
{
    p->x = 0; p->y = 0;
    W *q = &p->w;
    q->k = 0;
    q->v.a = 0; q->v.b = 0; q->v.c = 0;
}
