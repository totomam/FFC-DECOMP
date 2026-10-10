#include "ffc/types.h"

typedef void (*VFn)(void *);

void func_ov002_02198bf4(uint8_t *p) {
    void *obj = *(void **)(p + 0x114);
    VFn fn = (VFn)(((void **)(*(void **)obj))[8]);
    fn(obj);
}
