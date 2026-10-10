#include "ffc/types.h"

typedef uint32_t (*vfn_t)(void *);

uint32_t func_02070aec(void *p)
{
    vfn_t *vt = *(vfn_t **)p;
    return vt[6](p);
}
