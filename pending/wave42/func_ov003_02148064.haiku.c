#include "ffc/types.h"

typedef struct {
    int32_t lo;
    int32_t hi;
} Range;

void func_ov003_02148064(int32_t *out, int32_t *q, int32_t *p) {
    Range r;
    Range *rp = &r;
    int32_t best = 0x7fffffff;
    int32_t d;

    rp->lo = p[0];
    rp->hi = p[1];

    d = p[1] + p[2] - q[1];
    if (d > 0 && d < best) {
        best = d;
        rp->lo = p[0];
        rp->hi = q[1] - p[2];
    }

    d = q[3] - (p[1] - p[2]);
    if (d > 0 && d < best) {
        best = d;
        rp->lo = p[0];
        rp->hi = q[3] + p[2];
    }

    d = p[0] + p[2] - q[0];
    if (d > 0 && d < best) {
        best = d;
        rp->lo = q[0] - p[2];
        rp->hi = p[1];
    }

    d = q[2] - (p[0] - p[2]);
    if (d > 0 && d < best) {
        best = d;
        rp->lo = q[2] + p[2];
        rp->hi = p[1];
    }

    out[0] = rp->lo - p[0];
    out[1] = rp->hi - p[1];
}
