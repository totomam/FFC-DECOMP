#include "ffc/types.h"


typedef struct {
    int32_t x, y;
} Pt;

typedef struct {
    int32_t x0, y0, x1, y1;
} Rect;


extern void func_0206b07c(uint8_t *p);
extern void func_0206b188(uint8_t *p, int32_t x0, int32_t x1, int32_t y);
extern int32_t data_020b1bb8[];
extern int32_t data_020b1bf4;
extern int32_t data_020b1bf0;
extern int32_t data_020b1bec;
extern int32_t data_020b1be8;
extern int32_t data_020a0300;

static inline int ok(Rect r, Rect s)
{
    return r.x1 > s.x0 && r.x0 < s.x1 && r.y1 > s.y0 && r.y0 < s.y1;
}

void func_0206bba0(uint8_t *p, Pt c, int32_t n, ...)
{
    Pt cc = c;
    int32_t xs[4];
    int32_t *q;
    int32_t v1, v2, v3, v4;
    int32_t i, j;
    Rect t, scr;

    if (p[0x48] != 0 && p[0x49] == 0) {
        func_0206b07c(p);
    }
    if (n == 0) {
        return;
    }
    t.x0 = cc.x - n;
    t.y0 = cc.y - n;
    t.x1 = cc.x + n;
    t.y1 = cc.y + n;
    scr.x0 = 0;
    scr.y0 = 0;
    scr.x1 = 0x100;
    scr.y1 = 0xc0;
    if (!ok(t, scr) || n < 0) {
        return;
    }
    j = n;
    
    for (i = 0; i <= j; i++) {
        xs[0] = cc.x - j;
        q = &xs[0];
        if (data_020b1bb8[15] >= xs[0]) {
            q = &data_020b1bf4;
        }
        if (*q >= scr.x1) {
            q = &data_020a0300;
        }
        v1 = *q;

        xs[1] = cc.x + j;
        q = &xs[1];
        if (data_020b1bb8[14] >= xs[1]) {
            q = &data_020b1bf0;
        }
        if (*q >= scr.x1) {
            q = &data_020a0300;
        }
        v2 = *q;

        if (cc.y - i >= 0 && cc.y - i < 0xc0) {
            func_0206b188(p, v1, v2, cc.y - i);
        }
        if (cc.y + i - 1 >= 0 && cc.y + i - 1 < 0xc0) {
            func_0206b188(p, v1, v2, cc.y + i - 1);
        }

        xs[2] = cc.x - i;
        q = &xs[2];
        if (data_020b1bb8[13] >= xs[2]) {
            q = &data_020b1bec;
        }
        if (*q >= scr.x1) {
            q = &data_020a0300;
        }
        v3 = *q;

        xs[3] = cc.x + i;
        q = &xs[3];
        if (data_020b1bb8[12] >= xs[3]) {
            q = &data_020b1be8;
        }
        if (*q >= scr.x1) {
            q = &data_020a0300;
        }
        v4 = *q;

        if (cc.y - j >= 0 && cc.y - j < 0xc0) {
            func_0206b188(p, v3, v4, cc.y - j);
        }
        if (cc.y + j - 1 >= 0 && cc.y + j - 1 < 0xc0) {
            func_0206b188(p, v3, v4, cc.y + j - 1);
        }

        n -= 2 * i - 1;
        if (n < 0) {
            j--;
            n += 2 * j;
        }
    }
}
