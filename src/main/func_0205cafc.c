#include "ffc/types.h"

int32_t func_0205cafc(int32_t **p, int32_t **q) {
    int32_t *lim = p[2];
    int32_t *v = *q;
    int32_t *u = p[0];
    int32_t r = u - v;
    if (u >= lim) {
        if (v < lim) {
            r -= p[3] - p[1];
        }
    } else {
        if (v >= lim) {
            r += p[3] - p[1];
        }
    }
    return r;
}
