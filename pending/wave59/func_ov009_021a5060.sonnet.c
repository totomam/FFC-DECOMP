#include "ffc/types.h"
typedef struct { int *p; int v; } P;
typedef struct { int *a; int *b; } R;
extern int func_ov009_021a5cdc(int c, int *a);
extern void func_ov009_021a5c58(int *a, int *b, int c);
extern void func_ov009_021a57b8(int *a, int *b, P p, int c);
extern P func_ov009_021a56fc(P buf, P x1, P x1b, P x2, int *first, int cmp);
extern void func_ov009_021a51d4(int *a, int *b, int *c, int n1, int n2, P p, P q, int cmp);
static inline int dist(int *const *a, int *const *b){ return *b - *a; }
void func_ov009_021a5060(R r, P buf, P buf2, int cmp)
{
    #define first r.a
#define last r.b
    int n = dist(&first, &last);
    int *mid;
    if (n <= 1) return;
    if (n == 2) {
        int *l = last - 1;
        if (func_ov009_021a5cdc(cmp, l)) {
            int t = *first; int u = *l;
            *first = u; *l = t;
        }
        return;
    }
    if (n <= 20) {
        func_ov009_021a5c58(first, last, cmp);
        return;
    }
    mid = first + (n - n / 2);
    if (n <= buf2.p - buf.p) {
        P e, x1, x2;
        func_ov009_021a57b8(first, mid, buf, cmp);
        e.p = buf.p + (n - n / 2); e.v = buf.v;
        func_ov009_021a57b8(mid, last, e, cmp);
        x1 = e;
        x2.p = buf.p + n; x2.v = buf.v;
        func_ov009_021a56fc(buf, x1, x1, x2, first, cmp);
        return;
    }
    {
    R rr1, rr2;
    rr1.a=first; rr1.b=mid; rr2.a=mid; rr2.b=last;
    func_ov009_021a5060(rr1, buf, buf2, cmp);
    func_ov009_021a5060(rr2, buf, buf2, cmp);
    func_ov009_021a51d4(first, mid, last, mid - first, last - mid, buf, buf2, cmp);
    }
}
