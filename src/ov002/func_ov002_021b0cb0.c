#include "ffc/types.h"

typedef uint32_t (*VFn)(void *, uint32_t);

uint32_t func_ov002_021b0cb0(uint8_t *p, uint32_t b) {
    void *obj = *(void **)(p + 0x128);
    VFn *vt = *(VFn **)obj;
    return vt[15](obj, b);
}
