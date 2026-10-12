#include "ffc/types.h"

typedef struct {
    uint8_t *base;
    uint32_t f4;
    uint32_t f8;
    uint8_t mode;
    uint8_t pad[3];
    int32_t stride;
} Obj;

extern void func_02078604(uint8_t *dst, int32_t left, int32_t top, int32_t w, int32_t h, uint32_t v, int32_t mode);

void func_02078b7c(Obj *o, uint32_t v, int32_t x, int32_t y, int32_t w, int32_t h)
{
    int32_t yy, hc, hcc, x_end, y_end, x1, y1;
    uint8_t *row;
    int32_t x0, bpp, row_adv, mode;
    uint32_t t;
    int32_t y0, xx, left, top, wc, wcc;
    uint8_t *p;

    x_end = x + w;
    y_end = y + h;
    mode = o->mode;

    if (mode == 4) {
        t = (v << 4) | v;
        t |= t << 8;
    } else {
        t = (v << 8) | v;
    }
    v = t | (t << 16);

    x0 = x;
    x0 &= ~7;
    y0 = y;
    y0 &= ~7;
    x1 = x_end;
    x1 += 7;
    x1 &= ~7;
    y1 = y_end;
    y1 += 7;
    y1 &= ~7;

    bpp = (mode << 6) / 8;
    row_adv = o->stride * bpp;
    row = o->base + bpp * (x0 / 8 + (y0 / 8) * o->stride);

    for (yy = y0; yy < y1; yy += 8) {
        top = (yy < y) ? y - yy : 0;
        hc = y_end - yy;
        if (hc > 8) {
            hc = 8;
        }
        hcc = hc - top;
        p = row;
        for (xx = x0; xx < x1; xx += 8) {
            left = (xx < x) ? x - xx : 0;
            wc = x_end - xx;
            if (wc > 8) {
                wc = 8;
            }
            wcc = wc - left;
            func_02078604(p, left, top, wcc, hcc, v, mode);
            p += bpp;
        }
        row += row_adv;
    }
}
