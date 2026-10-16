#include "ffc/types.h"
typedef struct { int32_t a,b,c,d,e,f,g,h,i; } S;
void func_02080194(S *p, int32_t a, int32_t b)
{
    int32_t z = 0;
    p->a = b;
    p->i = b;
    p->b = z;
    p->d = z;
    p->f = z;
    p->h = z;
    p->c = -a;
    p->g = a;
    p->e = 0x1000;
}
