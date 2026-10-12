#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
} Pair;

typedef void (*VFnP)(void *, Pair);

void func_020628ac(void *self, Pair a, Pair b)
{
    Pair c;
    Pair d;
    Pair *pc = &c;
    Pair *pd = &d;
    pc->a = a.a;
    pc->b = a.b;
    ((VFnP)(*(void ***)self)[3])(self, c);
    pd->a = b.a - a.a;
    pd->b = b.b - a.b;
    ((VFnP)(*(void ***)self)[5])(self, d);
}
