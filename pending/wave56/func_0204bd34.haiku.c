#include "ffc/types.h"

extern int32_t func_0204b540(int32_t *p, int32_t a, int32_t b, int32_t *c, int32_t *d);
extern int32_t func_0204b640(int32_t *p, int32_t a, int32_t b, int32_t c, int32_t d);
extern int32_t func_0204b600(int32_t *p, int32_t a, int32_t b);

int32_t func_0204bd34(int32_t *p, int32_t arg1, int32_t *out)
{
    int32_t c;
    int32_t t = 0;
    int32_t n, r, d, k;

    n = func_0204b540(p, 12, p[0], &c, &t);
    if (n > 0) {
        do {
            r = func_0204b540(p, n, p[0], &c, &t);
            if (c > 0 && func_0204b640(p, n, c, arg1, 0) == 0) {
                if (c + 1 >= p[0]) {
                    return 0;
                }
                d = func_0204b540(p, c + 1, p[0], 0, &t);
                if (d <= 0) {
                    k = p[0];
                } else {
                    if (d < t) {
                        return -1;
                    }
                    k = d - t;
                }
                r = func_0204b600(p, c + 1, k);
                if (r < 0) {
                    r = k;
                }
                *out = r;
                return k - r;
            }
            n = r;
        } while (n > 0);
    }
    return -1;
}
