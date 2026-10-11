#include "ffc/types.h"

typedef void (*VFn)(void *self, int a, int b);

void func_ov007_021b241c(void *p) {
    uint8_t *b = (uint8_t *)p;
    int state = *(int *)(b + 0xb8);
    if (state == 0 || state == 3) {
        return;
    }
    void *obj = *(void **)(b + 0xb0);
    VFn *vt = *(VFn **)obj;
    vt[14](obj, 3, 1);
}
