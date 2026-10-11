#include "ffc/types.h"

typedef struct {
    void *a;
    void *b;
} Pair;

extern void *func_02081210(void *object, void *arg);

void func_ov003_02148130(void **out, Pair *p, void *x, ...)
{
    void *t = func_02081210(p->b, x);
    out[0] = func_02081210(p->a, x);
    out[1] = t;
}
