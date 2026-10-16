#include "ffc/types.h"
typedef struct { int32_t x, y; } V;
void func_ov003_02147550(V *o, V *a, V *b) {
    V t[4];
    V *p = t;
    V d;
    d.y = a->y - b->y;
    d.x = a->x - b->x;
    p->x = d.x;
    o->x = d.x;
    o->y = d.y;
}
