#include "ffc/types.h"

extern void func_ov012_021d0038(void *p);

typedef void (*VFn)(void *, int, int);

void func_ov012_021d10d4(uint8_t *self, int flag)
{
    uint8_t *inner;

    func_ov012_021d0038(*(void **)(self + 0xc0));
    inner = *(uint8_t **)(self + 0xc0);

    if (inner[0x33c] == 0) {
        void *obj = *(void **)(self + 0xc4);
        ((VFn)(*(void ***)obj)[14])(obj, 1, 1);
        return;
    }
    if (flag != 0) {
        void *obj = *(void **)(self + 0xc4);
        ((VFn)(*(void ***)obj)[14])(obj, 3, 1);
        return;
    }
    {
        void *obj = *(void **)(self + 0xc4);
        ((VFn)(*(void ***)obj)[14])(obj, 2, 1);
    }
}
