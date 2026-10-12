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
    int32_t x_end = x + w;
    int32_t y_end = y + h;
    int32_t mode = o->mode;
    uint32_t t;
    int32_t bpp;
    int32_t x0, x1, y0, y1, xx, yy;
    int32_t left, top, wc, hc;
    int32_t row_adv;
    uint8_t *p;
    uint8_t *row;

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
    row = o->base + bpp * (x0 / 8 + o->stride * (y0 / 8));

    for (yy = y0; yy < y1; yy += 8) {
        top = (yy < y) ? y - yy : 0;
        hc = y_end - yy;
        if (hc > 8) {
            hc = 8;
        }
        hc -= top;
        p = row;
        for (xx = x0; xx < x1; xx += 8) {
            left = (xx < x) ? x - xx : 0;
            wc = x_end - xx;
            if (wc > 8) {
                wc = 8;
            }
            wc -= left;
            func_02078604(p, left, top, wc, hc, v, mode);
            p += bpp;
        }
        row += row_adv;
    }
}
