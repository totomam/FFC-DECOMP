#include "ffc/types.h"

extern int32_t func_02078508(int32_t col, int32_t row, uint32_t a, uint32_t b, uint32_t lo, uint32_t hi);
extern void func_02078604(uint8_t *p, int32_t xc, int32_t yc, int32_t w, int32_t h, uint32_t v, int32_t mode);

struct Obj {
    uint8_t *base;
    uint32_t a;
    uint32_t b;
    uint8_t mode;
    uint32_t w;
};

void func_02078c94(struct Obj *o, uint32_t p1, int32_t x, int32_t y, int32_t w, int32_t h) {
    int32_t xr = x + w;
    int32_t yb = y + h;
    int32_t mode = o->mode;
    uint32_t v;
    int32_t x0;
    int32_t y0;
    int32_t x1;
    int32_t y1;
    int32_t stride;
    int32_t row;
    int32_t col;
    int32_t ycur;
    uint8_t *base;
    uint32_t a;
    uint32_t b;
    uint32_t lo;
    uint32_t hi;

    if (mode == 4) {
        v = (p1 << 4) | p1;
        v = v | (v << 8);
    } else {
        v = (p1 << 8) | p1;
    }
    v = v | (v << 16);

    x0 = x & ~7;
    y0 = y & ~7;
    x1 = (xr + 7) & ~7;
    y1 = (yb + 7) & ~7;
    a = o->a;
    b = o->b;
    base = o->base;
    lo = o->w & 0xff;
    hi = (o->w >> 8) & 0xff;
    stride = (mode * 64) / 8;
    col = x0 / 8;
    row = y0 / 8;

    for (ycur = y0; ycur < y1; ycur += 8) {
        int32_t r7 = 0;
        int32_t hh;
        int32_t xcur;
        int32_t cc = col;
        if (ycur < y) {
            r7 = y - ycur;
        }
        hh = yb - ycur;
        if (hh > 8) {
            hh = 8;
        }
        hh -= r7;
        for (xcur = x0; xcur < x1; xcur += 8) {
            int32_t c = 0;
            int32_t ww = xr - xcur;
            int32_t idx;
            if (xcur < x) {
                c = x - xcur;
            }
            if (ww > 8) {
                ww = 8;
            }
            ww -= c;
            idx = func_02078508(cc, row, a, b, lo, hi);
            func_02078604(base + idx * stride, c, r7, ww, hh, v, mode);
            cc++;
        }
        row++;
    }
}
