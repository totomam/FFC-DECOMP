#include "ffc/types.h"
typedef struct S { uint32_t (**vt)(struct S *, int, int, int); } S;
void func_02070bcc(S *p, int a, int b, int c)
{
    p->vt[9](p, a, b, c);
}
