#include "ffc/types.h"

typedef void (*vfn_t)(void *, void *);

void func_020058f8(void *a, void *b) {
    void **vt = *(void ***)b;
    ((vfn_t)vt[4])(a, b);
}
