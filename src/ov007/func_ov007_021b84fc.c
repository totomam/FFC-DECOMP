#include "ffc/types.h"

typedef void (*vfn_t)(void *, int, int);

void func_ov007_021b84fc(uint8_t *p, int x)
{
    if (x != 0) {
        void *o = *(void **)(p + 0x94);
        void **vt = *(void ***)o;
        ((vfn_t)vt[14])(o, 3, 0);
    } else {
        void *o = *(void **)(p + 0x94);
        void **vt = *(void ***)o;
        ((vfn_t)vt[14])(o, 2, 0);
    }
}
