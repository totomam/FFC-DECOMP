#include "ffc/types.h"

typedef struct { int32_t *first; int32_t *last; } Range;
typedef struct { int32_t *p; int32_t v; } PV;

extern int func_ov009_021a5cdc(void *ctx, int32_t *p);
extern void func_ov009_021a5c58(Range r, void *ctx);
extern void func_ov009_021a57b8(Range r, PV p, void *ctx);
extern void func_ov009_021a56fc(PV *out, PV p1, int32_t *x, int32_t a, int32_t *h, int32_t b,
                                int32_t *m, int32_t c, int32_t *e, void *ctx);
extern void func_ov009_021a51d4(int32_t *a0, int32_t *mid, int32_t *a1, void *ctx,
                                int32_t lc, int32_t rc, PV p1, PV p2);
extern void func_ov009_021a5060(Range r, PV p1, PV p2, void *ctx);

void func_ov009_021a5060(Range r, PV p1, PV p2, void *ctx)
{
    int32_t *a0 = r.first;
    int32_t *a1 = r.last;
    int32_t n = a1 - a0;
    int32_t half;
    int32_t *mid;

    if (n <= 1) {
        return;
    }
    if (n == 2) {
        if (func_ov009_021a5cdc(ctx, a1 - 1)) {
            int32_t t = *a0;
            *a0 = *(a1 - 1);
            *(a1 - 1) = t;
        }
        return;
    }
    if (n <= 20) {
        func_ov009_021a5c58(r, ctx);
        return;
    }

    half = n - n / 2;
    mid = a0 + half;

    if (n <= p2.p - p1.p) {
        Range lo = { a0, mid };
        Range hi = { mid, a1 };
        PV e[3];
        PV q = { p1.p + half, p1.v };
        e[0].p = p1.p + n;
        e[0].v = p1.v;
        e[1] = q;
        e[2] = q;
        func_ov009_021a57b8(lo, p1, ctx);
        func_ov009_021a57b8(hi, q, ctx);
        func_ov009_021a56fc(e + 3, p1, p1.p + half, p1.v, p1.p + half, p1.v,
                            p1.p + n, p1.v, a0, ctx);
    } else {
        Range lo = { a0, mid };
        Range hi = { mid, a1 };
        func_ov009_021a5060(lo, p1, p2, ctx);
        func_ov009_021a5060(hi, p1, p2, ctx);
        func_ov009_021a51d4(a0, mid, a1, ctx, half, n - half, p1, p2);
    }
}
