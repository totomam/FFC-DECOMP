#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c;
    int32_t d;
} Rect;

void func_ov004_0214ce20(Rect *out, uint8_t *p) {
    Rect res_storage;
    Rect *res;
    Rect bounds;
    Rect clip;
    void *inner;
    void **vt;
    int32_t x, y, z, w;

    bounds.a = 0;
    bounds.b = 0;
    bounds.c = 0x100;
    bounds.d = 0xc0;
    clip = bounds;

    inner = *(void **)(p + 0x9c);
    vt = *(void ***)inner;
    res = &res_storage;
    ((void (*)(Rect *, void *))vt[7])(res, inner);

    w = res->d < clip.d ? res->d : clip.d;
    z = res->c < clip.c ? res->c : clip.c;
    y = res->b > clip.b ? res->b : clip.b;
    x = res->a > clip.a ? res->a : clip.a;
    out->a = x;
    out->b = y;
    out->c = z;
    out->d = w;
}
