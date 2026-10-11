#include "ffc/types.h"

typedef void (*VFn)(void *self, int a, int b);

void func_ov007_0219a8c4(uint8_t *p) {
    void *o = *(void **)(p + 0xa8);
    ((VFn)(*(void ***)o)[14])(o, 3, 1);
    if (*(p + 0xa4) == 0) {
        void *o2 = *(void **)(p + 0xac);
        ((VFn)(*(void ***)o2)[14])(o2, 3, 1);
    }
}
