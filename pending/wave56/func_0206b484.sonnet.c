#include "ffc/types.h"

typedef struct {
    int32_t x0, y0, x1, y1;
} Rect;

extern void func_0206b07c(void *p);
extern void func_0206b188(void *p, int32_t x0, int32_t x1, int32_t y);

static inline Rect MkRect(int32_t a, int32_t b, int32_t c, int32_t d) {
    Rect r;
    r.x0 = a; r.y0 = b; r.x1 = c; r.y1 = d;
    return r;
}

void func_0206b484(void *p, Rect r) {
    Rect a = r;
    Rect q;
    Rect c;
    Rect d;
    Rect e;
    int32_t y;

    if (((uint8_t *)p)[0x48] != 0 && ((uint8_t *)p)[0x49] == 0) {
        func_0206b07c(p);
    }
    q = r;
    c.x0=0; c.y0=0; c.x1=256; c.y1=192;
    if (q.x1 <= 0 || c.x1 <= q.x0 || q.y1 <= 0 || c.y1 <= q.y0) return;
    d = MkRect(0, 0, 256, 192);
    e = d;
    if (a.x0 < e.x0) a.x0 = e.x0;
    if (a.y0 < e.y0) a.y0 = e.y0;
    if (a.x1 > e.x1) a.x1 = e.x1;
    if (a.y1 > e.y1) a.y1 = e.y1;
    for (y = a.y0; y < a.y1; y++) {
        func_0206b188(p, a.x0, a.x1, y);
    }
}
