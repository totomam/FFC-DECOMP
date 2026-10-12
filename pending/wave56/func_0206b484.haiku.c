#include "ffc/types.h"

typedef struct {
    int32_t x0;
    int32_t y0;
    int32_t x1;
    int32_t y1;
} Rect;

extern void func_0206b07c(void *p);
extern void func_0206b188(void *p, int32_t x0, int32_t x1, int32_t y);

void func_0206b484(void *p, Rect r) {
    Rect a;
    Rect c;
    Rect d;
    Rect e;
    Rect q;
    int32_t y;

    a = r;
    if (((uint8_t *)p)[0x48] != 0 && ((uint8_t *)p)[0x49] == 0) {
        func_0206b07c(p);
    }
    q = r;
    c.x0 = 0;
    c.y0 = 0;
    c.x1 = 256;
    c.y1 = 192;

    if (q.x1 > 0 && q.x0 < c.x1 && q.y1 > 0 && q.y0 < c.y1) {
        e.x0 = 0;
        e.y0 = 0;
        e.x1 = 256;
        e.y1 = 192;
        d = e;

        if (a.x0 < d.x0) {
            a.x0 = d.x0;
        }
        if (a.y0 < d.y0) {
            a.y0 = d.y0;
        }
        if (a.x1 > d.x1) {
            a.x1 = d.x1;
        }
        if (a.y1 > d.y1) {
            a.y1 = d.y1;
        }
        for (y = a.y0; y < a.y1; y++) {
            func_0206b188(p, a.x0, a.x1, y);
        }
    }
}
