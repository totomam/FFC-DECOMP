#include "ffc/types.h"

extern int func_ov000_0216888c(void *p, void *q, void *r, int s, int t);
extern int func_ov000_0216876c(void *p);

struct S {
    void **tbl;
    void *f4;
    uint32_t pad8;
    uint32_t (*cb)(void *, void *);
    void *f10;
};

int func_ov000_02168b44(struct S *a, void *b)
{
    int r;
    int idx;
    int res;

    if (a == 0) {
        return 0;
    }
    idx = a->cb(b, a->f4);
    r = 0;
    res = func_ov000_0216888c(a->tbl[idx], b, a->f10, r, r);
    if (res != -1) {
        r = func_ov000_0216876c(a->tbl[idx]);
    }
    return r;
}
