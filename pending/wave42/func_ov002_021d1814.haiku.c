#include "ffc/types.h"

extern int func_0209a76c(int a, int b);

typedef struct {
    int a[5];
    int v[6];
    int pad;
} Ent;

typedef struct {
    int lo;
    int hi;
} Range;

void func_ov002_021d1814(int *out, Range r, Ent *tbl)
{
    Range q;
    int n;
    int i;
    q = r;
    n = func_0209a76c(q.hi - q.lo, 0x30);
    if (n > 0) {
        do {
            int half = n / 2;
            Ent *e = (Ent *)(q.lo + half * 0x30);
            int s = 0;
            int t = 0;
            for (i = 0; i < 6; i++) {
                s += e->v[i];
            }
            for (i = 0; i < 6; i++) {
                t += tbl->v[i];
            }
            if (s > t) {
                q.lo += (half + 1) * 0x30;
                n -= half + 1;
            } else {
                n = half;
            }
        } while (n > 0);
    }
    *out = q.lo;
}
