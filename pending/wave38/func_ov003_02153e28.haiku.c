#include "ffc/types.h"

extern int32_t func_02081210(int32_t a, int32_t b);

typedef struct {
    int32_t x0;
    int32_t y0;
    int32_t w;
    int32_t h;
} Rect;

typedef struct {
    int32_t x;
    int32_t y;
} Point;

int32_t func_ov003_02153e28(Rect *self, Point *p)
{
    Point pt;
    Rect rc;
    Point *pp = &pt;
    Rect *rp = &rc;
    int32_t a;
    int32_t b;

    a = func_02081210(p->y, 0x2000);
    b = func_02081210(p->x, 0x2000);
    pp->x = b;
    pp->y = a;
    pt.x = pt.x >> 12;
    pt.y = pt.y >> 12;

    rp->x0 = 0;
    rp->y0 = 0;
    rp->w = self->w;
    rp->h = self->h;

    if (rp->x0 > pp->x || pp->x >= rp->w || rp->y0 > pp->y || pp->y >= rp->h) {
        return -1;
    }
    return pp->x + pp->y * rp->w;
}
