#include "ffc/types.h"

struct S {
    int pad0[5];
    int f14;
    int f18;
    int f1c;
    int pad1[4];
    int (*f30)(struct S *, int, int, int, int);
};

extern int func_ov001_02181ddc(struct S *p);

int func_ov001_02180230(struct S *p, int a1, int a2, int a3, int x, int *out) {
    *out = 0;
    if (p == 0) {
        return 1;
    }
    if (p->f30 == 0) {
        return 1;
    }
    if (x == 0 || a3 == 0) {
        a3 = 0;
        x = a3;
    }
    p->f1c++;
    *out = p->f30(p, a1, a2, a3, x);
    {
        int t = p->f1c - 1;
        p->f1c = t;
        if (p->f14 != 0 && t == 0) {
            func_ov001_02181ddc(p);
            return 0;
        }
    }
    return 1;
}
