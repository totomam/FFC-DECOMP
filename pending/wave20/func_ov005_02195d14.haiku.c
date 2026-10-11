#include "ffc/types.h"

typedef void (*VFn)(void *, int);

void func_ov005_02195d14(uint8_t *self, int a) {
    void *o = *(void **)(self + 0x24);
    ((VFn *)(*(void **)o))[8](o, a);
    if (*(int *)(self + 0x44) != 2) {
        void *o2 = *(void **)(self + 0x28);
        ((VFn *)(*(void **)o2))[8](o2, a);
    }
}
