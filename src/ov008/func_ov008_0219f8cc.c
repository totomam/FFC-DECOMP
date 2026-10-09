#include "ffc/types.h"

typedef void (*vfn_t)(void *, int, int);

void func_ov008_0219f8cc(uint8_t *p) {
    void *obj = *(void **)(p + 0x98);
    vfn_t *vt = *(vfn_t **)obj;
    vt[14](obj, 1, 0);
}
