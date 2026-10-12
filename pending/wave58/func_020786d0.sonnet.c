#include "ffc/types.h"

extern uint32_t func_0207969c(void *rd, int32_t n);

typedef struct {
    uint32_t ptr;
    uint8_t a;
    uint8_t b;
} Rd;

typedef struct {
    uint32_t *data;
    uint8_t *bytes;
    int32_t x;
    int32_t y;
    int32_t w;
    int32_t h;
    int32_t s1;
    int32_t s2;
    int32_t bpp;
    uint32_t field;
} P;

void func_020786d0(P *p)
{
    uint8_t *bytes; uint32_t *data; int32_t s1, s2; uint32_t fld; int32_t sx, sy, ex, ey, x, y, bpp; uint32_t c0, c1, c;
    int32_t off;
    uint32_t *row, *rend;

    x = p->x;
    sx = x;
    if (sx < 0) sx = 0;
    y = p->y;
    sy = y;
    if (sy < 0) sy = 0;
    ex = x + p->w;
    if (ex >= 8) ex = 8;
    ey = y + p->h;
    if (ey >= 8) ey = 8;
    if (y > 0) y = 0;
    if (x > 0) x = 0;
    s1 = p->s1;
    s2 = p->s2;
    off = -y * s1 + -x * s2;
    bytes = p->bytes;
    bpp = p->bpp;
    sx *= bpp;
    ex *= bpp;

    if (bpp == 4) {
        Rd rd;
        data = p->data;
        fld = p->field;
        row = data + sy;
        rend = data + ey;
        c0 = sx;
        c1 = ex;
        if (row < rend) do {
            uint32_t word = *row;
            int32_t t = off;
            rd.ptr = (uint32_t)(bytes + ((uint32_t)off >> 3));
            rd.a = 0;
            rd.b = 0;
            func_0207969c(&rd, t % 8);
            for (c = c0; c < c1; c += 4) {
                uint32_t v = func_0207969c(&rd, s2);
                if (v) {
                    word = (word & ~(0xfu << c)) | ((v + fld) << c);
                }
            }
            *row = word;
            off += s1;
            row++;
        } while (row < rend);
    } else {
        Rd rd;
        data = p->data;
        fld = p->field;
        row = (uint32_t *)((uint8_t *)data + sy * 8);
        rend = (uint32_t *)((uint8_t *)data + ey * 8);
        c0 = sx;
        c1 = ex;
        if (row < rend) do {
            uint32_t w0 = row[0];
            uint32_t w1 = row[1];
            int32_t t = off;
            rd.ptr = (uint32_t)(bytes + ((uint32_t)off >> 3));
            rd.a = 0;
            rd.b = 0;
            func_0207969c(&rd, t % 8);
            for (c = c0; c < c1; c += 8) {
                uint32_t v = func_0207969c(&rd, s2);
                if (v) {
                    if (c < 32) {
                        w0 = (w0 & ~(0xffu << c)) | ((v + fld) << c);
                    } else {
                        w1 = (w1 & ~(0xffu << (c - 32))) | ((v + fld) << (c - 32));
                    }
                }
            }
            row[0] = w0;
            row[1] = w1;
            off += s1;
            row += 2;
        } while (row < rend);
    }
}
