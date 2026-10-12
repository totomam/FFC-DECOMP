#include "ffc/types.h"

extern int32_t func_ov001_021719e0(int32_t *a, int32_t b);
extern int32_t func_ov000_021652a8(int32_t a, int32_t b, int32_t c, void *d, int32_t e, int32_t f);
extern void func_ov001_02171d4c(int32_t *p);
extern void func_02090398(int32_t a, int32_t b, int32_t c);
extern int32_t data_ov001_0218f348;

typedef int32_t (*ov001_fn)(int32_t *, int32_t *, int32_t, int32_t *, int32_t, int32_t *);

int32_t func_ov001_02171ee8(int32_t *p)
{
    int32_t v14 = 0;
    int32_t v10 = 0;
    int32_t x, y, z, w, s;
    ov001_fn fn;
    int32_t r = 0;
    int32_t d;


    while (1) {
        x = p[53];
        y = p[50];
        v14 = p[52] - x;
        z = p[43];
        w = p[41];
        s = w + z;
        v10 = p[42] - z;
        fn = (ov001_fn)p[113];
        r = fn(p, &p[101], y + x, &v14, s, &v10);
        if (r == 2) {
            if (func_ov001_021719e0(&p[40], p[45]) == 0) {
                return 0;
            }
        } else if (r == 3) {
            return 0;
        }
        if (r == 2 && v10 == 0) {
            continue;
        }
        if (v14 > p[52]) {
            func_ov000_021652a8(8, 4, 1, &data_ov001_0218f348, v14, p[52]);
            return 0;
        }
        p[53] += v14;
        p[43] += v10;
        if (v10 > 0) {
            continue;
        }
        if (p[53] > 0xff) {
            d = p[52] - p[53];
            if (d == 0) {
                func_ov001_02171d4c(&p[49]);
            } else {
                func_02090398(p[50], p[50] + p[53], d);
                p[53] = 0;
                p[52] = d;
            }
        }
        return 1;
    }
}
