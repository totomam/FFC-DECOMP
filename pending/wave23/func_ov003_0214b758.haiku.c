#include "ffc/types.h"

extern void func_02056bf4(void *a, void *b);

void func_ov003_0214b758(uint8_t *p, uint32_t idx)
{
    void **arr = (void **)(p + 0x3f8);
    void *obj = arr[idx];
    if (obj == 0) {
        return;
    }
    func_02056bf4(*(void **)(p + 0x3f0), obj);
    obj = arr[idx];
    if (obj != 0) {
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[1])(obj);
    }
    arr[idx] = 0;
}
