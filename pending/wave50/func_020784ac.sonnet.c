#include "ffc/types.h"

extern int32_t func_02078400(void *a, void *b, int32_t n, int32_t *pn);

typedef struct {
    int32_t max;
    int32_t r;
} Loc;

void func_020784ac(int32_t *out, void *a, void *b, int32_t c, int32_t n) {
    volatile Loc loc = {0, 0};
    int32_t i = 1;
    int32_t r;
    int8_t *p;
    int32_t *o;
    int32_t m;
    if (n != 0) {
        do {
            r = func_02078400(a, b, n, &n);
            if (r > loc.max) {
                loc.max = r;
            }
            i++;
        } while (n != 0);
    }
    p = *(int8_t **)a;
    r = (i - 1) * (c + p[1]) - c;
    o = out;
    o[0] = loc.max;
    loc.r = r;
    o[1] = r;
}
