#include "ffc/types.h"

extern int func_0209a76c(int a, int b);

typedef struct {
    int a[5];
    int v[6];
    int pad;
} Ent;

void func_ov002_021d1814(int *out, Ent *lo, Ent *hi, Ent *tbl, ...)
{
    int n;
    int i;
    Ent **lp = &lo;
    n = func_0209a76c((int)hi - (int)lo, 0x30);
    if (n > 0) {
        do {
            int half = n / 2;
            Ent *e = *lp + half;
            int s = 0;
            int t = 0;
            for (i = 0; i < 6; i++) {
                s += e->v[i];
            }
            for (i = 0; i < 6; i++) {
                t += tbl->v[i];
            }
            if (s > t) {
                *lp = e + 1;
                n -= half + 1;
            } else {
                n = half;
            }
        } while (n > 0);
    }
    *out = (int)*lp;
}
