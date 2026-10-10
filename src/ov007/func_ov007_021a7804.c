#include "ffc/types.h"

typedef void (*VFn)(void *, int, int);

void func_ov007_021a7804(uint8_t *self, int flag) {
    int r1;
    void *obj;
    if (flag) {
        r1 = 2;
    } else {
        r1 = 1;
    }
    obj = *(void **)(self + 0x98);
    ((VFn *)*(void **)obj)[14](obj, r1, 0);
}
