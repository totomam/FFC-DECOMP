#include "ffc/types.h"

typedef void (*VFn)(void *, int, int);

void func_ov004_02147384(uint8_t *p, int x)
{
    if (p[0xb5]) {
        p[0xb5] = 0;
        return;
    }
    if (x == *(int *)(p + 0xd0)) {
        void *o = *(void **)(p + 0xcc);
        void **vt = *(void ***)o;
        ((VFn)vt[14])(o, 2, 0);
        return;
    }
    if (x == *(int *)(p + 0xd4)) {
        void *o = *(void **)(p + 0xcc);
        void **vt = *(void ***)o;
        ((VFn)vt[14])(o, 3, 0);
    }
}
