#include "ffc/types.h"
extern int func_ov000_0216888c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern int func_ov000_0216876c(uint32_t a);
typedef struct S { uint32_t *tbl; uint32_t f4; uint32_t f8; int (*f0c)(uint32_t, uint32_t); uint32_t f10; } S;
int func_ov000_02168b44(S *p, uint32_t a) {
    int r;
    int i;
    int t;
    if (p == 0) return 0;
    i = p->f0c(a, p->f4);
    r = 0;
    t = func_ov000_0216888c(p->tbl[i], a, p->f10, 0, r);
    if (t != r - 1)
        r = func_ov000_0216876c(p->tbl[i]);
    return r;
}
