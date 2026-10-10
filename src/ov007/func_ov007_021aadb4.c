#include "ffc/types.h"

typedef void (*VFn)(void *out, void *self);

void func_ov007_021aadb4(void *a, void *obj) {
    uint8_t buf[16];
    if (obj != 0) {
        VFn *vt = *(VFn **)obj;
        vt[4](buf, obj);
    }
}
