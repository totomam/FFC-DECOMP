#include "ffc/types.h"
typedef struct S { uint32_t (**vt)(struct S *, int, int, int); } S;
void func_02070aec(S *p, int a, int b, int c)
{
    p->vt[6](p, a, b, c);
}
