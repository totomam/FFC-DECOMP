#include "ffc/types.h"

typedef void (*vfn_t)(void *, void *);

void func_ov006_021b4624(void *a, void *b) {
    void **vt = *(void ***)((uint8_t *)a + 0x14);
    ((vfn_t)vt[1])(a, b);
}
