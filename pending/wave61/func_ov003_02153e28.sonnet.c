#include "ffc/types.h"
extern int32_t func_02081210(int32_t v, int32_t d);
typedef struct { int32_t x, y; } P;
typedef struct { int32_t x0, y0, w, h; } R;
typedef struct { P fp; P ip; R r; } S;
static inline void toint(P fp, P *d) { d->x = fp.x >> 12; d->y = fp.y >> 12; }
static inline int32_t inner(P ip, const R *r)
{
    if (r->x0 > ip.x || ip.x >= r->w || r->y0 > ip.y || ip.y >= r->h) return -1;
    return ip.x + ip.y * r->w;
}
int32_t func_ov003_02153e28(int32_t *a, int32_t *b)
{
    S s;
    int32_t y = func_02081210(b[1], 0x2000);
    int32_t x = func_02081210(b[0], 0x2000);
    s.fp.x = x; s.fp.y = y;
    toint(s.fp, &s.ip);
    s.r.x0 = 0; s.r.y0 = 0; s.r.w = a[1]; s.r.h = a[2];
    return inner(s.ip, &s.r);
}
