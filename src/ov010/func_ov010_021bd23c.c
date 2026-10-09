#include "ffc/types.h"

typedef void (*vfn_t)(void *, int, int);

void func_ov010_021bd23c(uint8_t *p) {
    void *obj = *(void **)(p + 0x9c);
    vfn_t *vt = *(vfn_t **)obj;
    vt[14](obj, 1, 0);
}
