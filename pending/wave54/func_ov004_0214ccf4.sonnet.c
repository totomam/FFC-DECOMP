#include "ffc/types.h"
typedef struct { int32_t x0, y0, x1, y1; } Rect;
typedef struct { int32_t x, y; } Pt;
typedef struct Ele { void **vt; } Ele;
typedef void (*Fn)(Rect *, Ele *);
static inline int hit(Ele *e, Pt p) {
    Rect *rp;
    Rect r; rp = &r;
    ((Fn)e->vt[4])(&r, e);
    int32_t x = p.x, y = p.y;
    return rp->x0 <= x && x < rp->x1 && rp->y0 <= y && y < rp->y1;
    return rp->x0 <= p.x && p.x < rp->x1 && rp->y0 <= p.y && p.y < rp->y1;
}
int32_t func_ov004_0214ccf4(uint8_t *self, Pt p) {
    Ele *e = *(Ele **)(self + 0xc0);
    if (e != 0) {
        if (hit(e, p)) return 1;
    }
    {
        Ele **q;
        for (q = *(Ele ***)(self + 0xc4); q != *(Ele ***)(self + 0xc4) + *(int32_t *)(self + 0xc8); q++) {
            if (hit(*q, p)) return 1;
        }
    }
    {
        Ele **q;
        for (q = *(Ele ***)(self + 0xd0); q != *(Ele ***)(self + 0xd0) + *(int32_t *)(self + 0xd4); q++) {
            if (hit(*q, p)) return 1;
        }
    }
    return 0;
}
