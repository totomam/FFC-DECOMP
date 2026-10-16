#include "ffc/types.h"
typedef struct { uint32_t x, y; } P;
typedef struct { P a, b; } R;
void func_ov003_02147654(R *o, R *p, P d) {
    R t = *p;
    t.a.x += d.x;
    t.a.y += d.y;
    t.b.x += d.x;
    t.b.y += d.y;
    *o = t;
}
