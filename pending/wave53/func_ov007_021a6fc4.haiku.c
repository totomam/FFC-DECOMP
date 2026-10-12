#include "ffc/types.h"

extern int32_t func_ov007_021a6f44(void *p, int32_t v);
extern void func_ov007_021a72dc(void *loc, int32_t a, int32_t b);
extern void func_ov007_021a7218(void *loc);

typedef struct {
    uint8_t *base;
    int32_t rows;
    int32_t extra;
} Obj;

typedef struct {
    uint8_t *base;
    int32_t rows;
    int32_t extra;
} Loc;

void func_ov007_021a6fc4(Obj *p, int32_t n, const uint16_t *src) {
    Loc loc;
    int32_t orig;
    int32_t i;
    int32_t k;
    uint16_t *d;
    const uint16_t *s;
    uint8_t *t;
    uint8_t *w;
    uint8_t *end;
    int32_t v;
    int32_t *pe;
    int32_t tmp;

    pe = &p->extra;
    loc.base = 0;
    loc.rows = 0;
    loc.extra = 0;

    v = func_ov007_021a6f44(p, p->rows + n - *pe);
    func_ov007_021a72dc(&loc, v, 0);

    orig = p->rows;
    d = (uint16_t *)(loc.base + 18 * p->rows + 18 * loc.rows);
    if (n != 0) {
        for (i = n; i != 0; i--) {
            s = src;
            for (k = 9; k != 0; k--) {
                *d++ = *s++;
            }
        }
    }
    loc.rows = loc.rows + n;

    end = p->base;
    t = end + 18 * p->rows;
    w = loc.base + 18 * orig;
    while (t > end) {
        t -= 18;
        w -= 18;
        {
            const uint16_t *ss = (const uint16_t *)t;
            uint16_t *dd = (uint16_t *)w;
            for (k = 9; k != 0; k--) {
                *dd++ = *ss++;
            }
        }
        orig--;
        loc.rows++;
    }

    p->rows = 0;
    tmp = *pe;
    *pe = loc.extra;
    loc.extra = tmp;
    {
        uint8_t *tb = p->base;
        p->base = loc.base;
        loc.base = tb;
    }
    p->rows = loc.rows;
    loc.rows = 0;
    func_ov007_021a7218(&loc);
}
