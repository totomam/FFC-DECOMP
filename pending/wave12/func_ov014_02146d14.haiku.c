/* cflags: -nothumb */
#include "ffc/types.h"

typedef void (*vfn_t)(void *);

void func_ov014_02146d14(void *a) {
    void **vt = *(void ***)a;
    ((vfn_t)vt[5])(a);
}
