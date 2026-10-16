/* cflags: -nothumb -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { int16_t a, b; } P;
typedef struct { P p, q; int32_t x, y; } R;
void func_02081aa0(R *o, int32_t *m, int32_t x, int32_t y, int32_t px, int32_t py)
{
    int32_t a = m[0], b = m[1], c = m[2], d = m[3];
    int32_t dy = py - y;
    int32_t dx = px - x;
    int32_t t0 = a * dx + b * dy;
    int32_t t1 = c * dx + d * dy;
    P p, q;
    p.a = (a << 12) >> 16;
    p.b = (b << 12) >> 16;
    q.a = (c << 12) >> 16;
    q.b = (d << 12) >> 16;
    o->p = p;
    o->q = q;
    o->x = (t0 + (x << 12)) >> 4;
    o->y = (t1 + (y << 12)) >> 4;
}
