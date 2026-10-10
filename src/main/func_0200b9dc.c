#include "ffc/types.h"

extern void func_02061360(void *p);

typedef void (*vfn_t)(void *, uint32_t);

void func_0200b9dc(void *a, uint32_t b)
{
    uint32_t i;
    func_02061360(a);
    for (i = 0; i < 2; i++) {
        void *o = ((void **)a)[7 + i];
        if (o != 0) {
            ((vfn_t)((void **)(*(void ***)o))[5])(o, b);
        }
    }
}
