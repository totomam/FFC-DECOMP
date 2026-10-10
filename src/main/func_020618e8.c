#include "ffc/types.h"

typedef void (*vfn_t)(void *);

void func_020618e8(uint8_t *p) {
    uint8_t *a = *(uint8_t **)(p + 0x18);
    void *b = *(void **)a;
    void **vt = *(void ***)b;
    vfn_t f = (vfn_t)vt[0];
    f(b);
}
