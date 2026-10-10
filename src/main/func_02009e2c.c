#include "ffc/types.h"

typedef void (*vfn_t)(void *, void *);

void func_02009e2c(void *a, void *b) {
    void **vt = *(void ***)a;
    ((vfn_t)vt[4])(a, b);
}
