#include "ffc/types.h"

void func_ov005_021974e4(uint8_t *self)
{
    int i;
    int one = 1;
    for (i = 0; i < 3; i++) {
        void *obj = *(void **)(self + i * 4 + 0x84);
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[10])(obj);
        obj = *(void **)(self + i * 4 + 0x84);
        vt = *(void ***)obj;
        ((void (*)(void *, int, int))vt[14])(obj, one, one);
    }
}
