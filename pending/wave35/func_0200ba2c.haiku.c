#include "ffc/types.h"

extern void func_02061368(void *p, uint32_t b);

typedef void (*vfn_t)(void *, uint32_t);

void func_0200ba2c(void *a, uint32_t b)
{
    uint32_t i;
    func_02061368(a, b);
    for (i = 0; i < 2; i++) {
        void *o = ((void **)a)[7 + i];
        if (o != 0) {
            ((vfn_t)((void **)(*(void ***)o))[7])(o, b);
        }
    }
}
