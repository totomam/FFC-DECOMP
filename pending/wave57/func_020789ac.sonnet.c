#include "ffc/types.h"

extern uint32_t func_02078508(int a, int b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_020786d0(void *p);

typedef struct Ctx {
    uint8_t *base;
    uint32_t w;
    uint32_t h;
    uint8_t depth;
    uint32_t extra;
} Ctx;

typedef struct Inner {
    uint8_t a;
    uint8_t b;
    uint8_t pad[4];
    uint8_t c6;
} Inner;

typedef struct Mid {
    uint8_t pad[8];
    Inner *c;
} Mid;

typedef struct Pp {
    Inner *q;
    uint32_t f4;
} Pp;

typedef struct Blit {
    uint8_t *dst;
    uint32_t f4;
    int x;
    int y;
    uint32_t cnt;
    uint32_t ip;
    uint32_t prod;
    uint32_t c6;
    uint32_t depth;
    uint32_t nm1;
} Blit;

void func_020789ac(Ctx *s, Mid **a, int x, int y, int n, Pp *pp)
{
    Blit st;
    int pitch = (s->depth << 6) / 8;
    uint32_t w = s->w;
    uint32_t h = s->h;
    uint32_t cnt = pp->q->b;
    uint32_t ip = (*a)->c->b;
    uint8_t *base;
    uint32_t cw, ch, e1, e2;
    int xr, yr, xs, ys, nx, ny, x0, y0, row, yc, col, xc;
    uint32_t xe, ye, r;

    if (cnt == 0) return;
    xr = x + (int)cnt;
    if (xr < 0) return;
    yr = y + (int)ip;
    if (yr < 0) return;
    xs = 0;
    if (x > 0) xs = x >> 3;
    ys = 0;
    if (y > 0) ys = y >> 3;
    xe = ((uint32_t)xr + 7) >> 3;
    if (xe >= w) xe = w;
    ye = ((uint32_t)yr + 7) >> 3;
    if (ye >= h) ye = h;
    nx = (int)xe - xs;
    ny = (int)ye - ys;
    if (nx < 0) return;
    if (ny < 0) return;
    if (x >= 0) x &= 7;
    if (y >= 0) y &= 7;
    x0 = x - (nx << 3);
    y0 = y - (ny << 3);

    base = s->base;
    st.f4 = pp->f4;
    st.cnt = cnt;
    st.ip = ip;
    st.c6 = (*a)->c->c6;
    st.prod = (*a)->c->a * st.c6;
    st.depth = s->depth;
    st.nm1 = n - 1;

    cw = s->w; ch = s->h;
    e1 = s->extra & 0xff; e2 = (s->extra >> 8) & 0xff;
    row = y;
    yc = ys;
    while (row > y0) {
        st.y = row;
        col = x;
        xc = xs;
        while (col > x0) {
            r = func_02078508(xc, yc, cw, ch, e1, e2);
            st.dst = base + r * pitch;
            st.x = col;
            func_020786d0(&st);
            col -= 8;
            xc++;
        }
        row -= 8;
        yc++;
    }
}
