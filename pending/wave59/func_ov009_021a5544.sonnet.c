#include "ffc/types.h"
extern int func_ov009_021a5cdc(void *c, uint32_t *a, uint32_t *b);
typedef struct { uint32_t *p; uint32_t x; } It;
typedef struct { It l; It f; } R;
#define CB(F,L,O,RES) { R r_; r_.f = (F); r_.l = (L); uint32_t *o_ = (O); \
    while (r_.l.p != r_.f.p) { o_--; r_.l.p--; *o_ = *r_.l.p; } RES = o_; }
void func_ov009_021a5544(uint32_t **ret, uint32_t *a, uint32_t *b, It f2, It l2, uint32_t *out, void *cmp) {
    uint32_t *p1, *p2, *res; It y;
    if (a == b) { CB(f2, l2, out, res); *ret = res; return; }
    if (f2.p == l2.p) { while (b != a) { b--; out--; *out = *b; } *ret = out; return; }
    p2 = l2.p - 1; p1 = b - 1;
    for (;;) {
        if (func_ov009_021a5cdc(cmp, p2, p1)) {
            *--out = *p1;
            if (a == p1) { y = l2; y.p=p2+1; CB(f2, y, out, res); *ret = res; return; }
            p1--;
        } else {
            *--out = *p2;
            if (f2.p == p2) { p1++; while (p1 != a) { p1--; out--; *out = *p1; } *ret = out; return; }
            p2--;
        }
    }
}
