#include "ffc/types.h"

extern int32_t func_02084ca4(int32_t, int32_t, int32_t);

typedef int32_t (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
    int32_t f4;
    int32_t f8;
} Obj;

int32_t func_0207202c(Obj *a, int32_t b)
{
    int32_t r = ((VFn *)a->vtbl)[2](a);
    return func_02084ca4(b, a->f8, r);
}
