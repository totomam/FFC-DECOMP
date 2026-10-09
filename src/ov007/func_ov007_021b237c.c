#include "ffc/types.h"

typedef void (*vfn_t)(void *, int, int);

void func_ov007_021b237c(uint8_t *p) {
    void *obj = *(void **)(p + 0x94);
    vfn_t *vt = *(vfn_t **)obj;
    vt[14](obj, 3, 0);
}
