#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} Pt;

typedef void (*GetPosFn)(Pt *out, void *self);

void func_ov007_021a0f34(Pt *out, uint8_t *p) {
    Pt d2, s2;
    volatile Pt s;
    Pt a;
    volatile Pt d;
    Pt b;
    Pt *pa = &a;
    Pt *pb = &b;
    void *o;
    int32_t sx, sy, dx, dy;

    o = *(void **)(p + 0x98);
    ((GetPosFn)(*(void ***)o)[4])(pa, o);
    sx = pa->x + 0x19;
    sy = pa->y + 8;
    s.x = sx; s.y = sy;
    s2.x = sx; s2.y = sy;

    o = *(void **)(p + 0x98);
    ((GetPosFn)(*(void ***)o)[4])(pb, o);
    dx = pb->x - 0x19;
    dy = pb->y - 8;
    d.x = dx; d.y = dy;
    d2.x = dx; d2.y = dy;

    out[0] = d2;
    out[1] = s2;
}
