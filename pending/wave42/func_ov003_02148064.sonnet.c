#include "ffc/types.h"

typedef struct { int32_t x, y, s; } P;
typedef struct { int32_t x, y, w, h; } Q;
typedef struct { int32_t lo, hi; } Range;
typedef struct { int32_t pad[79]; Range r; } Frame;

void func_ov003_02148064(int32_t *out, Q *q, P *p) {
    Frame fr; volatile Range *rp = &fr.r;
    int32_t best = 0x7fffffff;
    int32_t d, f;
    int32_t y = p->y;

    rp->lo = p->x;
    rp->hi = p->y;

    d = y + p->s - q->y;
    f = 0;
    if (d > 0 && d < best) f = 1;
    if (f) { best = d; rp->lo = p->x; rp->hi = q->y - p->s; }

    d = q->h - (y - p->s);
    f = 0;
    if (d > 0 && d < best) f = 1;
    if (f) { best = d; rp->lo = p->x; rp->hi = q->h + p->s; }

    d = p->x + p->s - q->x;
    f = 0;
    if (d > 0 && d < best) f = 1;
    if (f) { best = d; rp->lo = q->x - p->s; rp->hi = y; }

    d = q->w - (p->x - p->s);
    f = 0;
    if (d > 0 && d < best) f = 1;
    if (f) { best = d; rp->lo = q->w + p->s; rp->hi = y; }

    out[0] = rp->lo - p->x;
    out[1] = rp->hi - p->y;
}
