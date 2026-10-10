#include "ffc/types.h"

typedef int32_t (*vfn_t)(void *);

void *func_02098210(void *p, int32_t a, int32_t b) {
    uint8_t *q = (uint8_t *)p;
    vfn_t *vt = *(vfn_t **)p;
    uint8_t f;
    if (vt[5](p) < 0) {
        return 0;
    }
    if (a != 0 || b != 0) {
        f = 1;
    } else {
        f = 0;
    }
    q[0x26] = f;
    if (q[0x26] == 0) {
        q[0x28] = 0;
    }
    return p;
}
