#include "ffc/types.h"


typedef struct {
    int32_t x0, y0, x1, y1;
} Rect;

typedef struct {
    int32_t x, y;
} Pt;

extern void func_0206b07c(uint8_t *p);
extern void func_0206b188(uint8_t *p, int32_t x0, int32_t x1, int32_t y);
extern int32_t data_020b1bb8[];
extern int32_t data_020b1bf4;
extern int32_t data_020b1bf0;
extern int32_t data_020b1bec;
extern int32_t data_020b1be8;
extern int32_t data_020a0300;

void func_0206bba0(uint8_t *p, Pt c, int32_t n)
{
    int32_t a = c.x;
    int32_t b = c.y;
    int32_t xs[4];
    int32_t *q;
    int32_t v1, v2, v3, v4;
    int32_t i, j, d;
    Rect t, rc, scr;

    if (p[0x48] != 0 && p[0x49] == 0) {
        func_0206b07c(p);
    }
    if (n == 0) {
        return;
    }
    t.x0 = a - n;
    t.y0 = b - n;
    t.x1 = a + n;
    t.y1 = b + n;
    rc = t;
    scr.x0 = 0;
    scr.y0 = 0;
    scr.x1 = 0x100;
    scr.y1 = 0xc0;
    if (rc.x1 <= scr.x0 || rc.x0 >= scr.x1 || rc.y1 <= scr.y0 || rc.y0 >= scr.y1 || n < 0) {
        return;
    }
    j = n;
    d = n;
    for (i = 0; i <= j; i++) {
        xs[0] = a - j;
        q = &xs[0];
        if (data_020b1bb8[15] >= xs[0]) {
            q = &data_020b1bf4;
        }
        if (*q >= scr.x1) {
            q = &data_020a0300;
        }
        v1 = *q;

        xs[1] = a + j;
        q = &xs[1];
        if (data_020b1bb8[14] >= xs[1]) {
            q = &data_020b1bf0;
        }
        if (*q >= scr.x1) {
            q = &data_020a0300;
        }
        v2 = *q;

        if (b - i >= 0 && b - i < 0xc0) {
            func_0206b188(p, v1, v2, b - i);
        }
        if (b + i - 1 >= 0 && b + i - 1 < 0xc0) {
            func_0206b188(p, v1, v2, b + i - 1);
        }

        xs[2] = a - i;
        q = &xs[2];
        if (data_020b1bb8[13] >= xs[2]) {
            q = &data_020b1bec;
        }
        if (*q >= scr.x1) {
            q = &data_020a0300;
        }
        v3 = *q;

        xs[3] = a + i;
        q = &xs[3];
        if (data_020b1bb8[12] >= xs[3]) {
            q = &data_020b1be8;
        }
        if (*q >= scr.x1) {
            q = &data_020a0300;
        }
        v4 = *q;

        if (b - j >= 0 && b - j < 0xc0) {
            func_0206b188(p, v3, v4, b - j);
        }
        if (b + j - 1 >= 0 && b + j - 1 < 0xc0) {
            func_0206b188(p, v3, v4, b + j - 1);
        }

        d -= 2 * i - 1;
        if (d < 0) {
            j--;
            d += 2 * j;
        }
    }
}
