#include "ffc/types.h"

extern void func_02056c4c(void *p);

typedef void (*VFn)(void *self, int a, int b);

void func_ov009_021a3f94(uint8_t *p, int flag) {
    func_02056c4c(p + 0x14);
    if (flag != 0) {
        void *obj = *(void **)(p + 0x98);
        VFn fn = (VFn)((void **)*(void **)obj)[14];
        fn(obj, 3, 0);
    } else {
        void *obj = *(void **)(p + 0x98);
        VFn fn = (VFn)((void **)*(void **)obj)[14];
        fn(obj, 2, 0);
    }
}
