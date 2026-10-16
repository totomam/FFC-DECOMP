#include "ffc/types.h"
typedef struct { uint32_t *p; uint32_t x; } P;
typedef struct { P cur; P end; } It;
typedef struct { uint32_t *p; } Out;
extern int func_ov009_021a5cdc(uint32_t c, uint32_t *x, uint32_t *y);
static inline Out cp(P f, P l, Out d) {
    while (f.p != l.p) { *d.p++ = *f.p++; }
    return d;
}
static inline int both(uint32_t *a, uint32_t *ae, uint32_t *b, uint32_t *be) {
    int r = 0;
    if (a != ae && b != be) r = 1;
    return r;
}
void func_ov009_021a56fc(Out *ret, It a, It b, Out o, uint32_t c) {
    uint32_t *be = b.end.p, *ae = a.end.p;
    while (both(a.cur.p, ae, b.cur.p, be)) {
        if (func_ov009_021a5cdc(c, b.cur.p, a.cur.p)) { *o.p = *b.cur.p; b.cur.p++; }
        else { *o.p = *a.cur.p; a.cur.p++; }
        o.p++;
    }
    if (a.cur.p == a.end.p) *ret = cp(b.cur, b.end, o);
    else *ret = cp(a.cur, a.end, o);
}
