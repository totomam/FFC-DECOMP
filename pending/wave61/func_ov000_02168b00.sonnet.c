#include "ffc/types.h"
extern int func_ov000_0216888c(int a, int b, int c, int d, int e);
extern void func_ov000_02168848(int a);
typedef struct S { int **tab; int f4; int f8; int (*fn)(int, int); int f10; } S;
int func_ov000_02168b00(S *p, int q)
{
    int idx;
    if (p == 0) return 0;
    idx = p->fn(q, p->f4);
    if (func_ov000_0216888c(p->tab[idx], q, p->f10, 0, 0) == -1) return 0;
    func_ov000_02168848(p->tab[idx]);
    return 1;
}
