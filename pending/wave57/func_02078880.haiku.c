#include "ffc/types.h"

extern void func_020786d0(void *args);

typedef struct Inner { uint8_t b0; uint8_t b1; uint8_t pad2[4]; uint8_t b6; } Inner;
typedef struct Q0 { uint8_t pad[8]; Inner *in; } Q0;
typedef struct S5 { Inner *in; int v; } S5;
typedef struct P { uint8_t *base; int w; int h; uint8_t c; uint8_t pad[3]; int stride; } P;
typedef struct Args { uint8_t *dst; int v; int xi; int yi; int fl; int qb; int m38; int m3c; int c; int n1; } Args;

void func_02078880(P *p, Q0 **q, int x, int y, int n, S5 *s) {
    uint8_t *base = p->base;
    int fl = s->in->b1;
    int qb = (*q)->in->b1;
    int xe, ye, xs, ys, r7, xlim, xi; volatile int rowadv, ylim, w, h;
    uint8_t *dst;
    Args a;

    if (fl == 0) return;
    if (x + fl < 0) return;
    if (y + qb < 0) return;
    xs = (x > 0) ? (x >> 3) : 0;
    ys = (y > 0) ? (y >> 3) : 0;
    xe = (x + fl + 7) >> 3;
    if ((uint32_t)xe >= (uint32_t)p->w) xe = p->w;
    ye = (y + qb + 7) >> 3;
    if ((uint32_t)ye >= (uint32_t)p->h) ye = p->h;
    w = xe - xs;
    h = ye - ys;
    if (w < 0 || h < 0) return;
    r7 = (p->c << 6) / 8;
    rowadv = (p->stride - w) * r7;
    dst = base + (xs + ys * p->stride) * r7;
    if (x >= 0) x &= 7;
    if (y >= 0) y &= 7;
    xlim = x - (w << 3);
    ylim = y - (h << 3);
    a.v = s->v;
    a.fl = fl;
    a.qb = qb;
    a.m38 = (*q)->in->b6 * (*q)->in->b0;
    a.m3c = (*q)->in->b6;
    a.c = p->c;
    a.n1 = n - 1;
    if (y > ylim) {
        do {
            xi = x;
            a.yi = y;
            if (xi > xlim) {
                do {
                    a.dst = dst;
                    a.xi = xi;
                    func_020786d0(&a);
                    xi -= 8;
                    dst += r7;
                } while (xi > xlim);
            }
            dst += rowadv;
            y -= 8;
        } while (y > ylim);
    }
}
