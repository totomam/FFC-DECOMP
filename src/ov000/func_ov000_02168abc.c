#include "ffc/types.h"
extern int func_ov000_0216888c(void*, void*, int, int, int);
extern void func_ov000_02168784(void*, void*);
extern void func_ov000_0216885c(void*, void*, int);
typedef struct S { uint32_t *tbl; void *a; int pad; int (*fn)(void*, void*); int d; } S;
void func_ov000_02168abc(S *p, void *q) {
    if (p == 0) return;
    {
        int i = p->fn(q, p->a);
        int r = func_ov000_0216888c((void*)p->tbl[i], q, p->d, 0, 0);
        if (r == -1) {
            func_ov000_02168784((void*)p->tbl[i], q);
            return;
        }
        func_ov000_0216885c((void*)p->tbl[i], q, r);
    }
}
