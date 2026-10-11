#include "ffc/types.h"

typedef void (*VFn)(void *self, int a, int b);

void func_ov005_02198778(void *p) {
    uint8_t *b = (uint8_t *)p;
    if (b[0x104] == 0) {
        void *obj = *(void **)(b + 0x12c);
        void *self = *(void **)((uint8_t *)obj + 0x98);
        VFn fn = (VFn)((void **)*(void **)self)[14];
        fn(self, 1, 0);
        return;
    }
    {
        void *obj = *(void **)(b + 0x12c);
        void *self = *(void **)((uint8_t *)obj + 0x98);
        VFn fn = (VFn)((void **)*(void **)self)[14];
        fn(self, 4, 0);
    }
}
