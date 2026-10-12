#include "ffc/types.h"

extern void func_02056c4c(void *p);

typedef void (*VFn)(void *self, int a, int b);

void func_ov011_021bd410(uint8_t *p, int flag)
{
    func_02056c4c(p + 0x14);
    if (flag) {
        void *o = *(void **)(p + 0x98);
        VFn f = (VFn)((void **)*(void **)o)[14];
        f(o, 3, 0);
        o = *(void **)(p + 0x9c);
        f = (VFn)((void **)*(void **)o)[14];
        f(o, 3, 0);
    } else {
        void *o = *(void **)(p + 0x98);
        VFn f = (VFn)((void **)*(void **)o)[14];
        f(o, 2, 0);
        o = *(void **)(p + 0x9c);
        f = (VFn)((void **)*(void **)o)[14];
        f(o, 2, 0);
    }
}
