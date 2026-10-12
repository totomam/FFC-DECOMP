#include "ffc/types.h"

typedef struct {
    int32_t x;
    int32_t y;
} Pt;

typedef void (*GetPosFn)(Pt *out, void *self);

void func_ov007_021a0f34(Pt *out, uint8_t *p) {
    Pt v[4];
    Pt *pa;
    Pt *pb;
    void *o;

    pa = &v[2];
    pb = &v[3];

    o = *(void **)(p + 0x98);
    ((GetPosFn)(*(void ***)o)[4])(pa, o);
    v[0].x = pa->x + 0x19;
    v[0].y = pa->y + 8;

    o = *(void **)(p + 0x98);
    ((GetPosFn)(*(void ***)o)[4])(pb, o);
    v[1].x = pb->x - 0x19;
    v[1].y = pb->y - 8;

    out[0] = v[1];
    out[1] = v[0];
}
